typedef struct P { void *vt; int ref; void *obj; } P;
extern void fn_8267C4C8(void *o);
extern char lbl_82005F80[];
P *fn_82693540(P *p, void *o)
{
  p->ref = 1;
  p->vt = lbl_82005F80;
  if (o) fn_8267C4C8(o);
  p->obj = o;
  return p;
}
