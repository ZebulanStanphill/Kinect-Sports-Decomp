typedef struct Blk_8268EC80 {
    struct Blk_8268EC80 *next; /* 0x00 */
    struct Blk_8268EC80 *prev; /* 0x04 */
    int pad[6];
    unsigned int owner; /* 0x20 */
    unsigned int units; /* 0x24 */
} Blk_8268EC80;

typedef struct Arena_8268EC80 {
    unsigned int shift;     /* 0x00 */
    unsigned int alignment; /* 0x04 */
    int pad8;
    char list[4]; /* 0x0c */
    char tbl[4];  /* 0x10 */
    int count;    /* 0x14 */
} Arena_8268EC80;

typedef struct Owner_8268EC80 {
    char pad[0x10];
    unsigned int base; /* 0x10 */
    unsigned int size; /* 0x14 */
} Owner_8268EC80;

extern void fn_8268E408(void *list, Blk_8268EC80 *blk);
extern void fn_8268E490(void *list, Blk_8268EC80 *blk, Blk_8268EC80 *next);
extern void fn_8268E5C8(void *tbl, Blk_8268EC80 *blk);
extern Blk_8268EC80 *fn_8268E620(void *tbl, unsigned int addr);
extern void fn_8268E938(Arena_8268EC80 *a, Blk_8268EC80 *blk, unsigned int start, unsigned int len);
extern void fn_8268EAC0(Arena_8268EC80 *a, Owner_8268EC80 *owner, unsigned int start, unsigned int len,
                        unsigned int alignment);

char fn_8268EC80(Arena_8268EC80 *a, Owner_8268EC80 *owner, unsigned int base, unsigned int oldSize,
                 unsigned int newSize, unsigned int alignment)
{
    unsigned int next;
    unsigned int blkEnd;
    Blk_8268EC80 *blk;
    Blk_8268EC80 *nx;
    Blk_8268EC80 *pv;

    if (alignment < a->alignment) {
        alignment = a->alignment;
    }
    oldSize = (oldSize + alignment - 1) & ~(alignment - 1);
    newSize = (newSize + alignment - 1) & ~(alignment - 1);
    if (newSize == oldSize) {
        return 0;
    }
    if (newSize > oldSize) {
        next = base + oldSize;
        blk = fn_8268E620(a->tbl, next);
        if (blk != 0 && blk->owner == (unsigned int)owner && (unsigned int)blk == next) {
            blkEnd = (blk->units << a->shift) + (unsigned int)blk;
            if (base + newSize <= blkEnd) {
                a->count = a->count - blk->units;
                nx = blk->next;
                if (nx != blk) {
                    pv = blk->prev;
                    pv->next = nx;
                    nx->prev = pv;
                    fn_8268E408(a->list, blk);
                } else {
                    fn_8268E490(a->list, blk, nx);
                }
                fn_8268E5C8(a->tbl, blk);
                fn_8268E938(a, blk, (unsigned int)blk, newSize - oldSize);
                return 0;
            }
            if (blkEnd == owner->size + owner->base) {
                return 3;
            }
        }
        return (next == owner->size + owner->base) + 2;
    }
    blk = (Blk_8268EC80 *)(base + newSize);
    fn_8268EAC0(a, owner, (unsigned int)blk, oldSize - newSize, alignment);
    return (blk->units << a->shift) + base + newSize == owner->size + owner->base;
}
