typedef struct Obj_8223F5A0 { int f00; unsigned int refs; } Obj_8223F5A0;
extern void fn_82F62680(void *lock, int a);
extern void fn_82F626D0(void *lock);

Obj_8223F5A0 *fn_8223F5A0(Obj_8223F5A0 *o)
{
  unsigned char lock[16];
  Obj_8223F5A0 *r;

  fn_82F62680(lock, 0);
  if (o->refs != 0 && o->refs < 0xffffffff) {
    o->refs = o->refs - 1;
  }
  r = o->refs == 0 ? o : 0;
  fn_82F626D0(lock);
  return r;
}
