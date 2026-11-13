extern int fn_82BE5240();
extern int fn_82F691F0();


void fn_82BE5FE0(int param_1)

{
  if ((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(int *)(param_1 + 0x1c),0);
  }
  fn_82BE5240(param_1,0x65,0xffffffff820e93c4);
  return;
}

