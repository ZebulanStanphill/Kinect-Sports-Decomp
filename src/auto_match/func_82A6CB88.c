typedef struct Header_82A6CB88 {
    char pad000[0x8];
    int headerBits; /* 0x008 */
    char pad00c[0x30];
    int version; /* 0x03c */
    char pad040[0x94];
    int hasHeader; /* 0x0d4 */
    char pad0d8[0x184];
    int hasExtension; /* 0x25c */
} Header_82A6CB88;

typedef struct Reader_82A6CB88 {
    char pad00[0x8];
    Header_82A6CB88 **header; /* 0x08 */
    char pad0c[0x8];
    unsigned char *base; /* 0x14 */
    unsigned int size;   /* 0x18 */
    unsigned char *ptr;  /* 0x1c */
    unsigned int count;  /* 0x20 */
    unsigned int acc;    /* 0x24 */
    unsigned int n;      /* 0x28 */
    unsigned int acc2;   /* 0x2c */
    unsigned int n2;     /* 0x30 */
    char pad34[0x54 - 0x34];
    unsigned char (*xlat)(unsigned char); /* 0x54 */
} Reader_82A6CB88;

void fn_82A6CB88(Reader_82A6CB88 *r)
{
    Header_82A6CB88 *header = *r->header;
    unsigned char bits;
    int shift;
    unsigned char v;

    if (header->version <= 2) {
        if (header->hasHeader != 0) {
            bits = header->headerBits + 0xb;
        } else {
            bits = 0;
        }
    } else if (header->hasExtension != 0) {
        bits = header->headerBits + 0x11;
    } else {
        bits = header->headerBits + 6;
    }
    r->acc2 = 0;
    r->n2 = 0;
    r->ptr = r->base + (bits >> 3);
    r->count = r->size - (bits >> 3);
    shift = bits % 8;
    v = r->xlat(*r->ptr++);
    r->count--;
    r->acc = (unsigned char)(v << shift) >> shift;
    r->n = 8 - shift;
}
