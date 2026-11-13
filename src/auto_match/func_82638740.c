void fn_82638740(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2948);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffff7fff) | ((value & 1) << 15);
    *flags |= 0x40u;
}
