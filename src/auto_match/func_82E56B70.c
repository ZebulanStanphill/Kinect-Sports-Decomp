typedef struct { int pad[26]; unsigned f68; } Obj_82E56B70;
extern int fn_82E568B8(Obj_82E56B70 *o, unsigned n);

int fn_82E56B70(Obj_82E56B70 *o, unsigned n)
{
  int r;
  r = fn_82E568B8(o, n);
  if (r >= 0) {
    o->f68 = (o->f68 > n + 1) ? o->f68 : n + 1;
  }
  return r >= 0;
}
