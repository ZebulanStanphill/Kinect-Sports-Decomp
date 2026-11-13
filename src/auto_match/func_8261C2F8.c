extern unsigned int *auStack_40;
extern int fn_82A1E658();
extern int fn_82A1EFC0();
extern int fn_82A2A108();


unsigned int fn_8261C2F8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int auStack_40 [16];
  
  if (param_4 == -1) {
    iVar1 = fn_82A2A108(*(unsigned int *)(param_1 + 0x304),param_2,param_3,auStack_40,0);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_82a2b798();
      *(int *)(param_1 + 800) = iVar1;
      if (iVar1 == 0x3e5) {
        *(unsigned int *)(param_1 + 0x308) = 1;
      }
    }
    return auStack_40[0];
  }
  if (*(int *)(param_1 + 0x31c) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x30c,0,0x14);
}

