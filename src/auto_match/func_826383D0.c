void fn_826383D0(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2934);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xff8fffff) | ((value & 7) << 20);
    *flags |= 0x800u;
}
