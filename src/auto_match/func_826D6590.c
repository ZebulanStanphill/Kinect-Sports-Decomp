typedef struct Obj Obj;
typedef struct {
  void (*f0)(Obj *);
  void (*f1)(Obj *);
  void (*f2)(Obj *, int);
} Vtbl;
struct Obj {
  Vtbl *vt;
};
typedef struct {
  int a;
  Obj *obj;
} S;

void fn_826D6590(S *s, int a2, int a3, int a4, unsigned int a5)
{
  if (a5 != 0) {
    return;
  }
  s->obj->vt->f2(s->obj, a3);
}
