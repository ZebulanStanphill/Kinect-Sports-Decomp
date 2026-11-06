typedef struct Entry_82B50C70 {
    int kind;
    int value;
} Entry_82B50C70;

typedef struct Block_82B50C70 {
    int pad0;
    int pad4;
    unsigned int count;
    unsigned int capacity;
    Entry_82B50C70 entries[1];
} Block_82B50C70;

typedef struct List_82B50C70 {
    unsigned int head;
    unsigned int flags;
} List_82B50C70;

extern Block_82B50C70 *fn_82AF87E0(List_82B50C70 *list, int count);

void fn_82B50C70(List_82B50C70 *list, int value, unsigned char flag)
{
    Entry_82B50C70 e;
    Block_82B50C70 *block;
    Entry_82B50C70 *entry;

    e.kind = 1;
    if (flag) {
        e.kind = 3;
    }
    e.value = value;
    if ((list->flags & 1) != 0 || (block = (Block_82B50C70 *)((list->head & ~1u) - 4)) == 0 ||
        block->count + 1 > block->capacity) {
        block = fn_82AF87E0(list, 1);
    }
    entry = &block->entries[block->count++];
    *entry = e;
}
