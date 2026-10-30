typedef struct Rep_826A1CC8 { int a; int b; int rc; } Rep_826A1CC8;
typedef struct Obj_826A1CC8 Obj_826A1CC8;
typedef struct VT_826A1CC8 { void *s[10]; int (*f28)(Obj_826A1CC8 *, unsigned int *, Rep_826A1CC8 **, int, int); } VT_826A1CC8;
struct Obj_826A1CC8 { VT_826A1CC8 *vt; };
extern void fn_82681728(Rep_826A1CC8 **out, unsigned int v);
extern void fn_826944C8(Rep_826A1CC8 *r);

int fn_826A1CC8(Obj_826A1CC8 *self, unsigned int *p2, int unused, int a, int b)
{
  int r;
  Rep_826A1CC8 *rep;
  Rep_826A1CC8 *t;
  fn_82681728(&rep, *p2 + 0x254);
  r = self->vt->f28(self, p2, &rep, a, b);
  t = rep;
  if (--t->rc == 0) fn_826944C8(t);
  return r;
}
