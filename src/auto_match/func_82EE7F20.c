typedef struct Pool_82EE7F20 Pool_82EE7F20;

typedef struct Table_82EE7F20 {
    void **buckets;      /* 0x00 */
    unsigned int count;  /* 0x04 */
    int used;            /* 0x08 */
    int capacity;        /* 0x0c */
    int freeList;        /* 0x10 */
    int growBy;          /* 0x14 */
    Pool_82EE7F20 *pool; /* 0x18 */
} Table_82EE7F20;

extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void *memset(void *p, int c, unsigned int n);
extern Pool_82EE7F20 *fn_82EEB240(void *self);
extern int fn_82EEB540(Pool_82EE7F20 *self, unsigned int size, unsigned int count, unsigned int a, int b);
extern void fn_82EEB538(Pool_82EE7F20 *self);
extern void fn_82E4FE40(void *p);

int fn_82EE7F20(Table_82EE7F20 *self, unsigned int count, int growBy, int capacity)
{
    void *mem;
    Pool_82EE7F20 *pool;

    if (self->buckets != 0)
        return 0x8000ffff;
    if (count == 0)
        return 0x80070057;
    self->buckets = fn_82E50BE8(count <= 0x3fffffff ? count << 2 : 0xffffffff, 0, 0, 0, 0);
    if (self->buckets != 0) {
        memset(self->buckets, 0, count << 2);
        mem = fn_82E50BE8(0x34, 0, 0, 0, 0);
        self->pool = mem != 0 ? fn_82EEB240(mem) : 0;
        if (self->pool != 0 && fn_82EEB540(self->pool, 0xc, count, 1, 0) >= 0) {
            self->growBy = growBy;
            self->count = count;
            self->used = 0;
            self->capacity = capacity;
            self->freeList = 0;
            return 0;
        }
        pool = self->pool;
        if (pool != 0) {
            fn_82EEB538(pool);
            fn_82E4FE40(pool);
        }
        self->pool = 0;
    }
    return 0x8007000e;
}
