# Week 11

[slides](slides.html) | [printable](slides.html?print-pdf)

<iframe src="slides.html" width="100%" height="500px" frameborder="0"></iframe>

## Question 1

We are asked to implement a `Student` class with some basic attributes: name, age, and GPA. We'll walk through the implementation step by step, and along the way, we'll point out some modern C++ practices that will make your code much more robust and efficient.

### Starter Code

The following starter code provides the skeleton of the `Student` class. The `main()` function and `displayDetails()` method are already written — your job is to fill in the `TODO` sections.

```cpp
--8<-- "src/week11/t1/q1.cpp"
```

---

### Part 1: Private Members

First, let's define the private members. This part is straightforward. We need an `std::string` for the name, an `int` for the age, and a `double` for the GPA. We keep these `private` to enforce **encapsulation** — this means external code cannot directly access or modify these variables; it must go through the public interface we provide.

```cpp
private:
  std::string name;
  int age;
  double gpa;
```

---

### Part 2: The Constructor

Next up is the public constructor. We need a parameterized constructor to initialize our three members. We'll build this up step by step, improving the code at each stage.

#### Step 1: Body Assignment (The Basic Way)

The most straightforward approach is to assign values inside the constructor body:

```cpp
Student(std::string studentName, int studentAge, double studentGPA) {
  name = studentName;
  age = studentAge;
  gpa = studentGPA;
}
```

While this works, it's **not** the most efficient way in C++. Doing this means the compiler first creates the member variables with **default values** (e.g., an empty string for `name`, 0 for `age`, etc.), and then **overwrites** them with your assignments. That's two steps where one would suffice.

#### Step 2: Member Initializer List

Instead, we should use the **Member Initializer List**:

```cpp
Student(std::string studentName, int studentAge, double studentGPA)
    : name(studentName), age(studentAge), gpa(studentGPA) {}
```

This syntax constructs and initializes the member variables **directly in one step**. It's cleaner, faster, and is considered the **standard practice** for writing constructors in C++.

#### Step 3: Pass by Const Reference

Now let's look at the parameters themselves. For **primitive types** like `int` and `double`, passing by value is completely fine — they are small and cheap to copy.

However, for **objects** like `std::string`, passing by value creates an unnecessary copy in memory. As you've learned in the lectures, we can use **pass by const reference** (`const std::string&`) to avoid this overhead:

```cpp
Student(const std::string& studentName, int studentAge, double studentGPA)
    : name(studentName), age(studentAge), gpa(studentGPA) {}
```

By using an ampersand (`&`), we pass a **reference** to the original string instead of copying it. The `const` keyword guarantees that our constructor won't accidentally modify the passed-in string.

!!! note
    The starter code template uses `std::string` by value. Here we change it to `const std::string&` — this is the approach taught in lectures.

#### Step 4: `std::move` (Bonus — Not Required for Exams)

There is yet another approach: pass by value and use `std::move` to **transfer ownership** of the string into the member:

```cpp
Student(std::string studentName, int studentAge, double studentGPA)
    : name(std::move(studentName)), age(studentAge), gpa(studentGPA) {}
```

`std::move` doesn't actually "move" anything by itself — it casts its argument to an **rvalue reference**, telling the compiler it's safe to move from this object rather than copy it. For a `std::string`, this means transferring the internal buffer pointer instead of allocating new memory and copying all the characters.

This **pass by value + `std::move`** idiom is a common modern C++ pattern. It works especially well when the caller passes a temporary (like a string literal `"Alice"`) — in that case, no copy happens at all.

!!! info
    This is **not covered in lectures** and **not required for exams**. It's included here for those who want to understand the approach used in our final solution.

---

### Part 3: Getters

Now, let's implement the getters. The primary job of a getter is to **read data without modifying the object**.

#### Step 1: Basic Getters

The simplest approach — just return the values:

```cpp
std::string getName() { return name; }
int getAge() { return age; }
double getGPA() { return gpa; }
```

This works, but we can do better.

#### Step 2: `const` Member Functions

Notice that getters should never modify the object's state. We can make this guarantee explicit by adding the `const` keyword at the **end** of the function signature:

```cpp
std::string getName() const { return name; }
int getAge() const { return age; }
double getGPA() const { return gpa; }
```

This is a crucial concept called **`const` correctness**. It guarantees to the compiler that calling this method **will not alter the internal state** of the class.

Why does this matter? If you declare a `const` object, the compiler will **only allow** you to call methods that are marked as `const`. If you forget to add `const` to your getter, the compiler will throw an error — protecting you from accidentally modifying a constant object.

Consider the following example:

```cpp
--8<-- "src/week11/t1/test.cpp"
```

Here, `a` is declared as `const A`. The compiler only allows calling `getA()` because it is marked `const`. If `getA()` were not marked `const`, this code would fail to compile.

!!! tip "Further Reading: `mutable`"
    If you want to dive deeper, you can also look into the `mutable` keyword, which is an exception to the `const` rule — it allows a member to be modified even inside a `const` method. But that's out of scope for today.

#### Step 3: Return by Const Reference

For **primitive types** like `int` and `double`, returning by value is perfectly fine — they are small and fit right into CPU registers.

But for `std::string`, returning by value means **copying the entire string** every time the getter is called. We can avoid this by returning a **const reference** instead:

```cpp
const std::string& getName() const { return name; }
int getAge() const { return age; }
double getGPA() const { return gpa; }
```

`const std::string&` returns a reference to the internal string without copying it. The `const` on the return type prevents the caller from modifying the string through this reference.

---

### Part 4: Setters

Finally, the setters. These are straightforward as they modify the state.

```cpp
void setName(std::string studentName) { name = std::move(studentName); }
void setAge(int studentAge) { age = studentAge; }
void setGPA(double studentGPA) { gpa = studentGPA; }
```

For `setName`, we use the same **pass by value + `std::move`** pattern from the constructor — pass the string by value, then move it into the member. For the primitive types, simple assignment is all we need.

Note that here, we **don't** add `const` at the end of the function, because setters inherently modify the object's state.

---

### Complete Solution

Putting it all together, here is the full implementation:

```cpp
--8<-- "src/week11/t1/solution.cpp"
```

---

### Testing

Let's compile and run the test cases provided to verify everything works as expected.

Expected output:

```
Initial Student Details:
Student Name: Alice
Age: 20
GPA: 3.8

Student Name: Charlie
Age: 19
GPA: 3.5

Updated Student Details:
Student Name: Bob
Age: 22
GPA: 3.9
```

The output matches the expected results perfectly.

## Question 2

```cpp
--8<-- "src/week11/t2/q2.cpp"
```

## Question 3

```cpp
--8<-- "src/week11/t3/solution.cpp"
```

## Question 4

```cpp
--8<-- "src/week11/t4/solution.cpp"
```
