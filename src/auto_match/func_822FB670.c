typedef struct Obj_822FB670 {
  void *vt; int pad[0x13]; int f50; int f54; int f58; int f5c[7]; int f78;
} Obj_822FB670;
extern void fn_822C70F0(Obj_822FB670 *);
extern void fn_8223B688(int *, int);
extern char lbl_821AE834[];

Obj_822FB670 *fn_822FB670(Obj_822FB670 *o, int a, int b, int c, int d, int e)
{
  fn_822C70F0(o);
  o->f54 = c;
  o->f58 = c + 0x24;
  o->vt = lbl_821AE834;
  fn_8223B688(o->f5c, d);
  o->f78 = e;
  o->f50 = e == 0;
  return o;
}
