typedef struct Block_828194A0 {
    char pad0[0x20];
    unsigned int addr;
    unsigned int size;
    char pad28[8];
    short next;
    char pad32[0xe];
} Block_828194A0;

typedef struct Heap_828194A0 {
    char pad0[0x7c];
    Block_828194A0 *blocks;
    int pad80;
    short freeHead;
} Heap_828194A0;

/* First free block that can hold `size` bytes at `offset` with the alignment. */
short fn_828194A0(Heap_828194A0 *self, unsigned int size, unsigned short align, int offset)
{
    short i = self->freeHead;
    Block_828194A0 *blocks = self->blocks;

    while (i != -1) {
        Block_828194A0 *b = &blocks[i];
        int left = b->size - size;
        if (left >= 0) {
            unsigned int start = b->addr + offset;
            if (((align - 1) & start) != 0) {
                left += start - ((align - 1 + start) & ~(align - 1));
            }
            if (left >= 0)
                break;
        }
        i = b->next;
    }
    return i;
}
