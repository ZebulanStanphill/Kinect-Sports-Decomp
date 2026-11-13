extern int fn_82BC2EF0();


__int64 fn_82BAB540(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar3;
  __int64 lVar2;
  
  iVar3 = fn_82BC2EF0(*(unsigned int *)(param_1 + 0x50),*(unsigned int *)(param_1 + 0x3b8));
  if (iVar3 == 4) {
    uVar1 = *(unsigned int *)(param_2 + 0x824);
LAB_82bab5a8:
    lVar2 = (unsigned __int64)uVar1 - 1;
  }
  else {
    if (4 < iVar3) {
      if (iVar3 < 7) {
        uVar1 = *(unsigned int *)(param_2 + 0x828);
        goto LAB_82bab5a8;
      }
      if (iVar3 < 9) {
        return (unsigned __int64)(*(int *)(param_2 + 0x70) != 0) + (unsigned __int64)*(unsigned int *)(param_2 + 0x830);
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}

