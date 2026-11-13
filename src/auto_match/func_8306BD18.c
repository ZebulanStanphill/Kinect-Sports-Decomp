extern int fn_8306BC58(void *rng);

int fn_8306BD18(int lo, int hi, void *rng)
{
    __int64 range;

    if (hi < lo)
        return lo;
    range = (__int64)hi - (__int64)lo + 1;
    if (range == 1)
        return lo;
    return (int)(fn_8306BC58(rng) % range) + lo;
}
