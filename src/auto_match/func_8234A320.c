extern int fn_824A73D8();
extern int fn_824CCFC8();
extern int fn_824CD030();


unsigned __int64 fn_8234A320(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x11) == '\0') {
    iVar1 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
    if ((iVar1 == 0) || (iVar3 = fn_824CCFC8(iVar1), iVar3 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar3 = fn_824CD030(iVar1);
      if (iVar3 != 0) {
        iVar1 = *(int *)(*(int *)(iVar1 + 0xfc) + 0x20);
        iVar3 = fn_824A73D8(iVar1);
        if ((iVar3 != 0) &&
           (iVar1 = *(int *)(iVar1 + 0x3c), *(float *)(iVar1 + 0x20) < *(float *)(iVar1 + 0x28))) {
          return 1;
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

