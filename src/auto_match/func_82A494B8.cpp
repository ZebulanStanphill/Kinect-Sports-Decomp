#include <new>

class Block_82A494B8
{
  public:
    Block_82A494B8(unsigned int context);
    ~Block_82A494B8();
    char pad[0x104];
    unsigned int size;
};

typedef struct Node_82A494B8 {
    Block_82A494B8 *block;      /* 0x00 */
    struct Node_82A494B8 *next; /* 0x04 */
} Node_82A494B8;

typedef struct Heap_82A494B8 {
    char pad[0xcc];
    Node_82A494B8 *head; /* 0xcc */
    char padD0[12];
    unsigned int context; /* 0xdc */
    unsigned int size;
} Heap_82A494B8;

extern "C" void *fn_82A48D88(Block_82A494B8 *block, unsigned int size);
extern "C" void *fn_82A3FF60(void *heap, unsigned int size, unsigned int flags, int alignment);
extern "C" unsigned int fn_82A442F0(Heap_82A494B8 *self, Block_82A494B8 *block);
extern "C" int fn_82A48CD8(Block_82A494B8 *block, unsigned int size);
extern "C" void fn_82A47D50(Heap_82A494B8 *self);
extern "C" void fn_82A4F4E0(void *storage);
extern "C" char lbl_83219D50[];

static __forceinline Block_82A494B8 *NextBlock(Node_82A494B8 **position)
{
    Node_82A494B8 *node = *position;
    if (node) {
        *position = node->next;
        return node->block;
    }
    return 0;
}

extern "C" void *fn_82A494B8(Heap_82A494B8 *self, unsigned int size)
{
    Node_82A494B8 *position = self->head;
    void *result = 0;
    Block_82A494B8 *block;
    while (position) {
        block = NextBlock(&position);
        if (block->size >= size) {
            result = fn_82A48D88(block, size);
            break;
        }
    }
    if (!result) {
        void *storage = fn_82A3FF60(lbl_83219D50, 0x108, 0x20970000, 0);
        block = storage ? new (storage) Block_82A494B8(self->context) : 0;
        if (block) {
            if (fn_82A442F0(self, block)) {
                unsigned int capacity = self->size;
                int status;
                if (capacity <= size) {
                    capacity = size;
                }
                status = fn_82A48CD8(block, (capacity + 0xfff) & 0xfffff000);
                if (status >= 0) {
                    result = fn_82A48D88(block, size);
                } else {
                    fn_82A47D50(self);
                }
                if (status >= 0) {
                    return result;
                }
            }
            block->~Block_82A494B8();
            fn_82A4F4E0(block);
        }
    }
    return result;
}
