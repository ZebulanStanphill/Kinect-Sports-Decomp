void fn_82639300(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2940);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffffffdf) | ((value & 0x1) << 5);
    *flags |= 0x100u;
}
