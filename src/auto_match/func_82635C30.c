/* Stores one shader constant (16 bytes) in the current page: marks its group of four dirty, offsets
   the register by 0x100 when the owner's flag 4 is set, and marks the register written. */
typedef struct Constant_82635C30 {
    unsigned int words[4];
} Constant_82635C30;

typedef struct Owner_82635C30 {
    char pad0[0x4db4];
    unsigned int flags; /* 0x4db4 */
} Owner_82635C30;

typedef struct Page_82635C30 {
    Constant_82635C30 constants[0x230]; /* 0x0 */
    char pad2300[0x23a0 - 0x2300];
    unsigned __int64 dirtyGroups; /* 0x23a0 */
    char pad23a8[0x23b8 - 0x23a8];
    unsigned int written[0x18]; /* 0x23b8 */
    char pad2418[0x255c - 0x2418];
    int cached; /* 0x255c */
    char pad2560[0x2564 - 0x2560];
    Owner_82635C30 *owner; /* 0x2564 */
    char pad2568[0x26d0 - 0x2568];
} Page_82635C30;

typedef struct Pool_82635C30 {
    int current; /* 0x0 */
    char pad4[0x170 - 0x4];
    Page_82635C30 pages[2]; /* 0x170 */
} Pool_82635C30;

static __forceinline void SetBit(unsigned int *bits, unsigned int index)
{
    bits[index >> 5] |= 1 << (index & 0x1f);
}

void fn_82635C30(Pool_82635C30 *pool, unsigned int reg, const Constant_82635C30 *value)
{
    Page_82635C30 *page;

    page = &pool->pages[pool->current];
    page->cached = 0;
    page->dirtyGroups |= (unsigned __int64)1 << (63 - (reg >> 2));
    reg += (page->owner->flags & 4) << 6;
    {
        Constant_82635C30 *slot = &page->constants[reg + 0x30];
        slot->words[0] = value->words[0];
        slot->words[1] = value->words[1];
        slot->words[2] = value->words[2];
        slot->words[3] = value->words[3];
    }
    SetBit(page->written, reg);
}
