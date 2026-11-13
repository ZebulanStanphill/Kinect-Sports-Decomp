extern unsigned int lbl_8320A778;


void fn_82823110(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lbl_8320A778;
  do {
    iVar3 = param_1;
    iVar1 = *(int *)(iVar3 + 8);
    *param_2 = iVar1;
    if (iVar1 == iVar2) {
      *param_2 = 0;
    }
    param_1 = *param_2;
  } while (*param_2 != 0);
  *param_2 = iVar3;
  return;
}

