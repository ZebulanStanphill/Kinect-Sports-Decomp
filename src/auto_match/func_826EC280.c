extern int fn_8277B988();
extern float lbl_8200D8B0;
extern unsigned int lbl_821AAD20;


unsigned int * fn_826EC280(unsigned int *param_1)

{
  float uVar1;
  float uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_8277B988(param_1 + 0xf,0,0,0);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[9] = 0;
  *param_1 = 0xffffffff;
  uVar1 = lbl_8200D8B0;
  *(unsigned char *)(param_1 + 0xc) = 0;
  uVar2 = 0.0f;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(float *)(param_1+10) = uVar1;
  *(unsigned char *)((int)param_1 + 0x2f) = 0;
  *(float *)(param_1+0xd) = uVar2;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  *(float *)(param_1+0xe) = uVar2;
  *(unsigned char *)((int)param_1 + 0x2e) = 0;
  return param_1;
}

