typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef __vector4 Vec_82DF2CD8;

typedef struct Alloc_82DF2CD8 Alloc_82DF2CD8;

typedef struct AllocVt_82DF2CD8 {
    void *slot0;
    void *(*blockAlloc)(Alloc_82DF2CD8 *self, int size);
    void *slot8;
    void *(*bufAlloc)(Alloc_82DF2CD8 *self, int *size, int elemSize);
    void (*bufFree)(Alloc_82DF2CD8 *self, void *data, int count, int elemSize);
} AllocVt_82DF2CD8;

struct Alloc_82DF2CD8 {
    AllocVt_82DF2CD8 *vt;
};

typedef struct Router_82DF2CD8 {
    int pad[4];
    Alloc_82DF2CD8 *heap;
} Router_82DF2CD8;

typedef struct Array_82DF2CD8 {
    int *data;
    int size;
    int capacityAndFlags;
} Array_82DF2CD8;

typedef struct Obj_82DF2CD8 {
    char pad0[4];
    unsigned short memSizeAndFlags;
    char pad6[0x10 - 6];
    int m10;
    char pad14[0x20 - 0x14];
    Vec_82DF2CD8 v20;
    Vec_82DF2CD8 v30;
    float f40;
    float f44;
    float f48;
    float f4c;
    int m50;
    Array_82DF2CD8 arr;
} Obj_82DF2CD8;

typedef struct Arg_82DF2CD8 {
    void **ref;
    int type;
} Arg_82DF2CD8;

extern Router_82DF2CD8 *fn_82CE5410(void);
extern Obj_82DF2CD8 *fn_82DF2948(void *mem, void *a);

static __forceinline void copyArray_82DF2CD8(Array_82DF2CD8 *dst, Array_82DF2CD8 *src)
{
    Alloc_82DF2CD8 *a = fn_82CE5410()->heap;
    int cap = dst->capacityAndFlags & 0x3fffffff;
    int *d;
    int *s;
    int n;
    int i;
    if (cap < src->size) {
        if ((dst->capacityAndFlags & (int)0x80000000) == 0) {
            a->vt->bufFree(a, dst->data, cap, 4);
        }
        {
            int sz = src->size;
            dst->data = (int *)a->vt->bufAlloc(a, &sz, 4);
            dst->capacityAndFlags = sz;
        }
    }
    n = src->size;
    d = dst->data;
    dst->size = n;
    s = src->data;
    for (i = 0; i < n; i++) {
        d[i] = s[i];
    }
}

Obj_82DF2CD8 *fn_82DF2CD8(Obj_82DF2CD8 *self, Arg_82DF2CD8 *a, Arg_82DF2CD8 *b)
{
    Alloc_82DF2CD8 *h;
    Obj_82DF2CD8 *mem;
    Obj_82DF2CD8 *obj;

    if (a->type != 1) {
        return 0;
    }
    if (b->type != 0) {
        return 0;
    }
    h = fn_82CE5410()->heap;
    mem = (Obj_82DF2CD8 *)h->vt->blockAlloc(h, 0x60);
    mem->memSizeAndFlags = 0x60;
    obj = fn_82DF2948(mem, *a->ref);
    obj->v20 = self->v20;
    obj->v30 = self->v30;
    obj->f40 = self->f40;
    obj->f44 = self->f44;
    obj->f48 = self->f48;
    obj->f4c = self->f4c;
    obj->m10 = self->m10;
    obj->m50 = self->m50;
    copyArray_82DF2CD8(&obj->arr, &self->arr);
    return obj;
}
