extern int fn_8263CBB0();
extern unsigned int lbl_8320A898;


void fn_8252C948(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  
  if (((*(int *)(param_1 + 0x8cc) != 0) || (*(int *)(param_1 + 0x8f0) != 0)) &&
     (param_2 != (unsigned int *)0x0)) {
    uVar1 = (unsigned __int64)*param_2;
    if (uVar1 != (uVar1 - 1) + (unsigned __int64)(uVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(lbl_8320A898,0xe,0,0x20000);
    }
  }
  return;
}

