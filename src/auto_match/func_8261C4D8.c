extern unsigned int *auStack_40;
extern int fn_82A1E658();
extern int XMemSet();
extern int fn_82A29FE0();


void fn_8261C4D8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_40 [64];
  
  if (param_4 != -1) {
    if (*(int *)(param_1 + 0x31c) != 0) {
      fn_82A1E658();
    }
                    /* WARNING: Subroutine does not return */
    XMemSet(param_1 + 0x30c,0,0x14);
  }
  if (*(int *)(param_1 + 0x304) == -1) {
    uVar2 = thunk_FUN_82a2b798();
    *(unsigned int *)(param_1 + 800) = uVar2;
  }
  else {
    iVar1 = fn_82A29FE0(*(int *)(param_1 + 0x304),param_2,param_3,auStack_40);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = thunk_FUN_82a2b798();
    *(int *)(param_1 + 800) = iVar1;
    if (iVar1 == 0x3e5) {
      *(unsigned int *)(param_1 + 0x308) = 1;
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x308) = 0;
  return;
}

