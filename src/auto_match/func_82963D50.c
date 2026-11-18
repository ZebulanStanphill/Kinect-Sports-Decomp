typedef struct Heap_82963D50 {
    char pad0[0x10];
    void *allocator; /* 0x10 */
} Heap_82963D50;

typedef struct Shape_82963D50 {
    int type;                /* 0x00 */
    unsigned int pointCount; /* 0x04 */
    int *points;             /* 0x08 */
    unsigned int indexCount; /* 0x0c */
    int *indices;            /* 0x10 */
    char pad14[0x24 - 0x14];
    int flags; /* 0x24 */
    int color; /* 0x28 */
    char pad2c[0x30 - 0x2c];
    int style; /* 0x30 */
    char pad34[0x3c - 0x34];
    int user;           /* 0x3c */
    int pointBuffer[8]; /* 0x40 */
    int indexBuffer[4]; /* 0x60 */
} Shape_82963D50;

extern Heap_82963D50 *fn_82934160(void);
extern int *fn_829301D0(void *allocator, unsigned int size, unsigned int alignment);
extern void *memcpy(void *dst, const void *src, unsigned int size);

static __forceinline int *AllocArray_82963D50(unsigned int count)
{
    Heap_82963D50 *heap = fn_82934160();

    return fn_829301D0(heap->allocator, count << 2, 0x10);
}

int fn_82963D50(Shape_82963D50 *self, const Shape_82963D50 *other)
{
    unsigned int count;

    if (other == 0) {
        return 0x80004005;
    }
    self->type = other->type;
    count = other->pointCount;
    if (count > self->pointCount) {
        if (count <= 8) {
            self->points = self->pointBuffer;
        } else {
            self->points = AllocArray_82963D50(count);
            if (self->points == 0) {
                return 0x8007000e;
            }
        }
    }
    count = other->pointCount;
    self->pointCount = count;
    memcpy(self->points, other->points, count << 2);
    count = other->indexCount;
    if (count > self->indexCount) {
        if (count <= 4) {
            self->indices = self->indexBuffer;
        } else {
            self->indices = AllocArray_82963D50(count);
            if (self->indices == 0) {
                return 0x8007000e;
            }
        }
    }
    count = other->indexCount;
    self->indexCount = count;
    memcpy(self->indices, other->indices, count << 2);
    self->flags = other->flags;
    self->color = other->color;
    self->style = other->style;
    self->user = other->user;
    return 0;
}
