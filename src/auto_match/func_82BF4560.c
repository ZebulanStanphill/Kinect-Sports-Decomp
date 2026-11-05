extern char lbl_820EB918[];
extern void (*lbl_831751CC)(void *);
extern void fn_82BE5230(void *);
typedef struct Obj_82BF4560 { void *vt; int p4, p8, pc, p10; void *f14; int p18; void *f1c; } Obj_82BF4560;
void fn_82BF4560(Obj_82BF4560 *o)
{
    o->vt = lbl_820EB918;
    if (o->f14 != 0) lbl_831751CC(o->f14);
    if (o->f1c != 0) lbl_831751CC(o->f1c);
    fn_82BE5230(o);
}
