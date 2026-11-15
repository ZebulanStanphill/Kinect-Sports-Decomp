extern char lbl_83264218[];
unsigned int _CountLeadingZeros(unsigned int value);

typedef struct Block_82FA5D50 {
    unsigned int previousSize;
    unsigned int size;
    struct Block_82FA5D50 *next;
    void *previous;
} Block_82FA5D50;

typedef struct Allocator_82FA5D50 {
    unsigned int top;
    unsigned int masks[24];
    Block_82FA5D50 *heads[][32];
} Allocator_82FA5D50;

void fn_82FA5D50(Allocator_82FA5D50 *self, Block_82FA5D50 *block)
{
    unsigned int size = block->size & ~3u;
    unsigned int first;
    unsigned int second;
    Block_82FA5D50 *next;
    if (size < 0x80) {
        first = 0;
        second = size >> 2;
    } else {
        unsigned int highest = 31 - _CountLeadingZeros(size);
        first = highest - 6;
        second = (size >> (highest - 5)) ^ 0x20;
    }
    next = self->heads[first][second];
    block->previous = lbl_83264218;
    block->next = next;
    next->previous = block;
    self->heads[first][second] = block;
    self->top |= 1u << first;
    self->masks[first] |= 1u << second;
}
