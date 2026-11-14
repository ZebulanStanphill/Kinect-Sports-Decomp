int fn_82F71810(double value)
{
    return (short)(((*(unsigned short *)&value >> 4) & 0x7ff) - 0x3fe);
}
