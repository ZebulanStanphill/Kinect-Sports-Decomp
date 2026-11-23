typedef struct Bitmap_8264D380 {
    char pad0[0x20];
    unsigned int words[1]; /* 0x20 */
} Bitmap_8264D380;

void fn_8264D380(Bitmap_8264D380 *map, unsigned int start, unsigned int end, int set)
{
    unsigned int firstWord = start >> 5;
    unsigned int lastWord = end >> 5;
    unsigned int *last = &map->words[lastWord];
    unsigned int startBit = start & 0x1f;
    unsigned int endBit = end & 0x1f;
    unsigned int *p = &map->words[firstWord];

    if (set != 0) {
        if (firstWord == lastWord) {
            *p = (0xffffffff >> startBit & ~(0xffffffff >> endBit)) | *p;
        } else {
            *p = (0xffffffff >> startBit) | *p;
            p++;
            while (p < last)
                *p++ = 0xffffffff;
            *p = *p | ~(0xffffffff >> endBit);
        }
    } else {
        if (firstWord == lastWord) {
            *p = *p & ~(0xffffffff >> startBit & ~(0xffffffff >> endBit));
        } else {
            *p = *p & ~(0xffffffff >> startBit);
            p++;
            while (p < last)
                *p++ = 0;
            *p = (0xffffffff >> endBit) & *p;
        }
    }
}
