unsigned __int64 fn_8277D1C8(int *param_1,int (**param_2)())

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  *(unsigned char *)(param_1 + 8) = 0;
  if ((unsigned __int64)(unsigned int)param_1[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1[1];
    lVar5 = (unsigned __int64)(unsigned int)param_1[2] - 1;
    uVar4 = (unsigned __int64)uVar1 + 1;
    param_1[2] = (int)lVar5;
    param_1[1] = (int)uVar4;
    param_1[5] = param_1[6];
    param_1[4] = *(int *)((uVar1 >> 2 & 0x3ffffffc) + *(int *)(*param_1 + 0xc)) + (uVar1 & 0xf) * 8;
    if (lVar5 == 0) {
      iVar3 = param_1[3];
    }
    else {
      iVar3 = *(int *)(*(int *)(((unsigned int)((uVar4 & 0xffffffff) >> 2) & 0x3ffffffc) +
                               *(int *)(*param_1 + 0xc)) +
                      ((unsigned int)((uVar4 & 0xffffffff) << 3) & 0x78));
    }
    param_1[6] = iVar3;
    iVar3 = (*param_2)(param_1[4]);
    param_1[7] = iVar3;
    uVar2 = 1;
  }
  return uVar2;
}

