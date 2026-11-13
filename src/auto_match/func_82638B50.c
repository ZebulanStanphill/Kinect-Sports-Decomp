void fn_82638B50(int object, int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2930);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xffff0fff) | (value << 12);
    *flags |= 0x1000u;
}
