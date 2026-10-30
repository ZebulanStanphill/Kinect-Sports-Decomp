typedef struct Obj_822529F8 { void *vt; int w[0x19]; void *vt2; int w2[5]; int f80; int w3; char sub[1]; } Obj_822529F8;
extern char lbl_821B6558[];
extern char lbl_821B65A8[];
extern void *fn_8265C9E0(int);
extern void fn_82517DC8(void *, void *);
extern void fn_823D5B10(void *);

Obj_822529F8 *fn_822529F8(void *param_1)
{
  Obj_822529F8 *o = (Obj_822529F8 *)fn_8265C9E0(0x90);
  if (o != 0) {
    fn_82517DC8(o, param_1);
    o->vt = lbl_821B6558;
    o->vt2 = lbl_821B65A8;
    o->f80 = 0;
    fn_823D5B10(o->sub);
    return o;
  }
  return 0;
}
