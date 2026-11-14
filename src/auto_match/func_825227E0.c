typedef struct Heap_825227E0 {
    int type;
    int f4;
    int f8;
    int fC;
    int align;
} Heap_825227E0;

extern void *fn_82522D98(unsigned int size);
extern void *fn_82549798(unsigned int size, int align, int flags, int extra);

void *fn_825227E0(void *self, unsigned int size, Heap_825227E0 *heap)
{
    if (heap->type == 0) {
        return fn_82522D98(size);
    }
    return fn_82549798(size, heap->align, 4, 0);
}
