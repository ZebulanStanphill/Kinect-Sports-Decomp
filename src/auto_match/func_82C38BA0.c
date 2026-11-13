unsigned __int64 fn_82C38BA0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    return param_2;
  }
  iVar2 = *(int *)(param_1 + 0xac);
  iVar1 = (int)param_2;
  if (iVar2 < iVar1) {
    if (*(int *)(param_1 + 0xa8) <= param_5) {
      return param_2;
    }
    param_5 = *(int *)(param_1 + 0xb4) * param_5;
    lVar3 = (__int64)(0x40000000 - param_5) * (__int64)iVar2 + (__int64)param_5 * (__int64)iVar1
    ;
  }
  else {
    if (*(int *)(param_1 + 0xa4) <= param_5) {
      return param_2;
    }
    param_5 = *(int *)(param_1 + 0xb0) * param_5;
    lVar3 = (__int64)(0x40000000 - param_5) * (__int64)iVar2 + (__int64)param_5 * (__int64)iVar1
    ;
  }
  uVar4 = (unsigned __int64)param_3;
  iVar2 = (int)(lVar3 >> 0x1e);
  *(int *)(param_1 + 0xac) = iVar2;
  if ((int)param_4 <= (int)((__int64)((__int64)iVar2 * uVar4) >> 0x14)) {
    trapDoubleWordImmediate(6,uVar4,0);
    *(int *)(param_1 + 0xac) =
         (int)((unsigned __int64)((__int64)(param_4 << 0x24) / (__int64)uVar4) >> 0x10);
    trapDoubleWordImmediate
              (5,uVar4 & ~((param_4 << 0x25 | (param_4 & 0xfffffff) >> 0x1b) - 1),0xffff);
  }
  return (unsigned __int64)*(unsigned int *)(param_1 + 0xac);
}

