extern int *fn_82B7BD28(int, int);
extern void fn_82BC0928();
extern void fn_82BC0A30(void *, int);
extern void fn_82BC2958(int, int, void *);
extern int fn_82BC3948(void *, void *, int);
extern __declspec(noreturn) void fn_82F6C420(int, int);
extern unsigned int lbl_820E3444;

unsigned int * fn_82BC1280(unsigned int *param_1,int param_2,int param_3,int param_4)
{
  int v;
  int *p;
  int *obj;
  int res;

  fn_82BC0928();
  param_1[4] = param_2;
  *param_1 = (unsigned int)&lbl_820E3444;
  *(int *)(param_4 + 0x588) = *(int *)(param_4 + 0x588) + 1;
  switch (param_3) {
  case 3:
    if (param_2 >= *(int *)(*(int *)(param_4 + 0x550) + 0x24)) {
      *(int *)(param_4 + 0x554) = 0x1e;
      fn_82F6C420(param_4 + 0x10,1);
    }
    break;
  case 2:
    if (param_2 >= *(int *)(*(int *)(param_4 + 0x550) + 0x20)) {
      *(int *)(param_4 + 0x554) = 0x1c;
      fn_82F6C420(param_4 + 0x10,1);
    }
    break;
  case 1:
    if (param_2 >= *(int *)(*(int *)(param_4 + 0x550) + 0x28)) {
      *(int *)(param_4 + 0x554) = 0x1d;
      fn_82F6C420(param_4 + 0x10,1);
    }
    break;
  }
  v = *(int *)(param_4 + 0x5ac);
  p = fn_82B7BD28(v,0x3c4);
  *p = v;
  if (p + 1 != 0) {
    res = fn_82BC3948(p + 1,param_1,param_4);
  }
  else {
    res = 0;
  }
  obj = *(int **)(*(int *)(param_4 + 0xab0) + 0xa4);
  (*(int (*)())(*(int *)(*obj + 0x28)))(obj,res);
  fn_82BC2958(res,0,param_1);
  fn_82BC0A30(param_1,res);
  return param_1;
}
