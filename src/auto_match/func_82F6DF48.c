typedef union DoubleBits_82F6DF48 {
    double value;

    struct {
        unsigned int high; /* 0x0 */
        unsigned int low;  /* 0x4 */
    } words;
} DoubleBits_82F6DF48;

double fn_82F6DF48(double magnitude, double sign)
{
    DoubleBits_82F6DF48 result;

    result.value = 0.0;
    result.words.low = ((DoubleBits_82F6DF48 *)&magnitude)->words.low;
    result.words.high = (((DoubleBits_82F6DF48 *)&magnitude)->words.high & 0x7fffffff) |
                        (((DoubleBits_82F6DF48 *)&sign)->words.high & 0x80000000);
    return result.value;
}
