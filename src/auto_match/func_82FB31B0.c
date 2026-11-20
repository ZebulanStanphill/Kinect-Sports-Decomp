typedef struct Entry_82FB31B0 {
    unsigned int f0;      /* 0x0 */
    unsigned int f4;      /* 0x4 */
    unsigned int f8;      /* 0x8 */
    unsigned int fc;      /* 0xc */
    unsigned short f10;   /* 0x10 */
    unsigned short f12;   /* 0x12 */
    unsigned short f14;   /* 0x14 */
    unsigned char flag16; /* 0x16 */
    unsigned char flag17; /* 0x17 */
} Entry_82FB31B0;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *block);
extern void fn_82FB3100(void *context, Entry_82FB31B0 *entries);
extern int fn_82FB6A10(void *context, const unsigned char **data, unsigned int *size, int flags);

static __forceinline unsigned int ReadU32(const unsigned char **cursor)
{
    unsigned int value = *(const unsigned int *)*cursor;
    *cursor += 4;
    return value;
}

static __forceinline unsigned short ReadU16(const unsigned char **cursor)
{
    unsigned short value = *(const unsigned short *)*cursor;
    *cursor += 2;
    return value;
}

static __forceinline unsigned char ReadU8(const unsigned char **cursor)
{
    unsigned char value = **cursor;
    *cursor += 1;
    return value;
}

int fn_82FB31B0(void *context, const unsigned char *data, unsigned int size)
{
    int result;
    unsigned int count;
    unsigned int i;
    Entry_82FB31B0 *entries;

    result = fn_82FB6A10(context, &data, &size, 0);
    count = ReadU32(&data);
    if (count != 0) {
        entries = (Entry_82FB31B0 *)fn_82FA5060(lbl_831BC768, count * sizeof(Entry_82FB31B0));
        if (entries == 0) {
            return 2;
        }
        for (i = 0; i < count; i++) {
            entries[i].f0 = ReadU32(&data);
            entries[i].f4 = ReadU32(&data);
            entries[i].f8 = ReadU32(&data);
            entries[i].fc = ReadU32(&data);
            entries[i].f10 = ReadU16(&data);
            entries[i].f12 = ReadU16(&data);
            entries[i].f14 = ReadU16(&data);
            entries[i].flag16 = ReadU8(&data) != 0;
            entries[i].flag17 = ReadU8(&data) != 0;
        }
        fn_82FB3100(context, entries);
        fn_82FA5190(lbl_831BC768, entries);
    }
    return result;
}
