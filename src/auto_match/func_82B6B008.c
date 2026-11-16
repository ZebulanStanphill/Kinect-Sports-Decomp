typedef void *(*Allocate_82B6B008)(void *context, unsigned int size);
typedef void (*Free_82B6B008)(void *context, void *memory);

typedef struct Pool_82B6B008 {
    Allocate_82B6B008 allocate; /* 0x0 */
    Free_82B6B008 free;         /* 0x4 */
    void *context;              /* 0x8 */
    void *data;                 /* 0xc */
    unsigned int stride;        /* 0x10 */
    int capacity;               /* 0x14 */
    int available;              /* 0x18 */
    int used;                   /* 0x1c */
} Pool_82B6B008;

Pool_82B6B008 *fn_82B6B008(int count, unsigned int size, Allocate_82B6B008 allocate, Free_82B6B008 free,
                           void *context)
{
    unsigned int stride = (size + 7) & ~7u;
    Pool_82B6B008 *pool = (Pool_82B6B008 *)allocate(context, 32);
    if (pool != 0) {
        char *data;
        pool->allocate = allocate;
        pool->free = free;
        pool->context = context;
        pool->stride = stride;
        data = (char *)allocate(context, (count + 1) * stride);
        if (data != 0) {
            char *next = data;
            int index;
            pool->data = data;
            pool->capacity = count;
            pool->available = count;
            pool->used = 0;
            for (index = 0; index < count; index++) {
                next += stride;
                *(char **)data = next;
                data = next;
            }
        } else {
            free(context, pool);
            pool = 0;
        }
    }
    return pool;
}
