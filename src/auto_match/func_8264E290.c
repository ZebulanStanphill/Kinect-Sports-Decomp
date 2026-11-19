/* Builds the per-tile predication masks of a list of screen regions: each region gets two bits
   per tiling rectangle, set when the region overlaps the rectangle (regions in 8-pixel units).
   The masks are written to memory the GPU reads, so each is flushed from the cache. */
typedef struct Rect_8264E290 {
    unsigned int left;   /* 0x00 */
    unsigned int top;    /* 0x04 */
    unsigned int right;  /* 0x08 */
    unsigned int bottom; /* 0x0c */
} Rect_8264E290;

typedef struct Tiling_8264E290 {
    int unk00;              /* 0x00 */
    unsigned int count;     /* 0x04 */
    Rect_8264E290 rects[1]; /* 0x08 */
} Tiling_8264E290;

typedef struct Region_8264E290 {
    unsigned int *mask;    /* 0x00 */
    unsigned short left;   /* 0x04 */
    unsigned short right;  /* 0x06 */
    unsigned short top;    /* 0x08 */
    unsigned short bottom; /* 0x0a */
    int unk0c;             /* 0x0c */
} Region_8264E290;

void __dcbf(int offset, void const *base);

void fn_8264E290(Tiling_8264E290 *self, unsigned int *block)
{
    unsigned int count = self->count;
    Rect_8264E290 *rects = self->rects;
    Region_8264E290 *region;
    Region_8264E290 *end;
    Rect_8264E290 *rect;
    unsigned int mask;
    unsigned int i;
    unsigned int *dest;
    unsigned int right;
    unsigned int bottom;
    unsigned int left;
    unsigned int top;

    do {
        end = (Region_8264E290 *)block[0];
        for (region = (Region_8264E290 *)(block + 1); region < end; region++) {
            unsigned short *bounds = &region->left;

            right = (bounds[1] + 1) * 8;
            mask = 0;
            left = bounds[0] * 8;
            top = bounds[2] * 8;
            bottom = (bounds[3] + 1) * 8;
            dest = region->mask;
            i = count - 1;
            do {
                rect = &rects[i];
                mask <<= 2;
                if (rect->left < right && rect->right > left && rect->top < bottom && rect->bottom > top) {
                    mask |= 3;
                }
            } while (i-- != 0);
            *dest = mask;
            __dcbf(((unsigned int)dest & 0x1fffffff) + ((((unsigned int)dest >> 20) + 0x200) & 0x1000),
                   (void *)0xc0000000);
        }
        block = *(unsigned int **)region;
    } while (block != (unsigned int *)0xc0000000);
}
