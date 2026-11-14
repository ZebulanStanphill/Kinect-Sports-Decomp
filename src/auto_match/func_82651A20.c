extern double lbl_821954B0;     /* 16.0 */

float fn_82651A20(unsigned __int64 numerator, unsigned __int64 denominator)
{
    unsigned int nanBits = 0x7fffffff;

    if (denominator == 0) {
        return *(float *)&nanBits;
    }
    return (float)((double)numerator * lbl_821954B0 / (double)denominator);
}
