typedef struct Allocator Allocator;
typedef struct {
    void (*slot0)(Allocator *a);
    void *(*alloc)(Allocator *a, unsigned int size);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vt;
};

extern void *fn_82FC85F8(void *mem);

void *fn_82FC8F80(Allocator *a)
{
    void *mem = a->vt->alloc(a, 0x114);
    if (mem != 0) {
        return fn_82FC85F8(mem);
    }
    return 0;
}
