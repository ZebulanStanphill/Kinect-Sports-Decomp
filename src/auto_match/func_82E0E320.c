typedef struct { int a, b, c; } E_82E0E320;
typedef struct { E_82E0E320 *data; int count; unsigned int cap; } Vec_82E0E320;
typedef struct { char pad[0x40]; Vec_82E0E320 v; } Obj_82E0E320;
typedef struct { char pad[0x10]; void *heap; } Ctx_82E0E320;
extern Ctx_82E0E320 *fn_82CE5410();
extern void fn_82CE63B0(void *, Vec_82E0E320 *, int);

void fn_82E0E320(Obj_82E0E320 *o, int a, int b, int c)
{
    Vec_82E0E320 *v = &o->v;
    E_82E0E320 *e;
    Ctx_82E0E320 *ctx = fn_82CE5410();
    if (v->count == (int)(v->cap & 0x3fffffff)) {
        fn_82CE63B0(ctx->heap, v, 0xc);
    }
    e = v->data + v->count;
    if (e != 0) {
        e->a = a;
        e->b = b;
        e->c = c;
    }
    v->count = v->count + 1;
}
