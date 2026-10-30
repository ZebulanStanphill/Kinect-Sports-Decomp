typedef struct { int pad[26]; unsigned f68; } Obj_82E2E0D0;
extern int fn_82E2DC30(Obj_82E2E0D0 *o, unsigned n);

int fn_82E2E0D0(Obj_82E2E0D0 *o, unsigned n)
{
  int r;
  r = fn_82E2DC30(o, n);
  if (r >= 0) {
    o->f68 = (o->f68 > n + 1) ? o->f68 : n + 1;
  }
  return r >= 0;
}
