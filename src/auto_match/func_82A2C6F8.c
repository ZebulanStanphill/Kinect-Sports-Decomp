typedef struct Page_82A2C6F8 {
    int pad0;
    unsigned char refs;
    unsigned char pad5[3];
} Page_82A2C6F8;

typedef struct Heap_82A2C6F8 {
    char pad0[0x30];
    Page_82A2C6F8 *pages;
    char *base;
} Heap_82A2C6F8;

extern unsigned int fn_82A2BAF0(Heap_82A2C6F8 *heap, void *p, int flag, char **block, int *info);

int fn_82A2C6F8(Heap_82A2C6F8 *heap, void *p)
{
    char *block;
    int info;

    if (fn_82A2BAF0(heap, p, 1, &block, &info)) {
        Page_82A2C6F8 *pg = &heap->pages[(block - heap->base) / 4096];
        pg->refs--;
        return 1;
    }
    return 0;
}
