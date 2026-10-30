typedef struct Obj_827137E8 {
  void *vt;
  char pad[0x10 - 4];
  void *vt2;
  char pad2[0x30 - 0x14];
  double f30;
} Obj_827137E8;
extern void fn_826C09B0(Obj_827137E8 *);
extern void fn_8268C210(void *);
extern void fn_826829A0(void *, int, int);
extern double lbl_82005710;
extern char lbl_8200F198[];
extern char lbl_8200F1EC[];

Obj_827137E8 *fn_827137E8(Obj_827137E8 *o, int a, int b)
{
  fn_826C09B0(o);
  o->f30 = lbl_82005710;
  o->vt = lbl_8200F1EC;
  o->vt2 = lbl_8200F198;
  fn_8268C210((char *)o + 0x38);
  fn_826829A0(&o->vt2, a, b);
  return o;
}
