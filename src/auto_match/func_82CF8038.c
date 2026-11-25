typedef struct Allocator_82CF8038 Allocator_82CF8038;

typedef struct AllocatorVtable_82CF8038 {
    void *pad0[2];
    void (*freeBlock)(Allocator_82CF8038 *, void *, int);
    void *padc[8];
    int (*blockSize)(Allocator_82CF8038 *, void *, int);
} AllocatorVtable_82CF8038;

struct Allocator_82CF8038 {
    AllocatorVtable_82CF8038 *vtable;
};

typedef struct BlockInfo_82CF8038 {
    int tag;
    int size;
    void *context;
} BlockInfo_82CF8038;

typedef struct Block_82CF8038 {
    void *address;
    BlockInfo_82CF8038 info;
} Block_82CF8038;

typedef struct Table_82CF8038 {
    Block_82CF8038 *blocks;
    int count;
    int capacity;
} Table_82CF8038;

typedef struct DebugAllocator_82CF8038 {
    char pad0[0x18];
    char lock[0x1c]; /* 0x18 */
    Allocator_82CF8038 *allocator;
    char pad38[4];
    void (*output)(const char *, void *);
    void *context;
    Table_82CF8038 *table;
    int allocated;
} DebugAllocator_82CF8038;

extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern unsigned int fn_82CF85A0(Table_82CF8038 *, unsigned int);
extern void fn_82CF8600(Table_82CF8038 *, unsigned int);
extern void fn_82CF7C08(DebugAllocator_82CF8038 *, const char *, void *, const BlockInfo_82CF8038 *);
void __debugbreak(void);

void fn_82CF8038(DebugAllocator_82CF8038 *self, int unused, void *address, int size)
{
    char *lock = self->lock;

    RtlEnterCriticalSection(lock);
    if (address != 0 && size == 0) {
        self->output("Given zero bytes to free with an nonnull address\n", self->context);
        __debugbreak();
        RtlLeaveCriticalSection(lock);
        return;
    }
    if (address == 0 && size != 0) {
        self->output("Given nonzero bytes to free with an null address\n", self->context);
        __debugbreak();
        RtlLeaveCriticalSection(lock);
        return;
    }
    if (address != 0) {
        Table_82CF8038 *table;
        int index;
        BlockInfo_82CF8038 info;

        table = self->table;
        index = fn_82CF85A0(table, (unsigned int)address);
        if (index > table->capacity) {
            self->output("Freeing block not from this allocator", self->context);
            __debugbreak();
        }
        info = self->table->blocks[index].info;
        if (info.size != size) {
            fn_82CF7C08(self, "Freeing block of incorrect size", address, &info);
            __debugbreak();
        }
        fn_82CF8600(self->table, index);
        self->allocated -= self->allocator->vtable->blockSize(self->allocator, address, size);
        self->allocator->vtable->freeBlock(self->allocator, address, size);
    }
    RtlLeaveCriticalSection(lock);
}
