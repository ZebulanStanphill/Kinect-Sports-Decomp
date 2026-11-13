typedef struct Table_82EF12B8 {
    void **buckets;
    unsigned int count : 31;
    unsigned int initialized : 1;
    int size;
    int capacity;
    char pool[1];
} Table_82EF12B8;

extern void *fn_82E50BE8(unsigned int size, int a, int b, int c, int d);
extern void *memset(void *p, int c, unsigned int n);
extern void fn_82EF1068(void *pool, int n);

int fn_82EF12B8(Table_82EF12B8 *self, unsigned int count, int capacity)
{
    if (count == 0)
        return 0x80070057;
    if (!self->initialized) {
        if (self->buckets != 0)
            return 0x8000ffff;
        self->buckets = fn_82E50BE8(count <= 0x3fffffff ? count << 2 : 0xffffffff, 0, 0, 0, 0);
        if (self->buckets == 0)
            return 0x8007000e;
        memset(self->buckets, 0, count << 2);
        self->count = count;
    }
    fn_82EF1068(self->pool, 8);
    self->capacity = capacity;
    self->size = 0;
    return 0;
}
