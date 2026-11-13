typedef struct Block_82CF71F8 {
    struct Block_82CF71F8 *next;
} Block_82CF71F8;

typedef struct FreeList_82CF71F8 {
    Block_82CF71F8 *head;
    int count;
} FreeList_82CF71F8;

typedef struct Allocator_82CF71F8 Allocator_82CF71F8;
typedef struct AllocatorVtbl_82CF71F8 {
    void *slot0;
    void *(*allocate)(Allocator_82CF71F8 *self, int nbytes);
} AllocatorVtbl_82CF71F8;
struct Allocator_82CF71F8 {
    AllocatorVtbl_82CF71F8 *vt;
};

typedef struct Pool_82CF71F8 {
    void *vt;
    Allocator_82CF71F8 *large;
    int pad8;
    FreeList_82CF71F8 lists[1];
} Pool_82CF71F8;

extern void *fn_82CF6F58(Pool_82CF71F8 *self, int index);

void *fn_82CF71F8(Pool_82CF71F8 *self, int nbytes)
{
    Block_82CF71F8 *block;
    FreeList_82CF71F8 *list;
    int index;

    if (nbytes <= 0x2000) {
        if (nbytes <= 0x220) {
            index = ((char *)self)[0xd8 + ((nbytes + 0xf) >> 4)];
        } else {
            index = ((int *)self)[((nbytes - 1) >> 10) + 0x3f];
        }
        list = &self->lists[index];
        block = list->head;
        if (block != 0) {
            list->count--;
            list->head = block->next;
            return block;
        }
        return fn_82CF6F58(self, index);
    }
    return self->large->vt->allocate(self->large, nbytes);
}
