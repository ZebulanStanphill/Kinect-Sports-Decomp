extern void fn_82A28E60(void *, int, void *);
extern char lbl_82079AD0[];
extern char *lbl_832179FC;

typedef struct {
  void *vtbl;
  int f4;
  void *res;
} Obj;

void fn_829EC0C0(Obj *param_1)
{
  param_1->vtbl = lbl_82079AD0;
  if (param_1->res != 0) {
    fn_82A28E60(*(void **)(lbl_832179FC + 0x8f4cc), 0, param_1->res);
  }
}
