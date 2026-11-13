extern int fn_82F691F0();
extern int fn_83063A88();


void fn_83063FB8(int param_1)

{
  fn_83063A88();
  *(unsigned char *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0xc4,0,0x28);
}

