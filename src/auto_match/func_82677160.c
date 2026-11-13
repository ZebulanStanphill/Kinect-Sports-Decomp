extern int fn_8263CBB0();
extern int fn_8267A5F0();


void fn_82677160(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    fn_8267A5F0();
  }
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 0xd8),0,
                    *(unsigned int *)(param_1 + 0x28),0x80000000);
}

