static __forceinline float RandomUnit(unsigned int *seed)
{
    union {
        unsigned int bits;
        float value;
    } u;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    u.bits = (*seed & 0x7fffff) | 0x3f800000;
    return u.value - 1.0f;
}

int fn_825206B8(unsigned int *seed, int min, int max)
{
    return (int)((float)(max - min) * RandomUnit(seed) + (float)min);
}
