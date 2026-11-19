typedef struct Page_82635BB0 {
    unsigned int registers[0x8ea]; /* 0x0 */
    unsigned __int64 usedWords;    /* 0x23a8 */
    char pad23B0[0x23f8 - 0x23b0];
    unsigned int dirty[0x48]; /* 0x23f8 */
    char pad2518[0x255c - 0x2518];
    int cached; /* 0x255c */
    char pad2560[0x26d0 - 0x2560];
} Page_82635BB0;

typedef struct Pool_82635BB0 {
    int current; /* 0x0 */
    char pad4[0x170 - 0x4];
    Page_82635BB0 pages[2]; /* 0x170 */
} Pool_82635BB0;

typedef struct Color_82635BB0 {
    unsigned char pad0[3];
    unsigned char r; /* 0x3 */
    unsigned char pad4[3];
    unsigned char g; /* 0x7 */
    unsigned char pad8[3];
    unsigned char b; /* 0xb */
} Color_82635BB0;

static __forceinline void SetBit(unsigned int *bits, unsigned int index)
{
    bits[index >> 5] |= 1 << (index & 0x1f);
}

void fn_82635BB0(Pool_82635BB0 *pool, unsigned int index, const Color_82635BB0 *color)
{
    Page_82635BB0 *page;
    unsigned int offset;

    page = &pool->pages[pool->current];
    page->cached = 0;
    page->usedWords |= (unsigned __int64)1 << (63 - index);
    offset = (index + 0x8c8) * 4;
    SetBit(page->dirty, offset >> 2);
    *(unsigned int *)((char *)page->registers + offset) = ((color->b << 8 | color->g) << 8) | color->r;
}
