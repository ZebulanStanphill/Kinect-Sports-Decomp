typedef struct Allocator Allocator;
typedef struct {
    void (*slot0)(Allocator *a);
    void *(*alloc)(Allocator *a, unsigned int size);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vt;
};

extern void *fn_82FA4040(void *mem);

void *fn_82FA4960(Allocator *a)
{
    void *mem = a->vt->alloc(a, 0x230);
    if (mem != 0) {
        return fn_82FA4040(mem);
    }
    return 0;
}
