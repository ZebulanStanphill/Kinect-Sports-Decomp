extern int fn_82A4F4E0();
extern int fn_82F691F0();


void fn_82A4D3F0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_82A4F4E0();
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_82A4F4E0();
    *(unsigned int *)(param_1 + 0x30) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x24,0,0x24);
}

