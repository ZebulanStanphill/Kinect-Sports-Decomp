typedef struct Lock_8268FF28 Lock_8268FF28;

typedef struct LockVtbl_8268FF28 {
    void *pad[4];
    void (*lock)(Lock_8268FF28 *self); /* 0x10 */
} LockVtbl_8268FF28;

struct Lock_8268FF28 {
    LockVtbl_8268FF28 *vt;
};

typedef struct Region_8268FF28 {
    unsigned int base;   /* 0x0 */
    unsigned int bitmap; /* 0x4 */
    unsigned int used;   /* 0x8 */
} Region_8268FF28;

typedef struct Heap_8268FF28 {
    void *vt;                   /* 0x0 */
    Lock_8268FF28 *lock;        /* 0x4 */
    unsigned int unit;          /* 0x8 */
    unsigned int shift;         /* 0xc */
    unsigned int regionSize;    /* 0x10 */
    unsigned int pad14;         /* 0x14 */
    unsigned int total;         /* 0x18 */
    Region_8268FF28 regions[1]; /* 0x1c */
} Heap_8268FF28;

extern unsigned int fn_8268F848(Heap_8268FF28 *self, unsigned int addr);
extern void fn_8268F3D8(unsigned int bitmap, unsigned int first, unsigned int count);

unsigned int fn_8268FF28(Heap_8268FF28 *self, unsigned int addr, unsigned int size)
{
    unsigned int index;
    Region_8268FF28 *region;
    unsigned int pages;
    unsigned int bitmap;

    index = fn_8268F848(self, addr);
    region = &self->regions[index];
    self->lock->vt->lock(self->lock);
    pages = size >> self->shift;
    bitmap = region->bitmap;
    fn_8268F3D8(
        region->base -
            ((((self->unit * 8 + bitmap - 1) >> (self->shift + 3)) + self->unit - 1) & ~(self->unit - 1)) +
            bitmap,
        (int)(addr - region->base) >> self->shift, pages);
    region->used -= pages;
    self->total -= pages << self->shift;
    return index;
}
