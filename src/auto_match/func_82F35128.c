typedef struct { int pad[26]; unsigned f68; } Obj_82F35128;
extern int fn_82F34E58(Obj_82F35128 *o, unsigned n);

int fn_82F35128(Obj_82F35128 *o, unsigned n)
{
  int r;
  r = fn_82F34E58(o, n);
  if (r >= 0) {
    o->f68 = (o->f68 > n + 1) ? o->f68 : n + 1;
  }
  return r >= 0;
}
