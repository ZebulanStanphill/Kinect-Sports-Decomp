void fn_826389B0(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x292c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffffff0) | value;
    *flags |= 0x2000u;
}
