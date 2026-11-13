extern int fn_822315A0();
extern int fn_8265CA20();


void fn_8234FB60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    for (; iVar2 != param_1[5]; iVar2 = iVar2 + 0xc0) {
    }
    fn_8265CA20();
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = param_1[1];
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

