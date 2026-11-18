typedef struct Rect_82F17DD8 {
    int left;   /* 0x00 */
    int top;    /* 0x04 */
    int right;  /* 0x08 */
    int bottom; /* 0x0c */
} Rect_82F17DD8;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82EDFFC0(Rect_82F17DD8 *dst, void *src);

static __forceinline int IsRectEmpty(Rect_82F17DD8 *r)
{
    return r->left >= r->right || r->top >= r->bottom;
}

int fn_82F17DD8(void **aligned, void **raw, Rect_82F17DD8 *rect, void *src, int bytesPerPixel)
{
    int stride;
    unsigned char *p;

    fn_82EDFFC0(rect, src);
    if (*raw != 0) {
        fn_8265C990(*raw, 0x248c8000);
        *raw = 0;
    }
    if (IsRectEmpty(rect)) {
        return -100;
    }
    stride = (rect->right - rect->left) * bytesPerPixel;
    p = (unsigned char *)fn_8265C940(
        (rect->bottom - rect->top) * (rect->right - rect->left) + (stride + 0x10) * 2, 0x248c8000);
    *raw = p;
    if (p == 0) {
        return -3;
    }
    p = (unsigned char *)(((unsigned int)(p + stride) + 0x1f) & ~0x1f);
    *aligned = p;
    return p == 0 ? -3 : 0;
}
