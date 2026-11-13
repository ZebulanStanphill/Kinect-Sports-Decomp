extern int fn_82F6B0C0();


unsigned int fn_82573530(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar4 = 0;
    do {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + iVar4);
      if ((uVar1 != 0) &&
         (iVar2 = fn_82F6B0C0((unsigned __int64)uVar1 + 0x110,param_2,0x80), iVar2 == 0)) {
        return *(unsigned int *)(uVar3 * 4 + *(int *)(param_1 + 8));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 0x10));
  }
  return 0;
}

