void fn_82638BC8(int object, int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2930);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xf0ffffff) | (value << 24);
    *flags |= 0x1000u;
}
