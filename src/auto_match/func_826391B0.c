void fn_826391B0(int object, unsigned int param_2)
{
    float *value_slot = (float *)(object + 0x29d0);
    unsigned long long *flags = (unsigned long long *)(object + 0x20);

    *value_slot = *(float *)&param_2;
    *flags |= 0x80000000u;
}
