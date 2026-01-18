gcc src/week2/t3/gets.c \
    -fno-stack-protector \
    -z execstack \
    -no-pie \
    -g \
    -o unsafe_demo
