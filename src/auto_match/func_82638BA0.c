void fn_82638BA0(int object, int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2930);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xff0fffff) | (value << 20);
    *flags |= 0x1000u;
}
