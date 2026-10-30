extern void fn_822315A0(void *rep);
extern void fn_8265CA20(void *p);
extern void *lbl_82197048[];

typedef struct {
    void **vt;
    char pad[0x14 - 4];
    void *rep1;
    char pad2[0x1c - 0x14 - 4];
    void *rep2;
} Obj_8224BC18;

Obj_8224BC18 *fn_8224BC18(Obj_8224BC18 *o, unsigned int flags)
{
    if (o->rep2 != 0) {
        fn_822315A0(o->rep2);
    }
    if (o->rep1 != 0) {
        fn_822315A0(o->rep1);
    }
    o->vt = lbl_82197048;
    if (flags & 1) {
        fn_8265CA20(o);
    }
    return o;
}
