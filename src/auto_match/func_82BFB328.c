extern void fn_82BE8D28(void *p);
extern void fn_82BFB0D8(void *p, int a);
extern char lbl_820EBEBC[];
typedef struct { void *vt; int pad[3]; void *obj; } T;
T *fn_82BFB328(T *p, int a, void *b)
{
  fn_82BFB0D8(p, a);
  p->obj = b;
  p->vt = lbl_820EBEBC;
  if (b != 0) {
    fn_82BE8D28(b);
  }
  return p;
}
