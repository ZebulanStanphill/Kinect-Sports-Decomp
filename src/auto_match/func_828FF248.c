extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_828FCF88(void *p);

typedef struct IObj IObj;
typedef struct {
  void (*f0)(IObj *);
  void (*release)(IObj *);
} IObjVtbl;
struct IObj {
  IObjVtbl *vtbl;
};

typedef struct {
  int a;
  int b;
  IObj *obj;
  char pad[0x50];
  void *buf;
  char pad2[0x1c];
  void *child;
} Obj;

void fn_828FF248(Obj *o)
{
  void *c;
  if (o->obj != 0) {
    o->obj->vtbl->release(o->obj);
    o->obj = 0;
  }
  fn_8265C990(o->buf, 0x24810000);
  c = o->child;
  if (c != 0) {
    fn_828FCF88(c);
    fn_8265C990(c, 0x24810000);
  }
}
