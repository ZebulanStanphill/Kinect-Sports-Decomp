void fn_82638300(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2934);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffff8ff) | ((value & 7) << 8);
    *flags |= 0x800u;
}
