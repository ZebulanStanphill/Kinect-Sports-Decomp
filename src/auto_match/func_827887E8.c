/* Less-than on three handles: compares the entries they refer to, key by key. */
typedef struct Entry_827887E8 {
    int unk00; /* 0x00 */
    int unk04; /* 0x04 */
    int value; /* 0x08 */
} Entry_827887E8;

typedef struct Table_827887E8 {
    int unk00[3];           /* 0x00 */
    Entry_827887E8 **pages; /* 0x0c */
} Table_827887E8;

typedef struct Compare_827887E8 {
    Table_827887E8 *table; /* 0x00 */
} Compare_827887E8;

static __forceinline int ValueOf(Compare_827887E8 *self, unsigned int handle)
{
    return self->table->pages[handle >> 8][handle & 0xff].value;
}

unsigned char fn_827887E8(Compare_827887E8 *self, const unsigned int *a, const unsigned int *b)
{
    Entry_827887E8 **pages = self->table->pages;
    int a0 = pages[a[0] >> 8][a[0] & 0xff].value;
    int a1 = pages[a[1] >> 8][a[1] & 0xff].value;
    int b0 = pages[b[0] >> 8][b[0] & 0xff].value;
    int b1 = pages[b[1] >> 8][b[1] & 0xff].value;

    if (a0 != b0) {
        return a0 < b0;
    }
    if (a1 != b1) {
        return a1 < b1;
    }
    return ValueOf(self, a[2]) < ValueOf(self, b[2]);
}
