typedef struct Obj Obj;
typedef void (*VFn)(Obj *, int);
struct Obj { VFn *vt; };
typedef struct { Obj *obj; void *rc; } Ptr;
extern Ptr *fn_82365BD8(Ptr *);
extern void fn_822315A0(void *);

int fn_82487628(int param_1)
{
  Ptr *p;
  Ptr tmp;
  Obj *o;
  p = fn_82365BD8(&tmp);
  o = p->obj;
  o->vt[7](o, *(int *)(param_1 + 4));
  if (p->rc != 0) {
    fn_822315A0(p->rc);
  }
  return 1;
}
