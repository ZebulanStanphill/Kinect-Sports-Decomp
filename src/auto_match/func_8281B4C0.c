typedef struct Block_8281B4C0 {
    unsigned char data[0x40];
} Block_8281B4C0;

typedef struct Heap_8281B4C0 {
    unsigned char pad[0x10c];
    Block_8281B4C0 blocks[1];
} Heap_8281B4C0;

extern void fn_8281B210(void *out, int count, Heap_8281B4C0 *heap, void *begin, void *cur, void *end, unsigned int flags);

void fn_8281B4C0(void *out, int count, Heap_8281B4C0 *heap, void *end, unsigned int flags)
{
    void *p = &heap->blocks[count];
    fn_8281B210(out, count, heap, p, p, end, flags);
}
