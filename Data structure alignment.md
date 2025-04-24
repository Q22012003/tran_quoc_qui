# Struct Memory Size in C

This is a simple C program that demonstrates how memory alignment and padding affect the size of a `struct` in C.

## 📄 Code Overview

```c
#include <stdio.h>

typedef struct {
    short s;  // 2 bytes
    int i;    // 4 bytes
    char c;   // 1 byte
} test;

int main()
{
    test t1;
    printf("sizeof: %d", sizeof(t1));  // gia tri se la 12
}
////////////////////////////////////////////////
#include <stdio.h>
typedef struct{
    int i;
    short s;
    char c;
}test;


int main()
{
    test t1;

    printf("sizeof: %d",sizeof(t1)); // gia tri se la 8
}


