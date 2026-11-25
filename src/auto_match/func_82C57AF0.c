typedef struct BitReader_82C57AF0 {
    unsigned __int64 bits; /* 0x0 */
    int count;             /* 0x8 */
} BitReader_82C57AF0;

typedef struct Entry_82C57AF0 {
    unsigned int flag : 1; /* 0x00, top bit */
    unsigned int rest : 31;
    int pad04[5];
} Entry_82C57AF0; /* 0x18 */

extern void fn_82C4E5E8(BitReader_82C57AF0 *reader);

static __forceinline unsigned int GetBit(BitReader_82C57AF0 *reader)
{
    unsigned __int64 bits = reader->bits;
    unsigned int bit = (unsigned int)(bits >> 63);

    reader->bits = bits << 1;
    if (--reader->count < 0) {
        fn_82C4E5E8(reader);
    }
    return bit;
}

/* Reads one flag per entry: an odd first entry as a single bit, then pairs coded as
   0 = (0, 0), 11 = (1, 1), 101 = (0, 1), 100 = (1, 0). */
void fn_82C57AF0(Entry_82C57AF0 *entries, int count, BitReader_82C57AF0 *reader)
{
    int i;

    i = count & 1;
    if (i != 0) {
        entries->flag = GetBit(reader);
        entries++;
    }
    for (; i < count; i += 2) {
        if (GetBit(reader)) {
            if (GetBit(reader)) {
                entries[0].flag = 1;
                entries[1].flag = 1;
            } else if (GetBit(reader)) {
                entries[0].flag = 0;
                entries[1].flag = 1;
            } else {
                entries[0].flag = 1;
                entries[1].flag = 0;
            }
        } else {
            entries[0].flag = 0;
            entries[1].flag = 0;
        }
        entries += 2;
    }
}
