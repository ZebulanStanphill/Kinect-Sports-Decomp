typedef struct Allocator Allocator;
typedef struct {
    void (*slot0)(Allocator *a);
    void *(*alloc)(Allocator *a, unsigned int size);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vt;
};

extern void *fn_82FE27D8(void *mem);

void *fn_82FE2A38(Allocator *a)
{
    void *mem = a->vt->alloc(a, 0x1f4);
    if (mem != 0) {
        return fn_82FE27D8(mem);
    }
    return 0;
}
