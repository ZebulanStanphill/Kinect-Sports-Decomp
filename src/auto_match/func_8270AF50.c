void fn_8270AF50(unsigned int *param_1,int *param_2,int *param_3)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (param_2 == (int *)*param_1) {
      *param_1 = param_3;
    }
    else {
      *(int **)((1 + (unsigned int)(*(int **)(iVar1 + 4) != param_2)) * 4 + iVar1) = param_3;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
      puVar2 = (unsigned int *)param_2[1];
      if (puVar2 != (unsigned int *)0x0) {
        param_3[1] = (int)puVar2;
        *puVar2 = param_3;
      }
      puVar2 = (unsigned int *)param_2[2];
      if (puVar2 != (unsigned int *)0x0) {
        param_3[2] = (int)puVar2;
        *puVar2 = param_3;
      }
    }
  }
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}

