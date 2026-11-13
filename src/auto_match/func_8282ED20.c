void fn_8282ED20(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  if ((unsigned int)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) <= *(unsigned int *)(*param_1 + 0xc)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  if ((unsigned int)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) <= *(unsigned int *)(*param_2 + 0xc)) {
    *param_3 = *param_2;
    *param_2 = iVar1;
  }
  iVar1 = *param_2;
  if ((unsigned int)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 4)) <= *(unsigned int *)(*param_1 + 0xc)) {
    *param_2 = *param_1;
    *param_1 = iVar1;
  }
  return;
}

