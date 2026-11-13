extern unsigned int lbl_8320A778;


void fn_82823058(int *param_1,int *param_2)

{
  unsigned int iVar1;
  int iVar2;
  
  iVar2 = lbl_8320A778;
  iVar1 = *param_1;
  *param_2 = iVar1;
  if (iVar1 != iVar2) {
    return;
  }
  *param_2 = 0;
  return;
}

