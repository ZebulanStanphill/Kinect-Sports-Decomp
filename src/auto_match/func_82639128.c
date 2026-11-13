void fn_82639128(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x293c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0x00ffffff) | (value << 24);
    *flags |= 0x200u;
}
