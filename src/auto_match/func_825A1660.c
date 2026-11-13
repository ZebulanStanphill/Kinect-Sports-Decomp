extern int fn_82A1EFC0();


void fn_825A1660(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a0000);
  *(int *)(param_1 + 0x1a0000) = iVar1 + 1;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(iVar1 * 0x90 + param_1,0,0x90);
}

