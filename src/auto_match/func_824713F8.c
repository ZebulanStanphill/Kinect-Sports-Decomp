typedef struct Obj_824713F8 { void *vt; char pad[0x12c]; int a; int b; int c; } Obj_824713F8;
typedef struct Blk_824713F8 { void *vt; int uses; int weaks; int pad; Obj_824713F8 o; } Blk_824713F8;
typedef struct H_824713F8 { void *vt; int uses; int weaks; } H_824713F8;
typedef struct Out_824713F8 { Obj_824713F8 *obj; Blk_824713F8 *blk; } Out_824713F8;
extern int fn_822794D0();
extern void *fn_8265C9E0(unsigned);
extern char lbl_821A8D8C[];
extern char lbl_821BC360[];

Out_824713F8 *fn_824713F8(Out_824713F8 *out, int param_2, int *param_3, int *param_4)
{
  Blk_824713F8 *p;
  Obj_824713F8 *o;
  int u1, u2; H_824713F8 *h;
  p = (Blk_824713F8 *)fn_8265C9E0(0x150);
  if (p != 0) {
    p->uses = 1;
    p->vt = lbl_821A8D8C;
    p->weaks = 1;
    o = &p->o;
    if (o != 0) {
      u1 = *param_4;
      u2 = *param_3;
      fn_822794D0(o, param_2, 1, 1, 0);
      o->a = u2;
      o->b = u1;
      o->c = 0;
      o->vt = lbl_821BC360;
    }
  } else {
    p = 0;
  }
  out->blk = p;
  out->obj = &p->o;
  return out;
}
