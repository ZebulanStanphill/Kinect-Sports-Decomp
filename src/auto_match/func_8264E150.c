/* Builds the per-tile predication masks of a list of predicated regions: a region either names
   screen bounds (in 8-pixel units) and gets two bits per tiling rectangle it overlaps, or (low
   bit set) names an occlusion query whose sample counts decide whether all its bits are set.
   The masks are written to memory the GPU reads, so each is flushed from the cache. */
typedef struct Rect_8264E150 {
    unsigned int left;   /* 0x00 */
    unsigned int top;    /* 0x04 */
    unsigned int right;  /* 0x08 */
    unsigned int bottom; /* 0x0c */
} Rect_8264E150;

typedef struct Tiling_8264E150 {
    int unk00;              /* 0x00 */
    unsigned int count;     /* 0x04 */
    Rect_8264E150 rects[1]; /* 0x08 */
} Tiling_8264E150;

typedef struct Region_8264E150 {
    unsigned int address; /* 0x00 */
    unsigned int *mask;   /* 0x04 */
} Region_8264E150;

typedef struct Bounds_8264E150 {
    unsigned short left;   /* 0x00 */
    unsigned short right;  /* 0x02 */
    unsigned short top;    /* 0x04 */
    unsigned short bottom; /* 0x06 */
} Bounds_8264E150;

void __dcbf(int offset, void const *base);
unsigned long _byteswap_ulong(unsigned long value);

void fn_8264E150(Tiling_8264E150 *self, unsigned int *block)
{
    unsigned int count = self->count;
    Rect_8264E150 *rects = self->rects;
    Region_8264E150 *region;
    Region_8264E150 *end;
    Rect_8264E150 *rect;
    unsigned int mask;
    unsigned int i;
    unsigned int *dest;
    unsigned int *samples;
    unsigned int passed;
    Bounds_8264E150 *bounds;
    unsigned int right;
    unsigned int bottom;
    unsigned int left;
    unsigned int top;

    do {
        end = (Region_8264E150 *)block[0];
        for (region = (Region_8264E150 *)(block + 1); region < end; region++) {
            unsigned int address = region->address;

            dest = region->mask;
            bounds = (Bounds_8264E150 *)((address & ~3) + 0xc0000000);
            __dcbf(0, bounds);
            if ((address & 1) == 0) {
                right = (bounds->right + 1) * 8;
                bottom = (bounds->bottom + 1) * 8;
                mask = 0;
                left = bounds->left * 8;
                top = bounds->top * 8;
                i = count - 1;
                do {
                    rect = &rects[i];
                    mask <<= 2;
                    if (rect->left < right && rect->right > left && rect->top < bottom &&
                        rect->bottom > top) {
                        mask |= 3;
                    }
                } while (i-- != 0);
            } else {
                samples = (unsigned int *)bounds;
                passed = _byteswap_ulong(samples[4]) - _byteswap_ulong(samples[12]) -
                         _byteswap_ulong(samples[13]) + _byteswap_ulong(samples[5]);
                mask = passed != 0 ? 0xffffffff : 0;
            }
            *dest = mask;
            __dcbf(0, (void *)(((unsigned int)dest & 0x1fffffff) +
                               ((((unsigned int)dest >> 20) + 0x200) & 0x1000) + 0xc0000000));
        }
        block = *(unsigned int **)region;
    } while (block != (unsigned int *)0xc0000000);
}
