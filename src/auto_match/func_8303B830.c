extern void fn_8302B7D0(void *p);
extern char lbl_8217D418[];
typedef struct { void *vt; int pad[6]; int a; float f; } Obj;

Obj *fn_8303B830(Obj *o)
{
  fn_8302B7D0(o);
  o->a = 0;
  o->vt = lbl_8217D418;
  o->f = 0.0f;
  return o;
}
