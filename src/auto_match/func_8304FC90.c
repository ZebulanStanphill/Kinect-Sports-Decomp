typedef struct Obj Obj;
typedef struct ObjVtbl {
  void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
  ObjVtbl *vtbl;
};

extern void fn_82FA5190(int heap, void *p);
extern int lbl_831BC978;

void fn_8304FC90(Obj *param_1)
{
  int heap = lbl_831BC978;
  if (param_1 != 0) {
    param_1->vtbl->dtor(param_1, 0);
    fn_82FA5190(heap, param_1);
  }
}
