extern unsigned int lbl_8320A778;


void fn_828233A8(unsigned int *param_1,unsigned int *param_2,int (**param_3)(),unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  
  *param_2 = 0;
  puVar2 = (unsigned int *)*param_1;
  while (puVar1 = puVar2, puVar1 != lbl_8320A778) {
    param_1 = puVar1;
    puVar2 = (unsigned int *)*puVar1;
  }
  if (param_1 != lbl_8320A778) {
    do {
      iVar3 = (*param_3)(param_1,param_4);
      if (iVar3 < 0) {
        param_1 = (unsigned int *)param_1[1];
      }
      else {
        if (iVar3 == 0) {
          *param_2 = param_1;
          return;
        }
        param_1 = (unsigned int *)param_1[2];
      }
    } while (param_1 != lbl_8320A778);
  }
  return;
}

