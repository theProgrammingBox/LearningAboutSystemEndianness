#include <iostream>

int main()
{
    void* cpuArr = malloc(8);

    for (uint64_t i = 0; i < 1; i++)
        *((uint64_t*)cpuArr + i) = 0x0807060504030201ULL;

    // 8-bit version
    for (uint64_t i = 0; i < 8; i++)
    {
        uint8_t* ptr = (uint8_t*)cpuArr + i;
        for (int j = 8; j--;)
            printf("%u", (bool)((*ptr >> j) & 1));
        printf("\n");
    }
    printf("\n");

    // 16-bit version
    for (uint64_t i = 0; i < 3; i++)
    {
        uint16_t* ptr = (uint16_t*)cpuArr + i;
        for (int j = 16; j--;)
            printf("%u", (bool)((*ptr >> j) & 1));
        printf("\n");
    }
    printf("\n");

    // 32-bit version
    for (uint64_t i = 0; i < 2; i++)
    {
        uint32_t* ptr = (uint32_t*)cpuArr + i;
        for (int j = 32; j--;)
            printf("%u", (bool)((*ptr >> j) & 1));
        printf("\n");
    }
    printf("\n");

    // 64-bit version
    for (uint64_t i = 0; i < 1; i++)
    {
        uint64_t* ptr = (uint64_t*)cpuArr + i;
        for (int j = 64; j--;)
            printf("%u", (bool)((*ptr >> j) & 1));
        printf("\n");
    }
    printf("\n");

    return 0;
}