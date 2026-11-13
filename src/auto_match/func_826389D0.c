void fn_826389D0(int object, int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x292c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffffff0f) | (value << 4);
    *flags |= 0x2000u;
}
