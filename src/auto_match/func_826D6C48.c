typedef struct {
    int a, b, c, d, e, f, g, h;
} Desc_826D6C48;
typedef struct Res_826D6C48 Res_826D6C48;
typedef struct {
    char pad0[0x1c]; void *mgr; Res_826D6C48 *res;
} Obj_826D6C48;
extern void fn_8267BC98(Res_826D6C48 *res);
extern Res_826D6C48 *fn_8267C2D8(void *mgr, const char *name, Desc_826D6C48 *desc);

static __forceinline void assign(Res_826D6C48 **slot, Res_826D6C48 *r)
{
    if (*slot != 0) {
        fn_8267BC98(*slot);
    }
    *slot = r;
}

Res_826D6C48 *fn_826D6C48(Obj_826D6C48 *o)
{
    Desc_826D6C48 d;
    if ((int)o->res == 0) {
        d.a = 4;
        d.b = 0x20;
        d.c = 0x1000;
        d.h = 0;
        d.d = 0;
        d.e = -1;
        d.f = 0;
        d.g = 7;
        assign(&o->res, fn_8267C2D8(o->mgr, "_Images", &d));
    }
    return o->res;
}
