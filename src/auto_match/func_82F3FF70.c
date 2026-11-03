typedef struct O_82F3FF70 {
  void *vt0; void *vt1; int f8; int fc; int f10; int f14; int f18; int f1c; char pad[0x28];
  int f48, f4c, f50, f54, f58; short f5c, f5e, f60, f62, f64;
} O_82F3FF70;
extern void fn_82E58050(O_82F3FF70 *);
extern char lbl_82162F08[];
extern char lbl_8215FDD0[];
extern int lbl_82154998[];
O_82F3FF70 *fn_82F3FF70(O_82F3FF70 *o)
{
  int v;
  fn_82E58050(o);
  o->vt0 = lbl_82162F08;
  o->vt1 = lbl_8215FDD0;
  o->f8 = 1;
  o->f10 = lbl_82154998[0];
  o->f14 = lbl_82154998[1];
  o->f18 = lbl_82154998[2];
  v = lbl_82154998[3];
  o->f48 = 0;
  o->f4c = 0;
  o->f50 = 0;
  o->f54 = 0;
  o->f58 = 0;
  o->f5c = 0;
  o->f5e = 0;
  o->f60 = 0;
  o->f62 = 0;
  o->f64 = 0;
  o->f1c = v;
  return o;
}
