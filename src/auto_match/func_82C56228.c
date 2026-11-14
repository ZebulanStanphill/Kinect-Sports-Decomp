typedef struct Heap_82C56228 {
    void *lock;
} Heap_82C56228;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_82C53960(unsigned int size, int flags);
extern void *memset(void *dst, int c, unsigned int n);

static __forceinline void *AllocZeroed(unsigned int bytes)
{
    void *p;
    if (bytes >= 0xffffffff)
        return 0;
    p = fn_82C53960(bytes, 0);
    if (p != 0)
        memset(p, 0, bytes);
    return p;
}

static __forceinline void *Alloc(Heap_82C56228 *heap, unsigned int bytes)
{
    void *result;
    RtlEnterCriticalSection(heap->lock);
    result = AllocZeroed(bytes);
    if (result != 0) {
        RtlEnterCriticalSection(heap->lock);
        RtlLeaveCriticalSection(heap->lock);
    }
    RtlLeaveCriticalSection(heap->lock);
    return result;
}

void *fn_82C56228(Heap_82C56228 *heap, unsigned int count, unsigned int size)
{
    unsigned __int64 total = (unsigned __int64)count * size;
    if ((unsigned int)total == total && (unsigned int)total < 0xfffffffb)
        return Alloc(heap, ((unsigned int)total + 3) & ~3);
    return 0;
}
