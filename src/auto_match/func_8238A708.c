extern int fn_82278B40();
extern int fn_822AF138();


void fn_8238A708(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  fn_82278B40(iVar1 + 0x9a0);
                    /* WARNING: Subroutine does not return */
  fn_822AF138(**(unsigned int **)(iVar1 + 0xc),6);
}

