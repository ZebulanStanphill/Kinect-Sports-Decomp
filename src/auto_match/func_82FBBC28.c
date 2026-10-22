typedef struct Allocator Allocator;
typedef struct {
    void *fn0;
    void *(*alloc)(Allocator *self, unsigned int size);
} AllocatorVtbl;
struct Allocator {
    AllocatorVtbl *vtbl;
};

extern char lbl_8216DBF0[];

void **fn_82FBBC28(Allocator *a)
{
    void **p;

    p = (void **)a->vtbl->alloc(a, 0x44);
    if (p != 0) {
        p[2] = 0;
        p[0] = lbl_8216DBF0;
        p[1] = 0;
        p[10] = 0;
        p[9] = 0;
        return p;
    }
    return 0;
}
