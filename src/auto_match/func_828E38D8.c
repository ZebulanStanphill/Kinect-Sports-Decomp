typedef struct { int p; unsigned rc; } P_828E38D8;
extern void fn_8289DF30(unsigned);
extern void fn_828E35B8(unsigned *);
extern void fn_82BA02A8(P_828E38D8 *, int, int);
static void swapi(int *a, int *b) { int t = *a; *a = *b; *b = t; }
static void swapu(unsigned *a, unsigned *b) { unsigned t = *a; *a = *b; *b = t; }
void fn_828E38D8(P_828E38D8 *o, int a)
{
  P_828E38D8 t;
  t.p = a;
  fn_828E35B8(&t.rc);
  fn_82BA02A8(&t, a, a);
  swapi(&o->p, &t.p);
  swapu(&o->rc, &t.rc);
  if (t.rc != 0) fn_8289DF30(t.rc);
}
