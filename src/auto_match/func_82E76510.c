extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct Entry_82E76510 {
    unsigned char data[0x1a];
} Entry_82E76510;

typedef struct Table_82E76510 {
    Entry_82E76510 *entries;
    unsigned short count;
} Table_82E76510;

int fn_82E76510(Table_82E76510 *t, unsigned short index, void *out)
{
    if (out == 0) {
        return 0x80070057;
    }
    if (index >= t->count) {
        return 0x80070057;
    }
    memcpy(out, &t->entries[index], 0x12);
    return 0;
}
