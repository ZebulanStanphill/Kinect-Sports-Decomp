extern int fn_82F63CA0();
extern int fn_82F68CC0();


unsigned __int64 fn_82C024C8(int param_1,unsigned __int64 param_2,unsigned int param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int aiStack_50 [20];
  
  *param_4 = 0;
  if (0x10000 < param_3) {
    return 0;
  }
  uVar5 = *(unsigned __int64 *)(param_1 + 0x210);
  if (param_2 < uVar5) {
LAB_82c02570:
    uVar5 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x218);
    if (param_3 + param_2 <= uVar1 + uVar5) goto LAB_82c02664;
    if ((param_2 < uVar5) || (uVar4 = (unsigned __int64)uVar1, uVar4 + uVar5 <= param_2))
    goto LAB_82c02570;
    uVar5 = ((uVar5 & 0xffffffff) - (param_2 & 0xffffffff)) + uVar4;
    if ((unsigned __int64)(uVar1 >> 1) < (uVar5 & 0xffffffff)) {
      fn_82F63CA0((unsigned __int64)*(unsigned int *)(param_1 + 0x20c),
                   (*(unsigned int *)(param_1 + 0x20c) - uVar5) + uVar4,uVar5);
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
                        (*(int **)(param_1 + 0x34),(uVar5 & 0xffffffff) + param_2), iVar2 < 0)) {
    iVar2 = *(int *)(param_1 + 0x70);
  }
  else {
    aiStack_50[0] = 0;
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x3c))
                      (*(int **)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x20c) + uVar5,0x10000 - uVar5,
                       aiStack_50);
    iVar2 = *(int *)(param_1 + 0x70);
    if (-1 < iVar3) {
      if (iVar2 != 0) {
        (**(int (***)())(**(int **)(param_1 + 0x34) + 0x14))();
      }
      *(unsigned __int64 *)(param_1 + 0x210) = param_2;
      *(int *)(param_1 + 0x218) = aiStack_50[0] + (int)uVar5;
LAB_82c02664:
      uVar4 = (*(unsigned int *)(param_1 + 0x218) - param_2) + *(__int64 *)(param_1 + 0x210);
      uVar5 = (unsigned __int64)param_3;
      if (uVar4 <= param_3) {
        uVar5 = uVar4;
      }
      *param_4 = (*(int *)(param_1 + 0x20c) - (int)*(__int64 *)(param_1 + 0x210)) + (int)param_2;
      return uVar5 & 0xffffffff;
    }
  }
  if (iVar2 != 0) {
    (**(int (***)())(**(int **)(param_1 + 0x34) + 0x14))();
  }
  return 0;
}

