typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct Heap_82D9FB58;
typedef struct VtH_82D9FB58 {
    int p0, p4, p8;
    void *(*alloc)(struct Heap_82D9FB58 *, int *, int);
    void (*free)(struct Heap_82D9FB58 *, __vector4 *, int, int);
} VtH_82D9FB58;
typedef struct Heap_82D9FB58 { VtH_82D9FB58 *vt; } Heap_82D9FB58;
typedef struct Ctx_82D9FB58 { char pad[0x10]; Heap_82D9FB58 *heap; } Ctx_82D9FB58;
typedef struct Arr_82D9FB58 { __vector4 *data; int size; int capFlags; } Arr_82D9FB58;
typedef struct Obj_82D9FB58 { char pad[0x20]; Arr_82D9FB58 arr; } Obj_82D9FB58;
extern Ctx_82D9FB58 *fn_82CE5410(void);
void fn_82D9FB58(Obj_82D9FB58 *o, Arr_82D9FB58 *d)
{
    Arr_82D9FB58 *s = &o->arr;
    Heap_82D9FB58 *h = fn_82CE5410()->heap;
    int n = d->capFlags & 0x3fffffff;
    int cap;
    int i;
    int cnt;
    __vector4 *sp;
    __vector4 *dp;
    if (n < s->size) {
        if ((d->capFlags & (int)0x80000000) == 0)
            h->vt->free(h, d->data, n, 0x10);
        {
            VtH_82D9FB58 *vt = h->vt;
            cap = s->size;
            d->data = (__vector4 *)vt->alloc(h, &cap, 0x10);
        }
        d->capFlags = cap;
    }
    cnt = s->size;
    dp = d->data;
    d->size = cnt;
    sp = s->data;
    if (cnt > 0) {
        for (i = 0; i < cnt; i++) dp[i] = sp[i];
    }
}
