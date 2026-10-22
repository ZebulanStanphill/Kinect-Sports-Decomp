typedef struct Alloc Alloc;
typedef struct {
    void *f0;
    void *f4;
    void (*Free)(Alloc *, void *, int);
    void *fc;
    void (*FreeArray)(Alloc *, void *, unsigned int, int);
} AllocVtbl;
struct Alloc { AllocVtbl *vt; };
typedef struct { char pad[0x10]; Alloc *alloc; } Mgr;
extern Mgr *fn_82CE5410(void);

typedef struct { void **data; int count; int cap; } Array;

void fn_82D2C2D0(Array *a)
{
    int i;
    Alloc *al;

    for (i = 0; i < a->count; i++) {
        void *p = a->data[i];
        al = fn_82CE5410()->alloc;
        al->vt->Free(al, p, 0xa08);
    }
    a->count = 0;
    al = fn_82CE5410()->alloc;
    a->count = 0;
    if ((a->cap & (int)0x80000000) == 0) {
        al->vt->FreeArray(al, a->data, a->cap & 0x3fffffff, 4);
    }
    a->data = 0;
    a->cap = 0x80000000;
}
