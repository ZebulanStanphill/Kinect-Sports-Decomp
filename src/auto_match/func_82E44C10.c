typedef struct { int pad[26]; unsigned f68; } Obj_82E44C10;
extern int fn_82E44168(Obj_82E44C10 *o, unsigned n);

int fn_82E44C10(Obj_82E44C10 *o, unsigned n)
{
  int r;
  r = fn_82E44168(o, n);
  if (r >= 0) {
    o->f68 = (o->f68 > n + 1) ? o->f68 : n + 1;
  }
  return r >= 0;
}
