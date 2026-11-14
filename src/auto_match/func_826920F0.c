typedef struct Link_826920F0 {
    struct Link_826920F0 *next;
    struct Link_826920F0 *prev;
} Link_826920F0;

typedef struct Block_826920F0 {
    char pad0[0xc];
    unsigned short sizeClass;   /* 0x0c */
    unsigned short pad0e;
    char pad10[0x8];
    unsigned int bytes;         /* 0x18 */
    char *mem;                  /* 0x1c */
} Block_826920F0;

typedef struct Heap_826920F0 {
    char pad0[0xc];
    unsigned int shift;         /* 0x0c */
    char pad10[0x210 - 0x10];
    unsigned int used;          /* 0x210 */
} Heap_826920F0;

extern void fn_82691AF0(Heap_826920F0 *self, Block_826920F0 *block);

void fn_826920F0(Heap_826920F0 *self, Block_826920F0 *block)
{
    unsigned int stride = (block->sizeClass + 1) << self->shift;
    unsigned int count = block->bytes / stride;
    char *p = block->mem;
    unsigned int i;

    for (i = 0; i < count; i++) {
        Link_826920F0 *l = (Link_826920F0 *)p;
        l->next->prev = l->prev;
        l->prev->next = l->next;
        p += stride;
    }
    self->used -= block->bytes;
    fn_82691AF0(self, block);
}
