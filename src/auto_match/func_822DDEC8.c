extern int fn_822315A0();
extern int fn_822CDCF8();
extern int fn_824D2AE8();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_822DDEC8(int param_1)

{
  struct { int first; int second; } stack_pair_40;

  
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0x18;
  *(unsigned int *)(param_1 + 0x94) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x24c) = 0;
  *(unsigned int *)(param_1 + 0xa0) = 0x18;
  fn_824D2AE8(&stack_pair_40.first,param_1 + 0xb4);
  if (stack_pair_40.first != 0) {
    *(unsigned int *)(stack_pair_40.first + 0xac) = 1;
  }
  if (stack_pair_40.second != 0) {
    fn_822315A0();
  }
  *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x2d0) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  *(unsigned int *)(param_1 + 0xbc) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0;
                    /* WARNING: Subroutine does not return */
  fn_822CDCF8(*(unsigned int *)(param_1 + 0x14),param_1 + 0xe0,param_1 + 0xf0);
}

