extern int fn_82F691F0();
extern unsigned int lbl_821B0650;


void fn_8232B708(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  param_1[1] = param_2;
  param_1[2] = 2;
  *param_1 = &lbl_821B0650;
  param_1[3] = 5;
  param_1[4] = 1;
  param_1[5] = 4;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = *param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0xb,0,0x1c);
}

