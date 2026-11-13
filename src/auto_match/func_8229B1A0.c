extern int fn_82266D28();
extern int fn_82297428();
extern int fn_8229B918();
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_8229B1A0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_82266D28(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = ltcg_pool_0_0f;
  param_1[7] = 1;
  param_1[6] = uVar1;
  param_1[8] = 0;
  param_1[0xe] = uVar1;
  param_1[9] = 0;
  param_1[0x19] = uVar1;
  param_1[0xd] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  fn_82297428(param_1 + 0x1c,0xffffffff820e975c);
  fn_82297428(param_1 + 0x23,0xffffffff820e975c);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  fn_8229B918(param_1);
  return param_1;
}

