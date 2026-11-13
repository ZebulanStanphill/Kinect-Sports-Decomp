extern int fn_82A812C8();
extern int fn_82C2B590();
extern int fn_82C44798();
extern int fn_82F691F0();


void fn_82A6B4B0(int param_1)

{
  fn_82C44798();
  fn_82A812C8(param_1 + 0x18);
  fn_82A812C8(param_1 + 0x2c);
  fn_82A812C8(param_1 + 0x40);
  fn_82A812C8(param_1 + 0x54);
  if (*(int *)(param_1 + 0x94) != 0) {
    fn_82C2B590();
    *(unsigned int *)(param_1 + 0x94) = 0;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_82C2B590();
    *(unsigned int *)(param_1 + 0xa0) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,0xa8);
}

