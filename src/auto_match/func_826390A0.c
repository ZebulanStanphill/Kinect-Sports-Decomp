void fn_826390A0(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2948);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffdfffff) | ((value & 0x1) << 21);
    *flags |= 0x40u;
}
