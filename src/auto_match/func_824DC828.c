void fn_824DC828(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = 4;
  if (param_2 == 0) {
    iVar1 = (**(int (***)())(*(int *)(param_1 + 0x3b8) + 8))(param_1 + 0x3b8);
    if (iVar1 == 0) {
LAB_824dc8f8:
      iVar1 = 1;
      goto LAB_824dc8fc;
    }
    iVar1 = *(int *)(param_1 + 0x398);
    iVar2 = param_1 + 0x398;
  }
  else if (param_2 < 3) {
    iVar1 = (**(int (***)())(*(int *)(param_1 + 0x164) + 8))(param_1 + 0x164);
    if (iVar1 == 0) goto LAB_824dc8f8;
    iVar1 = *(int *)(param_1 + 0x144);
    iVar2 = param_1 + 0x144;
  }
  else {
    if (param_2 != 3) goto LAB_824dc8fc;
    iVar1 = (**(int (***)())(*(int *)(param_1 + 0x280) + 8))(param_1 + 0x280);
    if (iVar1 == 0) goto LAB_824dc8f8;
    iVar1 = *(int *)(param_1 + 0x2c0);
    iVar2 = param_1 + 0x2c0;
  }
  uVar3 = (**(int (***)())(iVar1 + 8))(iVar2);
  iVar1 = ((unsigned int)LZCOUNT(uVar3) >> 5 ^ 1) + 2;
LAB_824dc8fc:
  *(int *)(param_1 + 0x440) = iVar1;
  return;
}

