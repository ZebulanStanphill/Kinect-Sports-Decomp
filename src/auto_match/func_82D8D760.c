typedef struct Alloc_82D8D760 Alloc_82D8D760;

typedef struct AllocVt_82D8D760 {
    void *slot0;
    void *(*blockAlloc)(Alloc_82D8D760 *self, int size);
    void *slot8;
    void *(*bufAlloc)(Alloc_82D8D760 *self, int *size, int elemSize);
    void (*bufFree)(Alloc_82D8D760 *self, void *data, int count, int elemSize);
} AllocVt_82D8D760;

struct Alloc_82D8D760 {
    AllocVt_82D8D760 *vt;
};

typedef struct Router_82D8D760 {
    int pad[4];
    Alloc_82D8D760 *heap;
} Router_82D8D760;

typedef struct Array_82D8D760 {
    int *data;
    int size;
    int capacityAndFlags;
} Array_82D8D760;

typedef struct Obj_82D8D760 {
    char pad0[4];
    unsigned short memSizeAndFlags;
} Obj_82D8D760;

extern Router_82D8D760 *fn_82CE5410(void);
extern void fn_82D8C858(char *dst, char *src);
extern char *fn_82D8D6C0(void *mem, char *a, int b);

static __forceinline void copyArray_82D8D760(Array_82D8D760 *dst, Array_82D8D760 *src)
{
    Alloc_82D8D760 *a = fn_82CE5410()->heap;
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

char *fn_82D8D760(char *param_1)
{
    Alloc_82D8D760 *a;
    Obj_82D8D760 *mem;
    char *obj;

    a = fn_82CE5410()->heap;
    mem = (Obj_82D8D760 *)a->vt->blockAlloc(a, 0xe0);
    mem->memSizeAndFlags = 0xe0;
    obj = fn_82D8D6C0(mem, param_1 + 0xb0, *(int *)(param_1 + 0x2c));
    copyArray_82D8D760((Array_82D8D760 *)(obj + 0x8c), (Array_82D8D760 *)(param_1 + 0x8c));
    copyArray_82D8D760((Array_82D8D760 *)(obj + 0x98), (Array_82D8D760 *)(param_1 + 0x98));
    fn_82D8C858(obj, param_1);
    return obj;
}
