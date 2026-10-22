typedef struct { int pad0; int pad4; unsigned int refs; } Obj;
typedef struct { int refs; } Ref;
typedef struct {
    Obj *obj;
    Ref *ref;
    int sub[1];
} Handle;

extern void fn_826824B0(Obj *o);
extern void fn_8269A608(Ref *r);
extern void fn_8267BE38(Ref *r);
extern void fn_826C3768(void *dst, void *src);

Handle *fn_826FE9F8(Handle *dst, Handle *src)
{
    Obj *o;
    Ref *r;

    o = src->obj;
    if ((int)o != 0) {
        o->refs = (o->refs + 1) & 0x8fffffff;
    }
    if (dst->obj != 0) {
        fn_826824B0(dst->obj);
    }
    dst->obj = src->obj;
    r = src->ref;
    if ((int)r != 0) {
        r->refs++;
    }
    r = dst->ref;
    if (r != 0) {
        if (--r->refs <= 0) {
            fn_8269A608(r);
            fn_8267BE38(r);
        }
    }
    dst->ref = src->ref;
    fn_826C3768(dst->sub, src->sub);
    return dst;
}
