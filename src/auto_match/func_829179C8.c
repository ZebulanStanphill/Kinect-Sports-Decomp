unsigned __int64 fn_829179C8(int param_1,__int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  *(int *)(param_1 + 0x20) = (int)param_2;
  uVar4 = 0;
  if (*(short *)(*(int *)(param_1 + 0x18) + 10) != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    iVar5 = 0;
    do {
      fn_829179C8(*(unsigned int *)(iVar5 + iVar1),param_2);
      iVar1 = *(int *)(param_1 + 0x38);
      iVar3 = 1;
      if (*(short *)(*(int *)(iVar5 + iVar1) + 8) != 0) {
        iVar3 = 4;
      }
      piVar2 = (int *)(iVar5 + iVar1);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
      param_2 = ((__int64)
                 (int)((unsigned int)*(unsigned short *)(*(int *)(*piVar2 + 0x18) + 8) * *(int *)(*piVar2 + 0x2c)) *
                 (__int64)iVar3 & 0x3fffffffU) * 4 + param_2;
    } while (uVar4 < *(unsigned short *)(*(int *)(param_1 + 0x18) + 10));
  }
  return 0;
}

