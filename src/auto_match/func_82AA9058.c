typedef struct Desc_82AA9058 {
    char pad00[0x14];
    unsigned short channelMask; /* 0x14 */
    unsigned short format;      /* 0x16 */
    char pad18[0x34 - 0x18];
    unsigned short count; /* 0x34 */
} Desc_82AA9058;

void fn_82AA9058(Desc_82AA9058 *desc, int index, int *isLast, int *isPaired, int *isMasked)
{
    int bit = 1 << index;
    unsigned int mode;

    *isLast = 0;
    if (index == desc->count - 1 && (desc->format & 0x1000) != 0)
        *isLast = 1;
    *isMasked = 0;
    if ((desc->channelMask & bit) != 0)
        *isMasked = 1;
    *isPaired = 0;
    if (desc->count < 3)
        return;
    mode = (desc->format >> 4) & 0xf;
    if ((mode == 1 || mode == 2) && index >= 1 && index <= 2)
        *isPaired = 1;
    if ((desc->format & 0xf0) != 0x30)
        return;
    if (index < 1)
        return;
    if (index > 3)
        return;
    *isPaired = 1;
}
