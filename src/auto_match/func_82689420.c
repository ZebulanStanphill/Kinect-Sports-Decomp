typedef int (*code)();
extern void fn_82670230(void *p);
extern void fn_8267C488(void *p);
extern char lbl_82005BB4[];
extern char lbl_82005BEC[];
extern char lbl_82005BF8[];

typedef struct {
  void *vtbl;
  int f4;
  void *vtbl2;
  void *child;
} Obj;

void fn_82689420(Obj *param_1)
{
  int p;

  p = (int)param_1->child;
  param_1->vtbl = lbl_82005BF8;
  param_1->vtbl2 = lbl_82005BEC;
  if (p != 0) {
    (*(code *)(*(int *)p + 0x30))(p, &param_1->vtbl2);
  }
  if (param_1->child != 0) {
    fn_82670230(param_1->child);
  }
  param_1->vtbl2 = lbl_82005BB4;
  fn_8267C488(param_1);
}
