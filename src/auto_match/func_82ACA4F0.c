/* Keeps at most maxCount bits of a four-bit mask, dropping the highest ones. The
   table holds the bit count of every four-bit value in three bits each. */
static __forceinline unsigned int RotateRight_82ACA4F0(unsigned int value, unsigned int shift)
{
    return (value >> shift) | (value << (32 - shift));
}

unsigned int fn_82ACA4F0(unsigned int mask, unsigned int maxCount)
{
    unsigned int count;
    unsigned int extra;

    count = (unsigned int)(0x8DA691691448ULL >> mask >> mask >> mask) & 7;
    if (count <= maxCount) {
        return mask;
    }
    extra = count - maxCount;
    do {
        mask -= RotateRight_82ACA4F0(1, _CountLeadingZeros(mask) + 1);
        extra--;
    } while (extra != 0);
    return mask;
}
