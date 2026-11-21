typedef union DoubleBits_82F6DF80 {
    double value;

    struct {
        unsigned int high; /* 0x0 */
        unsigned int low;  /* 0x4 */
    } words;
} DoubleBits_82F6DF80;

double fn_82F6DF80(double value)
{
    DoubleBits_82F6DF80 result;

    result.value = 0.0;
    result.words.low = ((DoubleBits_82F6DF80 *)&value)->words.low;
    result.words.high = (((DoubleBits_82F6DF80 *)&value)->words.high & 0x7fffffff) |
                        (~((DoubleBits_82F6DF80 *)&value)->words.high & 0x80000000);
    return result.value;
}
