typedef struct Obj_82BF1EF8 {
    void *vt;
    char pad4[8];
    void *vt2;
    char pad10[0x10];
    void *m20;
} Obj_82BF1EF8;

extern void fn_82BE5230(void *);
extern char lbl_820EB5B4[];
extern char lbl_820EB5B8[];
extern char lbl_82197048[];
extern void (*lbl_831751CC)(void *);

void fn_82BF1EF8(Obj_82BF1EF8 *o)
{
    o->vt = lbl_820EB5B8;
    o->vt2 = lbl_820EB5B4;
    if (o->m20 != 0) {
        lbl_831751CC(o->m20);
    }
    fn_82BE5230(&o->vt2);
    o->vt = lbl_82197048;
}
