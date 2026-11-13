struct Pl_8234E660;
typedef struct { char pad[0x14]; void (*f14)(struct Pl_8234E660 *, int); } Vt_8234E660;
typedef struct Pl_8234E660 { Vt_8234E660 *vt; char pad[0x180]; float f184; } Pl_8234E660;
typedef struct { int pad; int f4; int pad8; Pl_8234E660 *pl; } In_8234E660;
typedef struct { char pad[8]; In_8234E660 *in; } Obj_8234E660;
extern float lbl_821917A8[];
extern int fn_8250E5E0(void *, int);
extern void fn_827F21F0(Pl_8234E660 *);
extern void fn_827F2220(Pl_8234E660 *);

void fn_8234E660(Obj_8234E660 *o)
{
  int r;
  In_8234E660 *in;
  Pl_8234E660 *pl;
  r = fn_8250E5E0((char *)o + 0xc, o->in->f4);
  in = o->in;
  pl = in->pl;
  pl->f184 = lbl_821917A8[3];
  pl->vt->f14(pl, r);
  fn_827F21F0(in->pl);
  fn_827F2220(in->pl);
}
