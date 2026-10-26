typedef struct Obj Obj;
typedef struct {
  void (*f0)(Obj *o);
  void (*AddRef)(Obj *o);
  void (*Release)(Obj *o);
} VT;
struct Obj { VT *vt; };

typedef struct { char pad[0xc]; char lock[0x3c]; Obj *obj; } S;

extern void fn_82E50CB8(void *l);
extern void fn_82E50F10(void *l);

int fn_82E641A8(S *p, Obj *o)
{
  fn_82E50CB8(p->lock);
  if (o != 0)
    o->vt->AddRef(o);
  if (p->obj != 0) {
    p->obj->vt->Release(p->obj);
    p->obj = 0;
  }
  p->obj = o;
  fn_82E50F10(p->lock);
  return 0;
}
