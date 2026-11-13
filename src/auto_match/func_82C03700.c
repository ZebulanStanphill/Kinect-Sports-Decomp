extern int fn_82F63CA0();
extern int fn_82F68CC0();


unsigned __int64 fn_82C03700(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int aiStack_50;
  
  *param_4 = 0;
  if (0x10000 < (param_3 & 0xffffffff)) {
    return 0;
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x298);
  if ((param_2 & 0xffffffff) < uVar4) goto LAB_82c03798;
  uVar1 = *(unsigned int *)(param_1 + 0x29c);
  if ((param_2 + param_3 & 0xffffffff) <= (uVar1 + uVar4 & 0xffffffff)) goto LAB_82c0388c;
  if ((param_2 & 0xffffffff) < uVar4) {
LAB_82c03798:
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 + uVar4;
    if ((uVar4 & 0xffffffff) <= (param_2 & 0xffffffff)) goto LAB_82c03798;
    uVar4 = uVar4 - param_2;
    if ((unsigned __int64)(uVar1 >> 1) < (uVar4 & 0xffffffff)) {
      fn_82F63CA0((unsigned __int64)*(unsigned int *)(param_1 + 0x2c),
                   (*(unsigned int *)(param_1 + 0x2c) - uVar4) + (unsigned __int64)uVar1,uVar4);
    }
    else {
      fn_82F68CC0();
    }
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    (**(int (***)())(**(int **)(param_1 + 0x34) + 0xc))();
  }
  iVar2 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x38))(*(int **)(param_1 + 0x34),1);
  if ((iVar2 < 0) ||
     (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x34))
                        (*(int **)(param_1 + 0x34),uVar4 + param_2 & 0xffffffff), iVar2 < 0)) {
    iVar2 = *(int *)(param_1 + 0x70);
  }
  else {
    aiStack_50 = 0;
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x3c))
                      (*(int **)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x2c) + uVar4,0x10000 - uVar4,
                       &aiStack_50);
    iVar2 = *(int *)(param_1 + 0x70);
    if (-1 < iVar3) {
      if (iVar2 != 0) {
        (**(int (***)())(**(int **)(param_1 + 0x34) + 0x14))();
      }
      *(int *)(param_1 + 0x298) = (int)param_2;
      *(int *)(param_1 + 0x29c) = aiStack_50 + (int)uVar4;
LAB_82c0388c:
      uVar4 = (*(unsigned int *)(param_1 + 0x29c) - param_2) + (unsigned __int64)*(unsigned int *)(param_1 + 0x298);
      if ((param_3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        uVar4 = param_3;
      }
      *param_4 = (*(int *)(param_1 + 0x2c) - *(unsigned int *)(param_1 + 0x298)) + (int)param_2;
      return uVar4;
    }
  }
  if (iVar2 != 0) {
    (**(int (***)())(**(int **)(param_1 + 0x34) + 0x14))();
  }
  return 0;
}

