typedef struct Page_82635B30 {
    char pad0[0x23a8];
    unsigned __int64 usedWords; /* 0x23a8 */
    char pad23B0[0x2518 - 0x23b0];
    unsigned int pinned[8]; /* 0x2518 */
    unsigned int used[8];   /* 0x2538 */
    char pad2558[0x255c - 0x2558];
    int cached; /* 0x255c */
    char pad2560[0x26d0 - 0x2560];
} Page_82635B30;

typedef struct Pool_82635B30 {
    int current; /* 0x0 */
    char pad4[0x170 - 0x4];
    Page_82635B30 pages[2]; /* 0x170 */
} Pool_82635B30;

static __forceinline void SetBit(unsigned int *bits, unsigned int index)
{
    bits[index >> 5] |= 1 << (index & 0x1f);
}

void fn_82635B30(Pool_82635B30 *pool, unsigned int slot, int pin)
{
    Page_82635B30 *page;

    page = &pool->pages[pool->current];
    page->cached = 0;
    if (pin != 0) {
        SetBit(page->pinned, slot);
    }
    SetBit(page->used, slot);
    page->usedWords |= (unsigned __int64)1 << (31 - (slot >> 5));
}
