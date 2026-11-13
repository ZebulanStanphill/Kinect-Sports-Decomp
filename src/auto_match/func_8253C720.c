extern unsigned int *auStack_38;
extern int fn_82599A38();
extern int fn_82A1EFC0();


void fn_8253C720(int param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned char auStack_38 [24];
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(iVar2 + *(int *)(param_1 + 0x44)) + 0x4c) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82A1EFC0(auStack_38,0,8);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x48));
  }
  iVar1 = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x54)) {
    iVar2 = 0;
    do {
      fn_82599A38(param_2 + 0x7fc,*(unsigned int *)(iVar2 + *(int *)(param_1 + 0x50)));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar1 < *(int *)(param_1 + 0x54));
  }
  *(unsigned int *)(param_1 + 0x54) = 0;
  return;
}

