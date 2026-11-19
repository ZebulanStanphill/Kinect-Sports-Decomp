typedef struct Buffer_82CAD4C0 {
    void *data;          /* 0x00 */
    int count;           /* 0x04 */
    unsigned char shift; /* 0x08 */
} Buffer_82CAD4C0;

typedef struct Context_82CAD4C0 {
    int pad0;
    unsigned char *arenaTop; /* 0x04 */
    int useArena;            /* 0x08 */
    char pad0c[0x6070 - 0xc];
    unsigned char *heap; /* 0x6070 */
} Context_82CAD4C0;

extern void fn_82C563B0(void *allocator, void *data);
extern void *fn_82C562F0(void *allocator, unsigned int bytes, const char *name);
extern void fn_82CAD2F8(void *data, unsigned int *source, int start, unsigned int shift);
extern const char lbl_82196582[];

unsigned int fn_82CAD4C0(Context_82CAD4C0 *self, Buffer_82CAD4C0 *out, int count, unsigned int *source,
                         unsigned char shift)
{
    int entries = *source >> 6;
    unsigned int maxShift = 0;
    unsigned char *allocator = self->heap + 8;
    unsigned char bits;
    void *data;
    int i;

    for (i = 0; i < entries; i++) {
        unsigned int value = source[i + 1] & 0x3f;
        if (maxShift < value)
            maxShift = value;
    }
    bits = (unsigned char)maxShift;
    if (bits > shift)
        bits = shift;
    if (shift >= 0x80)
        bits = shift + 0x80;
    out->count = count;
    out->shift = bits;
    if (out->data) {
        fn_82C563B0(allocator, out->data);
        out->data = 0;
    }
    if (self->useArena) {
        data = self->arenaTop;
        self->arenaTop += (((*source >> 5) & 0x7fffffe) + (1u << bits)) * 2;
    } else {
        data = fn_82C562F0(allocator, (((*source >> 5) & 0x7fffffe) + (1u << bits)) * 2, lbl_82196582);
    }
    if (data) {
        fn_82CAD2F8(data, source, 0, bits);
        out->data = data;
        return 0;
    }
    return 5;
}
