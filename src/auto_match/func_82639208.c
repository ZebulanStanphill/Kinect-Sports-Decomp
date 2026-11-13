void fn_82639208(int object, unsigned int param_2)
{
    unsigned int *bits = (unsigned int *)(object + 0x2efc);
    unsigned long long *flags = (unsigned long long *)(object + 0x10);

    *bits = (*bits & 0xff8fffff) | ((param_2 & 7) << 20);
    *flags |= 0x20000u;
}
