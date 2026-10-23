typedef struct {
    int a;
    void *p;
} Ref;

typedef struct {
    void *vtbl;
    char pad[0x28 - 4];
    Ref r[8];
} Obj;

extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_82197048[];

Obj *fn_82400D70(Obj *o, unsigned int flags)
{
    if (o->r[7].p != 0) fn_822315A0(o->r[7].p);
    if (o->r[6].p != 0) fn_822315A0(o->r[6].p);
    if (o->r[5].p != 0) fn_822315A0(o->r[5].p);
    if (o->r[4].p != 0) fn_822315A0(o->r[4].p);
    if (o->r[3].p != 0) fn_822315A0(o->r[3].p);
    if (o->r[2].p != 0) fn_822315A0(o->r[2].p);
    if (o->r[1].p != 0) fn_822315A0(o->r[1].p);
    if (o->r[0].p != 0) fn_822315A0(o->r[0].p);
    o->vtbl = lbl_82197048;
    if (flags & 1)
        fn_8265CA20(o);
    return o;
}
