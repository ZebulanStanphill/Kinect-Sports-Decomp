class Listener_82691AF0
{
  public:
    virtual void vf00();
    virtual void vf04();
    virtual void OnFree(int heapId, unsigned int size); /* 0x8 */
};

class Allocator_82691AF0
{
  public:
    virtual void vf00();
    virtual void vf04();
    virtual void Free(unsigned int address, unsigned int size, unsigned int alignment); /* 0x8 */
    virtual void vf0C();
    virtual void vf10();
    virtual void FreePadded(unsigned int address, unsigned int size, unsigned int alignment); /* 0x14 */
};

struct Block_82691AF0 {
    Block_82691AF0 *next; /* 0x0 */
    Block_82691AF0 *prev; /* 0x4 */
    int tag;              /* 0x8 */
    char padC[0x2];
    unsigned short alignShift; /* 0xe */
    unsigned int padding;      /* 0x10 */
    char pad14[0x4];
    unsigned int size;    /* 0x18 */
    unsigned int address; /* 0x1c */
};

struct Heap_82691AF0 {
    int id;                        /* 0x0 */
    Allocator_82691AF0 *allocator; /* 0x4 */
    void *blockPool;               /* 0x8 */
    char padC[0x200];
    unsigned int used; /* 0x20c */
    char pad210[0x14];
    Listener_82691AF0 *listener; /* 0x224 */
};

extern "C" void *lbl_831F129C;
extern "C" void fn_826931A8(void *tracker, unsigned int address, unsigned int size);
extern "C" void fn_826913D8(void *pool, Block_82691AF0 *block, int tag);

extern "C" void fn_82691AF0(Heap_82691AF0 *self, Block_82691AF0 *block)
{
    Listener_82691AF0 *listener = self->listener;
    unsigned int size = block->size;
    unsigned int alignment;

    if (listener != 0) {
        listener->OnFree(self->id, size);
    }
    self->used -= size;
    fn_826931A8(lbl_831F129C, block->address, size);
    alignment = 1 << block->alignShift;
    if (block->padding & 0x80000000) {
        self->used -= block->padding & 0x7fffffff;
        self->allocator->FreePadded(block->address - (block->padding & 0x7fffffff),
                                    (block->padding & 0x7fffffff) + size, alignment);
    } else {
        if (alignment <= 0x1000) {
            alignment = 0x1000;
        }
        self->allocator->Free(block->address, size, alignment);
    }
    block->next->prev = block->prev;
    block->prev->next = block->next;
    fn_826913D8(self->blockPool, block, block->tag);
}
