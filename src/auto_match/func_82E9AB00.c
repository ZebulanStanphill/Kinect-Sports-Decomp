extern unsigned int lbl_831898B8;


__int64 fn_82E9AB00(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  iVar1 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if ((iVar2 < 0x9f) && (iVar1 < 0x9f)) {
    return (unsigned __int64)*(unsigned int *)(*(int *)(&lbl_831898B8 + iVar1 * 4) * 4 + param_4) +
           (unsigned __int64)*(unsigned int *)(*(int *)(&lbl_831898B8 + iVar2 * 4) * 4 + param_4);
  }
  return ((unsigned __int64)*(unsigned int *)(param_4 + 0x14) & 0x7fffffff) << 1;
}

