#define __sync() __emit(0x7C0004AC)

long _InterlockedExchangeAdd(long volatile *target, long value);

typedef struct Surface_8262FBD8 {
    unsigned int flags;         /* 0x00 */
    char pad4[0x10];
    unsigned int dirty0;        /* 0x14 */
    unsigned int dirty1;        /* 0x18 */
} Surface_8262FBD8;

extern void fn_8264D6C0(unsigned int start, unsigned int end, int flags);

static __forceinline unsigned int GpuAddress(unsigned int a)
{
    return (((a >> 20) + 0x200) & 0x1000) + (a & 0x1fffffff) - 0x40000000;
}

static __forceinline void Range(unsigned int dirty, unsigned int *first, unsigned int *last)
{
    unsigned int hi = dirty >> 16;
    unsigned int lo = dirty & 0xffff;
    *first = (hi & 0x8000) ? (hi & 0x7fff) << 4 : hi;
    *last = (lo & 0x8000) ? (lo & 0x7fff) << 4 : lo;
}

void fn_8262FBD8(Surface_8262FBD8 *surface, unsigned int base0, unsigned int base1)
{
    unsigned int flags = surface->flags;
    unsigned int dirty;
    unsigned int first;
    unsigned int last;

    if ((flags & 0xf00) == 0x100) {
        dirty = surface->dirty0;
        if (dirty != 0xffff0000) {
            Range(dirty, &first, &last);
            surface->dirty0 = 0xffff0000;
            if ((flags & 0x200000) == 0)
                base0 = GpuAddress(base0);
            base0 &= ~0x7f;
            fn_8264D6C0(first * 0x80 + base0, last * 0x80 + base0, 0);
        }
        if (base1 != 0) {
            dirty = surface->dirty1;
            if (dirty != 0xffff0000) {
                Range(dirty, &first, &last);
                surface->dirty1 = 0xffff0000;
                if ((surface->flags & 0x200000) == 0)
                    base1 = GpuAddress(base1);
                base1 &= ~0x7f;
                fn_8264D6C0(first * 0x80 + base1, last * 0x80 + base1, 0);
            }
        }
    }
    __sync();
    _InterlockedExchangeAdd((long volatile *)&surface->flags, -0x100);
}
