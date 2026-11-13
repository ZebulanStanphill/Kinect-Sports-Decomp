extern int fn_82A1EFC0();


void fn_8252B170(int param_1,int param_2)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x8bc) = *(unsigned int *)(param_2 + 0xb4);
  uVar1 = *(unsigned int *)(param_2 + 0xb8);
  *(unsigned int *)(param_1 + 0x92c) = 0;
  *(unsigned int *)(param_1 + 0x91c) = uVar1;
  *(unsigned int *)(param_1 + 0x8c4) = 0;
  *(unsigned int *)(param_1 + 0x8c8) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x8cc,0,0x24);
}

