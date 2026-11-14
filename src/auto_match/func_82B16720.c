/* Flush a denormal double to a signed zero. */
static __forceinline unsigned char IsNormalOrZero(double v)
{
    __int64 bits = *(__int64 *)&v;
    return (bits & 0x7fffffffffffffffLL) == 0 || (bits & 0x7ff0000000000000LL) != 0;
}
double fn_82B16720(double value)
{
    if (IsNormalOrZero(value))
        return value;
    *(unsigned __int64 *)&value &= 0x8000000000000000ULL;
    return value;
}
