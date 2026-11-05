struct Heap_82D9CFE0;
typedef struct VtH_82D9CFE0 {
    int p0, p4, p8;
    void *(*alloc)(struct Heap_82D9CFE0 *, int *, int);
    void (*free)(struct Heap_82D9CFE0 *, int *, int, int);
} VtH_82D9CFE0;
typedef struct Heap_82D9CFE0 { VtH_82D9CFE0 *vt; } Heap_82D9CFE0;
typedef struct Ctx_82D9CFE0 { char pad[0x10]; Heap_82D9CFE0 *heap; } Ctx_82D9CFE0;
typedef struct Arr_82D9CFE0 { int *data; int size; int capFlags; } Arr_82D9CFE0;
typedef struct Src_82D9CFE0 { char pad[0x38]; Arr_82D9CFE0 arr; } Src_82D9CFE0;
typedef struct Obj_82D9CFE0 { char pad[0x18]; Src_82D9CFE0 *src; } Obj_82D9CFE0;
extern Ctx_82D9CFE0 *fn_82CE5410(void);
void fn_82D9CFE0(Obj_82D9CFE0 *o, Arr_82D9CFE0 *d)
{
    Arr_82D9CFE0 *s = &o->src->arr;
    Heap_82D9CFE0 *h = fn_82CE5410()->heap;
    int n = d->capFlags & 0x3fffffff;
    int cap;
    int i;
    int cnt;
    int *sp;
    int *dp;
    if (n < s->size) {
        if ((d->capFlags & (int)0x80000000) == 0)
            h->vt->free(h, d->data, n, 4);
        {
            VtH_82D9CFE0 *vt = h->vt;
            cap = s->size;
            d->data = vt->alloc(h, &cap, 4);
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
