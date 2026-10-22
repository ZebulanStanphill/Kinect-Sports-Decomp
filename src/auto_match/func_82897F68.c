typedef struct Obj Obj;
typedef struct {
  void *f[5];
  void (*destroy)(Obj *, int);
} Vtbl;
struct Obj {
  Vtbl *vtbl;
  int refs;
};

void fn_82897F68(Obj **param_1, Obj *param_2)
{
  Obj *old = *param_1;

  if (old != 0) {
    if (--old->refs == 0)
      old->vtbl->destroy(old, 1);
  }
  if (param_2 != 0)
    param_2->refs++;
  *param_1 = param_2;
}
