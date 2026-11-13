extern int fn_82E579E0();
extern int fn_82F691F0();


void fn_82E78ED8(int param_1)

{
  fn_82E579E0(param_1 + 0x218);
  *(unsigned char *)(param_1 + 0x238) = 0;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x13c,0,0x3c);
}

