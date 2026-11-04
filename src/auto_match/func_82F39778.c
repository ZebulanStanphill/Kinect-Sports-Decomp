extern int fn_82E58050(void *); extern char lbl_82162BEC[]; extern char lbl_8215FDD0[]; extern int lbl_82154B48[];
typedef struct O_82F39778 { void *vt; void *vt2; int one; int pad; int a, b, c, d; int pad2[0xa]; int z0, z1, z2; } O_82F39778;
O_82F39778 *fn_82F39778(O_82F39778 *o) {
  int t;
  fn_82E58050(o);
  o->vt = lbl_82162BEC; o->vt2 = lbl_8215FDD0; o->one = 1;
  o->a = lbl_82154B48[0]; o->b = lbl_82154B48[1]; o->c = lbl_82154B48[2];
  t = lbl_82154B48[3];
  o->z0 = 0; o->z1 = 0; o->z2 = 0;
  o->d = t;
  return o;
}
