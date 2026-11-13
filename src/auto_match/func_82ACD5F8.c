extern int fn_82F691F0();


void fn_82ACD5F8(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6)

{
  int iVar1;
  
  param_1[0x11] = param_2;
  *param_1 = param_3;
  param_1[0xe] = param_4;
  param_1[0x10] = param_5;
  if ((param_3[1] & 1) == 0) {
    iVar1 = (*param_3 & 0xfffffffe) - 0x28;
  }
  else {
    iVar1 = 0;
  }
  *(unsigned char *)(param_1 + 0x12) = 0;
  param_1[0xf] = iVar1;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  *(unsigned char *)((int)param_1 + 0x4a) = 0;
  param_1[1] = param_6;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 2,0,0x24);
}

