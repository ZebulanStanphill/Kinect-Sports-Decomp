typedef struct Header_82A6CD50 {
    int pad0[2];
    unsigned int size;
    char pad0C[0x30];
    int mode;
    char pad40[0x94];
    int enabled;
    char padD8[0x184];
    int extra;
} Header_82A6CD50;

typedef struct Stream_82A6CD50 {
    int pad0[2];
    Header_82A6CD50 **header;
    char pad0C[0xc];
    unsigned int mark;
    unsigned int remaining;
    unsigned int bytes;
    unsigned int cache;
    unsigned int bits;
    int pad2C;
    unsigned int base;
    char pad34[0x10];
    int seekPending;
    unsigned int seekBytes;
    int pad4C;
    unsigned int savedMark;
} Stream_82A6CD50;

static __forceinline unsigned char headerSize(Header_82A6CD50 *h)
{
    if (h->mode <= 2) {
        if (h->enabled != 0)
            return h->size + 11;
        return 0;
    } else {
        if (h->extra != 0)
            return h->size + 17;
        return h->size + 6;
    }
}

void fn_82A6CD50(Stream_82A6CD50 *s, unsigned int pos)
{
    unsigned int bytes = s->bytes;
    unsigned int offset = bytes * 8 + s->bits;
    unsigned int cur;
    unsigned int back;

    if (headerSize(*s->header) % 8 == 0)
        return;
    cur = s->base + offset;
    s->savedMark = s->mark;
    if (((cur ^ pos) & 7) != 0)
        return;
    if (cur > pos) {
        back = (cur - pos) >> 3;
        if (back <= bytes) {
            s->bytes = bytes - back;
            return;
        }
        back -= bytes;
        s->bytes = 0;
        s->remaining -= back;
        s->bits -= back * 8;
        s->cache >>= back * 8;
    } else {
        s->seekPending = 1;
        s->seekBytes = (pos - cur) >> 3;
    }
}
