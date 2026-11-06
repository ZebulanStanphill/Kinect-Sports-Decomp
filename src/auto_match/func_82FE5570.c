typedef struct Alloc_82FE5570 Alloc_82FE5570;
typedef struct {
    void *f0;
    void *(*alloc)(Alloc_82FE5570 *a, unsigned int size);
} AllocVtbl_82FE5570;
struct Alloc_82FE5570 { AllocVtbl_82FE5570 *vt; };
typedef struct { unsigned int count; void *data; int used; float scale; } Pool_82FE5570;

int fn_82FE5570(Pool_82FE5570 *p, Alloc_82FE5570 *a, unsigned int n, float scale)
{
    if (n < 1) {
        n = 1;
    }
    p->count = n;
    p->data = a->vt->alloc(a, n * 8);
    if (p->data == 0) {
        return 0x34;
    }
    p->used = 0;
    p->scale = scale;
    return 1;
}
