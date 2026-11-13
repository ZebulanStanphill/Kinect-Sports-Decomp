void fn_826390F8(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x293c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffffffef) | ((value & 0x1) << 4);
    *flags |= 0x200u;
}
