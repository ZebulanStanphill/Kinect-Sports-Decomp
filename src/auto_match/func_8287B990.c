extern int fn_82292780();
extern int fn_82F691F0();
extern unsigned int lbl_820224E0;


void fn_8287B990(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  *param_1 = &lbl_820224E0;
  fn_82292780(param_1 + 1);
  param_1[0xb] = param_3;
  *(unsigned char *)(param_1 + 10) = 1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0xc,0,0x24);
}

