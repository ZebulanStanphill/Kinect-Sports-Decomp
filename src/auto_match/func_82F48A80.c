extern int fn_82F487F8();


int fn_82F48A80(int param_1,int *param_2)
{
  int lVar1;
  int * apiStack_30;
  apiStack_30 = (int *)0x0;
  if (param_2 == (int *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    *(int **)(param_1 + 0xc) = param_2;
    (*(int (**)())(*param_2 + 4))(param_2);
    lVar1 = (*(int (**)())(*(int *)(*(int *)(param_1 + 0x10)) + 0x10))(*(int **)(param_1 + 0x10),&apiStack_30);
    if (lVar1 >= 0) {
      if (param_2 != apiStack_30) {
        lVar1 = -0x7ff8ffa9;
      }
      else {
        lVar1 = fn_82F487F8(param_1 + -4);
      }
    }
    if (apiStack_30 != (int *)0x0) {
      (*(int (**)())(*apiStack_30 + 8))(apiStack_30);
    }
  }
  return lVar1;
}
