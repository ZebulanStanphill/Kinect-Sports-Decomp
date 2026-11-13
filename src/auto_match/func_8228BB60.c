extern int fn_82267750();
extern int fn_82268470();


void fn_8228BB60(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x614);
  iVar2 = *(int *)(iVar1 + 0x5d8);
  uVar3 = *(int *)(iVar1 + 0x630) + iVar2;
  *(unsigned int *)(iVar1 + 0x5d8) = uVar3;
  if ((unsigned int)((*(int *)(iVar1 + 0x6ec) - *(int *)(iVar1 + 0x6e8)) / 0x38) <= uVar3) {
    *(unsigned int *)(iVar1 + 0x5d8) = 0;
  }
  if (*(int *)(iVar1 + 0x5d8) != iVar2) {
    if (*(int *)(iVar1 + 0x630) != 0) {
      do {
        fn_82267750(*(unsigned int *)(iVar1 + 0x5c0),uVar4);
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 0x630));
    }
    fn_82268470(iVar1);
  }
  return;
}

