extern unsigned int lbl_8217D040;
typedef struct Vec3 { int a, b, c; } Vec3;
typedef struct Pair2 { int a, b; } Pair2;
typedef struct Obj_8301A678 { unsigned int *vt; int pad[3]; Vec3 v; int pad1c; Pair2 pr; int pad2[0xcb - 10]; int f32c; } Obj_8301A678;
static void InitV(Vec3 *v) { v->a = 0; v->b = 0; v->c = 0; }
static void InitP(Pair2 *v) { v->a = -1; v->b = -1; }
void fn_8301A678(Obj_8301A678 *p)
{
    p->vt = &lbl_8217D040; InitV(&p->v); InitP(&p->pr); p->f32c = 0;

}
