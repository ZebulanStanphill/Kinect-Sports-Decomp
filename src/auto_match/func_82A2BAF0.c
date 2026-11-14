typedef struct Entry_82A2BAF0 {
    int f0;
    unsigned char refs;
} Entry_82A2BAF0;

typedef struct Heap_82A2BAF0 {
    char pad0[0x34];
    char *base;
} Heap_82A2BAF0;

extern int fn_82A2B9A0(Heap_82A2BAF0 *heap, int a, int b, unsigned int *index, Entry_82A2BAF0 **entry);
extern void fn_82A2B900(Heap_82A2BAF0 *heap, unsigned int index, int flag);

int fn_82A2BAF0(Heap_82A2BAF0 *heap, int a, int b, char **address, Entry_82A2BAF0 **entryOut)
{
    unsigned int index;
    Entry_82A2BAF0 *entry;
    int result;

    result = fn_82A2B9A0(heap, a, b, &index, &entry);
    if (result != 0) {
        char *p = heap->base + (index << 12);
        Entry_82A2BAF0 *e;
        fn_82A2B900(heap, index, 1);
        e = entry;
        e->refs++;
        *address = p;
        *entryOut = e;
    }
    return result;
}
