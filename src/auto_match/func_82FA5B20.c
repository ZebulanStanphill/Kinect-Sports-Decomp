typedef struct Pool_82FA5B20 {
    unsigned int firstLevelBitmap;      /* 0x00 */
    unsigned int secondLevelBitmap[24]; /* 0x04 */
    void *blocks[24][32];               /* 0x64 */
} Pool_82FA5B20;

extern unsigned int _CountLeadingZeros(unsigned int);

static __forceinline int LowestSetBit(unsigned int word)
{
    const unsigned int reverse = word & (~word + 1);
    const int bit = 32 - _CountLeadingZeros(reverse);

    return bit - 1;
}

void *fn_82FA5B20(Pool_82FA5B20 *pool, int *firstLevel, int *secondLevel)
{
    int fl = *firstLevel;
    int sl = *secondLevel;
    unsigned int slMap = pool->secondLevelBitmap[fl] & (~0 << sl);

    if (!slMap) {
        const unsigned int flMap = pool->firstLevelBitmap & (~0 << (fl + 1));

        if (!flMap) {
            return 0;
        }
        fl = LowestSetBit(flMap);
        *firstLevel = fl;
        slMap = pool->secondLevelBitmap[fl];
    }
    sl = LowestSetBit(slMap);
    *secondLevel = sl;
    return pool->blocks[fl][sl];
}
