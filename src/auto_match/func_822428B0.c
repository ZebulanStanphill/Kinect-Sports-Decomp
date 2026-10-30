extern void fn_822315A0(void *rep);
extern void fn_8265CA20(void *p);
extern void *lbl_821C250C[];

typedef struct {
    void **vt;
    char pad[0x8 - 4];
    void *rep1;
    char pad2[0x10 - 0x8 - 4];
    void *rep2;
} Obj_822428B0;

Obj_822428B0 *fn_822428B0(Obj_822428B0 *o, unsigned int flags)
{
    if (o->rep2 != 0) {
        fn_822315A0(o->rep2);
    }
    if (o->rep1 != 0) {
        fn_822315A0(o->rep1);
    }
    o->vt = lbl_821C250C;
    if (flags & 1) {
        fn_8265CA20(o);
    }
    return o;
}
