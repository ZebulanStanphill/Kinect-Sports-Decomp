typedef struct Obj_83005690 Obj_83005690;
typedef struct {
    int pad[62];
    void (*fF8)(Obj_83005690 *, void *, int, int, int, int, int, int, int);
    int pad2[9];
    void (*f120)(Obj_83005690 *);
    int pad3[5];
    int (*f138)(Obj_83005690 *);
} ObjVt_83005690;
struct Obj_83005690 {
    ObjVt_83005690 *vt;
    int pad[15];
    unsigned int mask;
};
extern void *lbl_832642FC;
extern void fn_83018DD8(void *mgr, Obj_83005690 *obj, int a, int b, int c, int d, int e, int f, int g, int h);

void fn_83005690(Obj_83005690 *self, void *target, int p3, int p4, int p5, int p6, int p7, int p8, int p9)
{
    if (target == 0) {
        self->mask |= 1 << p5;
        if (lbl_832642FC != 0) {
            fn_83018DD8(lbl_832642FC, self, p4, p5, p6, p7, p8, p9, 0, self->vt->f138(self));
        }
        self->vt->f120(self);
    } else {
        self->vt->fF8(self, target, p3, p4, p5, p6, p7, p8, p9);
    }
}
