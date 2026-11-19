typedef struct Allocator_82D7D9D8 Allocator_82D7D9D8;

typedef struct AllocatorVtbl_82D7D9D8 {
    void *f0;
    void *f4;
    void (*blockFree)(Allocator_82D7D9D8 *self, void *block, int size); /* 0x8 */
} AllocatorVtbl_82D7D9D8;

struct Allocator_82D7D9D8 {
    AllocatorVtbl_82D7D9D8 *vtbl;
};

typedef struct Router_82D7D9D8 {
    char pad[0x10];
    Allocator_82D7D9D8 *heap; /* 0x10 */
} Router_82D7D9D8;

/* hkInplaceArray<char *, 1> */
typedef struct BlockArray_82D7D9D8 {
    char **data;          /* 0x00 */
    int size;             /* 0x04 */
    int capacityAndFlags; /* 0x08 */
    char *storage[1];     /* 0x0c */
} BlockArray_82D7D9D8;

/* A pool of 0x80-byte entries kept in 0x200-byte blocks; the last block holds `free` bytes. */
typedef struct Pool_82D7D9D8 {
    unsigned int free;          /* 0x00 */
    BlockArray_82D7D9D8 blocks; /* 0x04 */
} Pool_82D7D9D8;

extern Router_82D7D9D8 *fn_82CE5410(void);
extern void fn_82CE6460(Allocator_82D7D9D8 *alloc, BlockArray_82D7D9D8 *array, int elemSize, void *storage,
                        int capacity);
extern void fn_82D7D360(Pool_82D7D9D8 *pool, void *entry);
extern void fn_82DB9F80(BlockArray_82D7D9D8 *array, Allocator_82D7D9D8 *alloc, int index, int numToRemove,
                        char **items, int numToInsert);

static __forceinline int NextPowerOf2(int n)
{
    unsigned int x = n - 1;

    x |= x >> 16;
    x |= x >> 8;
    x |= x >> 4;
    x |= x >> 2;
    x |= x >> 1;
    return x + 1;
}

static __forceinline char *Back(BlockArray_82D7D9D8 *array)
{
    BlockArray_82D7D9D8 *self = array;
    return self->data[self->size - 1];
}

static __forceinline void PopBack(BlockArray_82D7D9D8 *array)
{
    array->size--;
}

static __forceinline void OptimizeCapacity(BlockArray_82D7D9D8 *array, int numFreeElemsLeft)
{
    Router_82D7D9D8 *router;
    int capacity;

    if ((array->capacityAndFlags & (int)0x80000000) == 0) {
        capacity = NextPowerOf2(array->size + numFreeElemsLeft);
        if (capacity < 1) {
            router = fn_82CE5410();
            fn_82CE6460(router->heap, array, 4, array->storage, 1);
        } else if (capacity < (array->capacityAndFlags & 0x3fffffff)) {
            router = fn_82CE5410();
            fn_82CE6460(router->heap, array, 4, 0, capacity);
        }
    }
}

static __forceinline void InsertAt(BlockArray_82D7D9D8 *array, int index, char **items, int count)
{
    Router_82D7D9D8 *router = fn_82CE5410();

    fn_82DB9F80(array, router->heap, index, 0, items, count);
}

/* Moves every entry of other into pool. */
void fn_82D7D9D8(Pool_82D7D9D8 *pool, Pool_82D7D9D8 *other)
{
    BlockArray_82D7D9D8 *blocks;
    Allocator_82D7D9D8 *heap;
    char *block;

    while (pool->free != 0x200 && other->blocks.size != 0) {
        blocks = &other->blocks;
        fn_82D7D360(pool, Back(blocks) + other->free - 0x80);
        other->free -= 0x80;
        if (other->free == 0) {
            block = Back(&other->blocks);
            PopBack(blocks);
            heap = fn_82CE5410()->heap;
            heap->vtbl->blockFree(heap, block, 0x200);
            other->free = 0x200;
        }
        OptimizeCapacity(blocks, 4);
    }
    if (other->blocks.size != 0) {
        InsertAt(&pool->blocks, pool->blocks.size, other->blocks.data, other->blocks.size);
        pool->free = other->free;
        other->blocks.size = 0;
        other->free = 0x200;
    }
}
