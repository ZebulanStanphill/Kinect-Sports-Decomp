typedef struct Header_82A6CA88 {
    int pad0[2];        /* 0x00 */
    unsigned int size;  /* 0x08 */
    char pad0C[0x30];   /* 0x0c */
    int mode;           /* 0x3c */
    char pad40[0x94];   /* 0x40 */
    int enabled;        /* 0xd4 */
    char padD8[0x184];  /* 0xd8 */
    int extra;          /* 0x25c */
    char pad260[0xc];   /* 0x260 */
    unsigned int total; /* 0x26c */
} Header_82A6CA88;

typedef struct Stream_82A6CA88 {
    int pad0[2];              /* 0x00 */
    Header_82A6CA88 **header; /* 0x08 */
    char pad0C[8];            /* 0x0c */
    unsigned int position;    /* 0x14 */
    unsigned int mark;        /* 0x18 */
    unsigned int remaining;   /* 0x1c */
    unsigned int bytes;       /* 0x20 */
    unsigned int cache;       /* 0x24 */
    unsigned int bits;        /* 0x28 */
    int pad2C;                /* 0x2c */
    unsigned int base;        /* 0x30 */
    char pad34[0x10];         /* 0x34 */
    int seekPending;          /* 0x44 */
    unsigned int seekBytes;   /* 0x48 */
    int pad4C;                /* 0x4c */
    unsigned int savedMark;   /* 0x50 */
} Stream_82A6CA88;

static __forceinline unsigned char headerSize(Header_82A6CA88 *h)
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

extern void fn_82A6C940(Stream_82A6CA88 *, int);

void fn_82A6CA88(Stream_82A6CA88 *self)
{
    Header_82A6CA88 *header = *self->header;
    int remainder = (int)headerSize(*self->header) % 8;
    unsigned int available = header->total - (headerSize(header) >> 3);
    unsigned int count = self->mark - self->remaining + self->position;
    self->bytes = count;
    self->savedMark = count;
    if (count > available) {
        self->bytes = available;
    } else {
        self->seekPending = 1;
        self->seekBytes = available - count;
    }
    fn_82A6C940(self, remainder);
}
