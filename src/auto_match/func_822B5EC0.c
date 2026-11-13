typedef struct E8_822B5EC0 { int a, b; } E8_822B5EC0;
typedef struct E12_822B5EC0 { int a, b, c; } E12_822B5EC0;
typedef struct Vec8_822B5EC0 { E8_822B5EC0 *first; E8_822B5EC0 *last; E8_822B5EC0 *end; } Vec8_822B5EC0;
typedef struct Vec12_822B5EC0 { E12_822B5EC0 *first; E12_822B5EC0 *last; E12_822B5EC0 *end; } Vec12_822B5EC0;

typedef struct Obj_822B5EC0 {
    void *handle;
    int sub[10];
    Vec12_822B5EC0 v12;
    int pad38;
    Vec8_822B5EC0 v8;
    int pad48[3];
    int sub54[1];
} Obj_822B5EC0;

extern void fn_82552B50(void *p, int a);
extern void fn_8251FA58(void *h);
extern void fn_822C18B8(void *p);
extern void fn_8265CA20(void *p);

static __forceinline void freeVec8(Vec8_822B5EC0 *v)
{
    E8_822B5EC0 *e;
    if (v->first != 0) {
        for (e = v->first; e != v->last; e++) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}
static __forceinline void freeVec12(Vec12_822B5EC0 *v)
{
    E12_822B5EC0 *e;
    if (v->first != 0) {
        for (e = v->first; e != v->last; e++) {
        }
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}
Obj_822B5EC0 *fn_822B5EC0(Obj_822B5EC0 *o)
{
    fn_82552B50(o->sub, 1);
    if (o->handle != 0) {
        fn_8251FA58(o->handle);
        o->handle = 0;
    }
    fn_822C18B8(o->sub54);
    freeVec8(&o->v8);
    freeVec12(&o->v12);
    fn_8265CA20(o);
    return o;
}
