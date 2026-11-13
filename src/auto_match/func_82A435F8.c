extern int fn_82F68CC0();


__int64 fn_82A435F8(int param_1,int param_2,unsigned char *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  __int64 lVar5;
  
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  param_2 = param_2 * 4;
  pbVar3 = *(unsigned char **)(param_1 + 0x50);
  lVar5 = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    pbVar4 = param_3;
    do {
      lVar2 = (unsigned __int64)*pbVar4 - (unsigned __int64)*pbVar3;
      if (lVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != param_3 + param_2);
  }
  if ((int)lVar2 != 0) {
    if (*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0) {
      uVar1 = *(unsigned int *)(param_1 + 0x40);
    }
    else {
      uVar1 = **(unsigned int **)(param_1 + 0x38);
    }
    lVar5 = (**(int (***)())(*(int *)(param_1 + 4) + 0x60))((int *)(param_1 + 4),uVar1,param_3,param_4);
    if (-1 < lVar5) {
      fn_82F68CC0(*(unsigned int *)(param_1 + 0x50),param_3,param_2);
    }
  }
  (**(int (***)())(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar5;
}

