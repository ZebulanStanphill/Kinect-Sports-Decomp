extern int fn_82F691F0();


void fn_829370D8(int param_1)

{
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x124) = 0;
  *(unsigned int *)(param_1 + 0x128) = *(unsigned int *)(param_1 + 0x128) & 0x100000;
  *(unsigned int *)(param_1 + 0x130) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x84,0,0x20);
}

