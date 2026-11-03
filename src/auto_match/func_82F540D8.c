typedef struct Inner_82F540D8 { char pad[0x197c]; int f; } Inner_82F540D8;
typedef struct Z3 { int b, c, d; } Z3;
typedef struct Obj_82F540D8 { Inner_82F540D8 *a; Z3 z; } Obj_82F540D8;
extern void *fn_8265C9E0(unsigned);
extern Inner_82F540D8 *fn_82F5C930(void *);

Obj_82F540D8 *fn_82F540D8(Obj_82F540D8 *o)
{
  void *m = fn_8265C9E0(0x1980);
  Inner_82F540D8 *p;
  if (m != 0) { p = fn_82F5C930(m); } else { p = 0; }
  o->a = p;
  { Z3 *z = &o->z; z->b = 0; z->c = 0; z->d = 0; }
  o->a->f = 1;
  return o;
}
