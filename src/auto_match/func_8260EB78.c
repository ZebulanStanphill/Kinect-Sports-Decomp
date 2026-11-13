extern unsigned int *auStack_28;
extern int fn_82569980();
extern int fn_8262A108();
extern int fn_8265C9E0();
extern int fn_8257E0B8();


void fn_8260EB78(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned char auStack_28 [8];

  if (param_5 == 0) {
    iVar3 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
    }
    iVar4 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x11));
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
    }
    if ((iVar3 != 0) && (iVar4 != 0)) {
      uVar1 = **(unsigned int **)(param_1 + 0x60);
      uVar2 = fn_8265C9E0(0x1ba0);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_8262A108(uVar2,uVar1,iVar3,iVar4);
      }
    }
  }
  else if ((param_5 == 1) || (param_5 == 3)) {
    iVar3 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 * 0x30 + *(int *)(param_1 + 0xd8) + 0x10);
    }
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_8257E0B8(auStack_28,0,4);
    }
  }
  return;
}
