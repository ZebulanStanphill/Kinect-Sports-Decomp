extern int fn_82816EF0();


void fn_82816FE8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  int iVar1;
  int aiStack_30;
  
  fn_82816EF0(param_1,param_2,&aiStack_30);
  if (aiStack_30 == 0) {
    iVar1 = 0;
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    *param_3 = *(unsigned int *)(aiStack_30 + 4);
    param_3[1] = *(unsigned int *)(aiStack_30 + 8);
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar1 = 0;
    }
    else {
      if ((*(unsigned int *)(param_1 + 0x74) != 0) && (*(unsigned int *)(param_1 + 0x74) <= param_2)) {
        param_2 = param_2 + 1;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + param_2 * 4 + -4) + *(int *)(param_1 + 0x40);
    }
  }
  param_3[2] = iVar1;
  return;
}

