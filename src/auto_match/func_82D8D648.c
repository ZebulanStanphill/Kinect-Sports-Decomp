typedef struct Allocator_82D8D648 Allocator_82D8D648;

typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fC;
    void (*Free)(Allocator_82D8D648 *self, void *data, unsigned int size, int align);
} AllocatorVtbl_82D8D648;

struct Allocator_82D8D648 {
    AllocatorVtbl_82D8D648 *vt;
};

typedef struct {
    char pad[0x10];
    Allocator_82D8D648 *alloc;
} Context_82D8D648;

typedef struct {
    void *data;
    int count;
    int flags;
} Array_82D8D648;

typedef struct {
    char pad[0xd0];
    Array_82D8D648 arr;
} Obj_82D8D648;

extern Context_82D8D648 *fn_82CE5410(void);
extern void fn_82D9A670(Obj_82D8D648 *o);

static __forceinline void Array_Free_82D8D648(Array_82D8D648 *a)
{
    Allocator_82D8D648 *al = fn_82CE5410()->alloc;
    a->count = 0;
    if ((a->flags & (int)0x80000000) == 0) {
        al->vt->Free(al, a->data, a->flags & 0x3fffffff, 4);
    }
    a->data = 0;
    a->flags = (int)0x80000000;
}

void fn_82D8D648(Obj_82D8D648 *o)
{
    if (o->arr.count == 0) {
        Array_Free_82D8D648(&o->arr);
    }
    fn_82D9A670(o);
}
