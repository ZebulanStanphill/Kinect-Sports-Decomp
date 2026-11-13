typedef struct Inner_828B2148 Inner_828B2148;
typedef struct InnerVt_828B2148 {
  void *pad[13];
  int (*f34)(Inner_828B2148 *, int);
  void *pad2[9];
  int (*f5c)(Inner_828B2148 *, int);
} InnerVt_828B2148;
struct Inner_828B2148 { InnerVt_828B2148 *vt; };
typedef struct Obj_828B2148 { int f0; Inner_828B2148 *inner; } Obj_828B2148;

unsigned char fn_828B2148(Obj_828B2148 *o, int arg)
{
  Inner_828B2148 *p = o->inner;
  unsigned char a, b;
  if (p == 0) return 0;
  a = p->vt->f34(p, arg) != 0;
  b = o->inner->vt->f5c(o->inner, arg) != 0;
  return a || b;
}
