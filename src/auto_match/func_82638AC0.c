void fn_82638AC0(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x292c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0x0fffffff) | ((value & 15) << 28);
    *flags |= 0x2000u;
}
