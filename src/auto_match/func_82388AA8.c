extern int fn_82278B40();
extern int fn_822AF138();
extern int fn_82371F70();


void fn_82388AA8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  fn_82278B40(iVar1 + 0x9a0);
  fn_82371F70(iVar1);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(**(unsigned int **)(iVar1 + 0xc),7);
}

