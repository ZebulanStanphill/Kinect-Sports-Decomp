__int64 fn_82571138(__int64 param_1,int param_2)

{
  int iVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  if (param_2 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 0x7c)) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + *(int *)(param_2 + 0x78)) == 0x201f) {
          uVar2 = *(unsigned __int64 *)(iVar1 * 0x10 + *(int *)(param_2 + 0x78) + 8);
          goto code_r0x82571178;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar1 < *(int *)(param_2 + 0x7c));
    }
    uVar2 = 0;
code_r0x82571178:
    if ((uVar2 & 0xffffffff) != 0) {
      return (uVar2 & 0xffffffff) + 0x2d0;
    }
  }
  return param_1 + 0x380;
}

