
long _InterlockedExchangeAdd(long *, long);

typedef struct Alloc_82BFB7E0 {
    void *pad;
    void *context;
    void *(*alloc)(void *, int);
} Alloc_82BFB7E0;

extern void *fn_82A2A360(void);
extern void *fn_82A28568(void *, int, int);
extern int fn_82A277E0(void *, int, void *);

void *fn_82BFB7E0(Alloc_82BFB7E0 *allocator, int size, long *total)
{
    void *result;
    void *heap;
    int actual;
    if (size <= 0)
        return 0;
    if (allocator) {
        result = allocator->alloc(allocator->context, size);
        if (total)
            _InterlockedExchangeAdd(total, size);
    } else {
        heap = fn_82A2A360();
        result = fn_82A28568(heap, 0, size);
        if (result && total) {
            actual = fn_82A277E0(heap, 0, result);
            if (actual > 0)
                _InterlockedExchangeAdd(total, actual);
        }
    }
    return result;
}
