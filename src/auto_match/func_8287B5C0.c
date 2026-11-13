extern int fn_82864988();
extern int fn_82F691F0();
extern unsigned int lbl_820224E0;


void fn_8287B5C0(unsigned int *param_1)

{
  *param_1 = &lbl_820224E0;
  fn_82864988(param_1 + 1,0xffffffff82022d9c);
  *(unsigned char *)(param_1 + 10) = 0;
  param_1[0xb] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0xc,0,0x24);
}

