typedef struct Heap_82C56398 {
    void *cs;
    int pad[12];
    char pool[8];
    void *poolBase;
} Heap_82C56398;

extern void *fn_82C44E50(void *pool, unsigned int size);
extern void *fn_82C562F0(Heap_82C56398 *h, unsigned int size);

void *fn_82C56398(Heap_82C56398 *h, unsigned int size)
{
    if (h->poolBase != 0) {
        return fn_82C44E50(h->pool, size);
    }
    return fn_82C562F0(h, size);
}
