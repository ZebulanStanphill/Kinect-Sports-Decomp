typedef struct { int a; int b; double d; } Val;
typedef struct { int p0; void *target; } O;
extern void fn_82273CD8(Val *, int);
extern void fn_82273C88(Val *);
extern void fn_82672C20(void *, const char *, Val *, int);
void fn_82469F80(O *o, double d)
{
  Val v;
  v.a = 0;
  v.b = 0;
  fn_82273CD8(&v, 3);
  v.d = d;
  fn_82672C20(o->target, "_root.brightness", &v, 1);
  fn_82273C88(&v);
}
