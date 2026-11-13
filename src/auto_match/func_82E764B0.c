extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Entry_82E764B0 {
    unsigned char data[0x1a];
} Entry_82E764B0;

typedef struct Table_82E764B0 {
    Entry_82E764B0 *entries;
    unsigned short count;
} Table_82E764B0;

int fn_82E764B0(Table_82E764B0 *t, unsigned short index, const void *in)
{
    if (in == 0) {
        return 0x80070057;
    }
    if (index >= t->count) {
        return 0x80070057;
    }
    memcpy(&t->entries[index], in, 0x12);
    return 0;
}
