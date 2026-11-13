void fn_82637FC0(int object, unsigned char value)
{
    unsigned int *bits = (unsigned int *)(object + 0x293c);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffffff8) | (value & 7);
    *flags |= 0x200u;
}
