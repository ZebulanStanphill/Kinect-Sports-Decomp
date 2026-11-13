void fn_82638A20(int object, int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x292c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffff0fff) | (value << 12);
    *flags |= 0x2000u;
}
