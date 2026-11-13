unsigned __int64 fn_82A71E30(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  
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
  iVar2 = (int)(lVar3 >> 0x1e);
  *(int *)(param_1 + 0xac) = iVar2;
  if ((int)param_4 <= (int)((__int64)iVar2 * (__int64)param_3 >> 0x14)) {
    *(int *)(param_1 + 0xac) =
         (int)((unsigned __int64)((__int64)((unsigned __int64)param_4 << 0x24) / (__int64)param_3) >> 0x10);
  }
  return (unsigned __int64)*(unsigned int *)(param_1 + 0xac);
}

