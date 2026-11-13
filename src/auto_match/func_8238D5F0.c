extern int fn_82278B40();
extern int fn_822AF138();
extern int fn_82373268();
extern int fn_823815D0();
extern unsigned int lbl_831CAB58;


void fn_8238D5F0(int param_1)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0xc) = lbl_831CAB58;
  fn_82278B40((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x9a0);
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x7e4);
  fn_823815D0(uVar1,0,0xffffffffffffffff,0x15);
  fn_823815D0(uVar1,1,0xffffffffffffffff,0x15);
  fn_82373268(*(unsigned int *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
  fn_822AF138(**(unsigned int **)(*(int *)(param_1 + 8) + 0xc),6);
}

