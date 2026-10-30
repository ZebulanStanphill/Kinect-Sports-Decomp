typedef struct Allocator Allocator;
typedef struct {
    void (*slot0)(Allocator *a);
    void *(*alloc)(Allocator *a, unsigned int size);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vt;
};

extern void *fn_82FDA1D0(void *mem);

void *fn_82FDA5D0(Allocator *a)
{
    void *mem = a->vt->alloc(a, 0x1ac);
    if (mem != 0) {
        return fn_82FDA1D0(mem);
    }
    return 0;
}
