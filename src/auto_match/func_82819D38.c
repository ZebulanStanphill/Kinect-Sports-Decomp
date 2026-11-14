typedef struct Block_82819D38 {
    char pad0[0x20];
    unsigned int addr;
    unsigned int size;
    char pad28[8];
    short next;
    char pad32[0xe];
} Block_82819D38;

typedef struct Heap_82819D38 {
    char pad0[0x7c];
    Block_82819D38 *blocks;
    int pad80;
    short freeHead;
} Heap_82819D38;

short fn_82819D38(Heap_82819D38 *self, unsigned int size, unsigned short align, int offset)
{
    short i = self->freeHead;
    short best = -1;
    Block_82819D38 *blocks = self->blocks;

    while (i != -1) {
        Block_82819D38 *b = &blocks[i];
        int left = b->size - size;
        if (left >= 0) {
            unsigned int start = b->addr + offset;
            if (((align - 1) & start) != 0) {
                left += start - ((align - 1 + start) & ~(align - 1));
            }
            if (left >= 0 && (best == -1 || b->addr > blocks[best].addr)) {
                best = i;
            }
        }
        i = b->next;
    }
    return best;
}
