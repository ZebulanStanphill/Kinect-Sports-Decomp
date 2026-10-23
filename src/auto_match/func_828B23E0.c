typedef struct Obj Obj;
typedef struct {
  void *f0;
  void *(*Get)(Obj *);
} ObjVtbl;
struct Obj { ObjVtbl *vtbl; };

extern Obj *fn_828B2360(void *a, void *b);
extern void fn_828B4B00(void *p, void *c, void *d);

void fn_828B23E0(void *a, void *b, void *c, void *d)
{
  Obj *o = fn_828B2360(a, b);
  void *p;
  if (o != 0 && (p = o->vtbl->Get(o)) != 0) {
    fn_828B4B00(p, c, d);
  }
}
