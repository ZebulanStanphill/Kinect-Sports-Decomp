void fn_826392D0(int object, unsigned int value)
{
    unsigned int *bits = (unsigned int *)(object + 0x2940);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xfffffffb) | ((value & 0x1) << 2);
    *flags |= 0x100u;
}
