void fn_82638B78(int object, int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2930);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfff0ffff) | (value << 16);
    *flags |= 0x1000u;
}
