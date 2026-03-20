#include <iomanip>
#include <iostream>

#define W 10
#define A 14
#define SEP "+"                                                                \
            << std::string(22, '-') << "+"                                     \
            << std::string(W, '-') << "+"                                      \
            << std::string(W, '-') << "+"                                      \
            << std::string(A, '-') << "+"                                      \
            << std::string(W, '-') << "+"                                      \
            << std::string(W, '-') << "+"                                      \
            << std::string(A, '-') << "+"

#define HEADER                                                                 \
    std::cout << SEP << std::endl;                                             \
    std::cout << "|" << std::setw(22) << "Step"                                \
              << "|" << std::setw(W) << "num1"                                 \
              << "|" << std::setw(W) << "num2"                                 \
              << "|" << std::setw(A) << "p"                                    \
              << "|" << std::setw(W) << "*p"                                   \
              << "|" << std::setw(W) << "ref"                                  \
              << "|" << std::setw(A) << "&ref"                                 \
              << "|" << std::endl;                                             \
    std::cout << SEP << std::endl;

#define OUTPUT(label)                                                          \
    std::cout << "|" << std::setw(22) << label                                 \
              << "|" << std::setw(W) << num1                                   \
              << "|" << std::setw(W) << num2                                   \
              << "|  " << std::setw(A - 2) << (void *)p                        \
              << "|" << std::setw(W) << *p                                     \
              << "|" << std::setw(W) << ref                                    \
              << "|  " << std::setw(A - 2) << (void *)&ref                     \
              << "|" << std::endl;                                             \
    std::cout << SEP << std::endl;

int main() {
    int num1 = 100;
    int num2 = 200;
    int *p = &num1;
    int &ref = *p;

    HEADER
    OUTPUT("Initial")

    // (i)
    *p = 50;
    OUTPUT("(i) *p = 50")

    // (ii)
    ref = ref / 2;
    OUTPUT("(ii) ref = ref / 2")

    // (iii)
    p = &num2; *p = 400;
    OUTPUT("(iii) p=&num2; *p=400")

    // (iv)
    ref = num2; ref = ref * 2;
    OUTPUT("(iv) ref=num2; ref*=2")

    // (v)
    ref = (long)&num2;
    OUTPUT("(v) ref = &num2")

    return 0;
}
