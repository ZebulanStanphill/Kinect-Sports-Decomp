extern int memcpy();
extern unsigned int lbl_82192330;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_823CBFC0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[0x3c] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_2[6];
  param_1[9] = param_2[7];
  param_1[10] = param_2[8];
  param_1[0xb] = param_2[9];
  param_1[0xc] = param_2[10];
  param_1[0xd] = param_2[0xb];
  param_1[0xe] = param_2[0xc];
  param_1[0xf] = param_2[0xd];
  param_1[0x10] = param_2[0xe];
  param_1[0x11] = param_2[0xf];
  param_1[0x12] = param_2[0x10];
  param_1[0x13] = param_2[0x11];
  param_1[0x14] = param_2[0x12];
  param_1[0x15] = param_2[0x13];
  param_1[0x16] = param_2[0x14];
  param_1[0x17] = param_2[0x15];
  param_1[0x18] = param_2[0x16];
  param_1[0x19] = param_2[0x17];
  memcpy(param_1 + 0x1f,param_2 + 0x18,100);
  *(unsigned char *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(unsigned char *)(param_1 + 0x1b) = 1;
  uVar1 = lbl_82192330;
  param_1[0x1c] = ltcg_pool_0_0f;
  param_1[0x1a] = uVar1;
  return param_1;
}

