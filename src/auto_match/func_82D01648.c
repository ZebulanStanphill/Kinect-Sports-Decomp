typedef struct Elem_82D01648 {
    struct Elem_82D01648 *next;
} Elem_82D01648;

typedef struct Block_82D01648 {
    struct Block_82D01648 *next;
    int pad4[2];
    int numElems;
} Block_82D01648;

typedef struct FreeList_82D01648 {
    Elem_82D01648 *free;
    unsigned int elemSize;
    int pad8[2];
    Block_82D01648 *blocks;
    int pad14[3];
    char *top;
    char *blockEnd;
} FreeList_82D01648;

int fn_82D01648(FreeList_82D01648 *self)
{
    int count = 0;
    Elem_82D01648 *e;
    Block_82D01648 *b;

    for (e = self->free; e != 0; e = e->next) {
        count++;
    }
    count += (unsigned int)(self->blockEnd - self->top) / self->elemSize;
    for (b = self->blocks; b != 0; b = b->next) {
        count += b->numElems;
    }
    return count;
}
