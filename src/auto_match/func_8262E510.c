/* Binary search of a table of 6-byte entries {unsigned short id; int offset (unaligned)}
   for a string id; returns the wide string at that offset, or an empty string. */

typedef struct StringTable_8262E510 {
    unsigned int pad0;
    unsigned int count; /* 0x4 */
} StringTable_8262E510;

typedef struct StringBank_8262E510 {
    StringTable_8262E510 *table; /* 0x0 */
    unsigned char *entries;      /* 0x4 */
    unsigned short *strings;     /* 0x8 */
    unsigned int busy;           /* 0xc */
} StringBank_8262E510;

extern unsigned short lbl_8219088C[];

unsigned short *fn_8262E510(StringBank_8262E510 *bank, int id)
{
    unsigned char *lo;
    unsigned char *hi;
    unsigned char *mid;
    unsigned int num;
    unsigned int half;
    int result;

    if (bank != 0 && bank->busy == 0) {
        num = bank->table->count;
        lo = bank->entries;
        hi = lo + (num - 1) * 6;
        while (lo <= hi) {
            if ((half = num / 2) != 0) {
                mid = lo + (num & 1 ? half : (half - 1)) * 6;
                if (!(result = id - *(unsigned short *)mid)) {
                    goto found;
                } else if (result < 0) {
                    hi = mid - 6;
                    num = num & 1 ? half : half - 1;
                } else {
                    lo = mid + 6;
                    num = half;
                }
            } else if (num) {
                mid = (id - *(unsigned short *)lo) == 0 ? lo : 0;
                goto found;
            } else {
                break;
            }
        }
        mid = 0;
    found:
        if (mid != 0) {
            return bank->strings + *(int *)(mid + 2);
        }
    }
    return lbl_8219088C;
}
