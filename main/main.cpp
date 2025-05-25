#include <stdio.h>
#include<stdint.h>

typedef union {
    uint16_t x;
    struct {
        uint8_t low;
        uint8_t high;
    }split_8bit;
}split_16bit;

int main()
{
    split_16bit data;
    printf("nhap 16bit: ");
    scanf_s("%hu", &data.x);

    printf("8 bit cao (high): %u (0x%02X)\n", data.split_8bit.high, data.split_8bit.high);
    printf("8 bit thap (low): %u (0x%02X)\n", data.split_8bit.low, data.split_8bit.low);

    return 0;
}