typedef struct Paged_82766E60 {
    int pad0[3];
    unsigned char **pages; /* 0x0c: 4 KB pages */
} Paged_82766E60;

typedef struct Table_82766E60 {
    int pad0[2];
    Paged_82766E60 *data; /* 0x08 */
    int count;            /* 0x0c */
    int offset;           /* 0x10 */
} Table_82766E60;

static __forceinline unsigned char ByteAt(Paged_82766E60 *p, unsigned int pos)
{
    return p->pages[pos >> 12][pos & 0xfff];
}

int fn_82766E60(Table_82766E60 *self, unsigned short key)
{
    int hi = self->count - 1;
    int lo = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int idx = self->offset + mid * 8;
        unsigned int k = ByteAt(self->data, idx) | (ByteAt(self->data, idx + 1) << 8);
        if (key == k)
            return mid;
        if (key < k)
            hi = mid - 1;
        else
            lo = mid + 1;
    }
    return -1;
}
