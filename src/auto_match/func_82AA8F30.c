void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct {
    char *data;
    int size;
    int pos;
} Buf;

typedef struct {
    char pad0[0x30];
    unsigned int count;
    char pad34[0x6c - 0x34];
    void *dst;
    int *sizes;
    int *offsets;
    char pad78[0xe8 - 0x78];
    Buf *buf;
} Obj;

int fn_82AA8F30(Obj *p, int idx)
{
    Buf *b;
    int off;

    if (idx < 0 || (unsigned int)idx >= p->count) {
        return -0x12;
    }
    b = p->buf;
    off = p->offsets[idx];
    if (off > b->size) {
        return -0xb;
    }
    b->pos = off;
    if (b->size < p->sizes[idx] + off) {
        return -0xc;
    }
    memcpy(p->dst, b->data + off, p->sizes[idx]);
    b->pos += p->sizes[idx];
    return 0;
}
