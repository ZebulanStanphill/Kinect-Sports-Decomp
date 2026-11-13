void fn_82638220(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2934);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffffffb) | ((value & 1) << 2);
    *flags |= 0x800u;
}
