extern unsigned int uStack00000038;


unsigned __int64 fn_82E6BD90(int param_1,int *param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
                       unsigned __int64 param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uStack00000038;
  
  for (iVar1 = *(int *)((*param_2 + 1) * 4 + param_4); iVar1 <= (param_1 << (param_5 & 0x3f)) >> 6;
      iVar1 = *(int *)((iVar1 + 2) * 4 + param_4)) {
    iVar1 = *param_2;
    *param_2 = iVar1 + 1;
  }
  uStack00000038 = (unsigned int)((unsigned __int64)param_6 >> 0x20);
  if (*param_2 < (int)uStack00000038) {
    iVar1 = *(int *)((*param_2 + 1) * 4 + param_4);
    if ((int)param_5 < 7) {
      uVar2 = (unsigned __int64)(unsigned int)(iVar1 << (6 - param_5 & 0x3f));
    }
    else {
      uVar2 = (unsigned __int64)((1 << (param_5 - 7 & 0x3f)) + iVar1 >> (param_5 - 6 & 0x3f));
    }
    if ((int)param_3 < (int)uVar2) {
      return param_3;
    }
    return uVar2;
  }
  return (unsigned __int64)uStack00000038;
}

