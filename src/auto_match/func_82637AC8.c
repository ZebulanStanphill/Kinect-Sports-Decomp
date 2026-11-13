void fn_82637AC8(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2948);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffff807) | ((value & 255) << 3);
    *flags |= 0x40u;
}
