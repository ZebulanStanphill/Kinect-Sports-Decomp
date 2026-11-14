typedef struct Allocator_82BFB8C0 {
    void *unk0;
    void *context;
    void *unk8;
    void (*free)(void *context, void *mem);
} Allocator_82BFB8C0;

extern long _InterlockedExchangeAdd(long volatile *addend, long value);
extern void *fn_82A2A360(void);
extern int fn_82A277E0(void *heap, unsigned int flags, void *mem);
extern int fn_82A28E60(void *heap, unsigned int flags, void *mem);

void fn_82BFB8C0(Allocator_82BFB8C0 *allocator, void *mem, long *allocated)
{
    if (allocator != 0) {
        allocator->free(allocator->context, mem);
    } else {
        void *heap = fn_82A2A360();
        if (allocated != 0) {
            int size = fn_82A277E0(heap, 0, mem);
            if (size > 0) {
                _InterlockedExchangeAdd(allocated, -size);
            }
        }
        fn_82A28E60(fn_82A2A360(), 0, mem);
    }
}
