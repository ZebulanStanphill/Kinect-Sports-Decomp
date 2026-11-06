typedef struct Alloc_82D94630 Alloc_82D94630;
typedef struct AllocVt_82D94630 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *(*bufAlloc)(Alloc_82D94630 *self, int *reqNum, int elemSize);
    void (*bufFree)(Alloc_82D94630 *self, void *p, int num, int elemSize);
} AllocVt_82D94630;
struct Alloc_82D94630 {
    AllocVt_82D94630 *vt;
};

typedef struct Router_82D94630 {
    char pad0[0x10];
    Alloc_82D94630 *heap;
} Router_82D94630;

typedef struct Array_82D94630 {
    int *data;
    int size;
    int capacityAndFlags;
} Array_82D94630;

typedef struct Obj_82D94630 {
    char pad0[8];
    Array_82D94630 a8;
    Array_82D94630 a14;
    Array_82D94630 a20;
    Array_82D94630 a2c;
    char f38[4];
    int f3c;
    char f40;
} Obj_82D94630;

extern Router_82D94630 *fn_82CE5410(void);
extern void fn_82CED6A8(void *dst, const void *src);

static __forceinline void copyArray(Array_82D94630 *dst, const Array_82D94630 *src)
{
    Alloc_82D94630 *alloc = fn_82CE5410()->heap;
    int *d;
    int size;
    const int *s;
    int i;

    if ((dst->capacityAndFlags & 0x3fffffff) < src->size) {
        if ((dst->capacityAndFlags & (int)0x80000000) == 0) {
            alloc->vt->bufFree(alloc, dst->data, dst->capacityAndFlags & 0x3fffffff, 4);
        }
        {
            int n = src->size;
            dst->data = (int *)alloc->vt->bufAlloc(alloc, &n, 4);
            dst->capacityAndFlags = n;
        }
    }
    size = src->size;
    d = dst->data;
    dst->size = size;
    s = src->data;
    for (i = 0; i < size; i++) {
        d[i] = s[i];
    }
}

void fn_82D94630(Obj_82D94630 *self, const Obj_82D94630 *other)
{
    copyArray(&self->a8, &other->a8);
    copyArray(&self->a2c, &other->a2c);
    copyArray(&self->a14, &other->a14);
    copyArray(&self->a20, &other->a20);
    fn_82CED6A8(self->f38, other->f38);
    self->f3c = other->f3c;
    self->f40 = other->f40;
}
