void fn_82638BF0(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2930);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0x0fffffff) | ((value & 0xf) << 28);
    *flags |= 0x1000u;
}
