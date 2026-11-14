extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);

typedef struct Layout_829D3F68 {
    int pad0;
    int stride;        /* +0x4 */
    int dataOffset;    /* +0x8 */
    int extraOffset;   /* +0xc, -1 when absent */
    int base;          /* +0x10 */
} Layout_829D3F68;

typedef struct Out_829D3F68 {
    unsigned char data[2000];
    int extra;         /* +0x7d0 */
} Out_829D3F68;

void fn_829D3F68(int index, Layout_829D3F68 *layout, Out_829D3F68 *out)
{
    fn_82A1DDC0(out, (void *)(index * layout->stride + layout->dataOffset + layout->base), 2000);
    if (layout->extraOffset != -1)
        fn_82A1DDC0(&out->extra, (void *)(index * layout->stride + layout->extraOffset + layout->base), 4);
    else
        out->extra = 0;
}
