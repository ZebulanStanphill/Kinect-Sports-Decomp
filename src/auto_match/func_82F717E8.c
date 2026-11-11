double fn_82F717E8(double x, int exponent)
{
    double result = x;
    *(unsigned short *)&result = (unsigned short)((*(unsigned short *)&x & 0x800f) | ((exponent + 0x3fe) << 4));
    return result;
}
