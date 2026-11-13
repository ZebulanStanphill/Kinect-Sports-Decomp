void fn_82637A98(int object, unsigned char value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2948);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffffff8) | (value & 7);
    *flags |= 0x40u;
}
