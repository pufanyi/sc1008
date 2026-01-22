gcc src/week2/t2/attack.c \
    -fno-stack-protector \
    -z execstack \
    -no-pie \
    -g \
    -o unsafe_demo
