void fn_82638470(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2934);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xe3ffffff) | ((value & 7) << 26);
    *flags |= 0x800u;
}
