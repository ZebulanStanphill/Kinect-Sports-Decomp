typedef struct Aabb_82E01810 {
    __declspec(align(16)) float min[4];
    float max[4];
} Aabb_82E01810;

typedef struct Self_82E01810 Self_82E01810;
typedef struct SelfVt_82E01810 {
    void *slots[13];
    void (*getAabb)(Self_82E01810 *self, void *arg, Aabb_82E01810 *out);
} SelfVt_82E01810;

struct Self_82E01810 {
    SelfVt_82E01810 *vt;
    int pad4[2];
    unsigned int filterInfo;
    void *phantom;
    char sub[8];
    char listener[4];
    char *f20;
};

typedef struct Arg_82E01810 {
    char pad0[0x18];
    char *f18;
} Arg_82E01810;

typedef struct Alloc_82E01810 Alloc_82E01810;
typedef struct AllocVt_82E01810 {
    void *slot0;
    void *(*blockAlloc)(Alloc_82E01810 *self, int size);
} AllocVt_82E01810;
struct Alloc_82E01810 {
    AllocVt_82E01810 *vt;
};

typedef struct Router_82E01810 {
    char pad0[0x10];
    Alloc_82E01810 *heap;
} Router_82E01810;

extern Router_82E01810 *fn_82CE5410(void);
extern void *fn_82D8D6C0(void *self, const Aabb_82E01810 *aabb, unsigned int filterInfo);
extern void fn_82D9A5F8(void *phantom, void *listener);

void fn_82E01810(Self_82E01810 *self, Arg_82E01810 *arg)
{
    Aabb_82E01810 aabb;
    char *mem;
    void *ph;
    char *sub;
    Alloc_82E01810 *heap;

    self->vt->getAabb(self, arg, &aabb);
    heap = fn_82CE5410()->heap;
    mem = (char *)heap->vt->blockAlloc(heap, 0xe0);
    *(short *)(mem + 4) = 0xe0;
    ph = fn_82D8D6C0(mem, &aabb, self->filterInfo);
    self->phantom = ph;
    self->f20 = arg->f18 + 0x10;
    fn_82D9A5F8(ph, self->sub != 0 ? self->listener : 0);
}
