typedef struct Buffer_82CAD600 {
    void *data;          /* 0x00 */
    int count;           /* 0x04 */
    unsigned char shift; /* 0x08 */
} Buffer_82CAD600;

extern void fn_82C563B0(void *allocator, void *data);
extern void *fn_82C562F0(void *allocator, unsigned int bytes, const char *name);
extern void fn_82CAD2F8(void *data, unsigned int *source, int start, unsigned int shift);
extern const char lbl_82196582[];

unsigned int fn_82CAD600(unsigned char *self, Buffer_82CAD600 *out, int count, unsigned int *source,
                         unsigned char shift)
{
    unsigned char *allocator = *(unsigned char **)(self + 0x6070) + 8;
    out->count = count;
    out->shift = shift;
    if (out->data) {
        fn_82C563B0(allocator, out->data);
        out->data = 0;
    }
    out->data = fn_82C562F0(allocator, (((*source >> 5) & 0x7fffffe) + (1u << shift)) * 2, lbl_82196582);
    if (out->data) {
        fn_82CAD2F8(out->data, source, 0, shift);
        return 0;
    }
    return 5;
}
