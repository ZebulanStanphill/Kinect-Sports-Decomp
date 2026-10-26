typedef struct Obj Obj;
typedef struct {
  void (*f0)(Obj *);
  void (*f1)(Obj *);
  void (*f2)(Obj *);
  void (*f3)(Obj *);
  void (*f4)(Obj *);
  void (*f5)(Obj *, int, unsigned int, void *);
} Vtbl;
struct Obj {
  Vtbl *vt;
};

typedef struct {
  char pad[0x68];
  Obj *obj;
} S;

void fn_8269A970(S *s, int a, unsigned int b)
{
  s->obj->vt->f5(s->obj, a, b & 1, s);
}
