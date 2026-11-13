extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C70F0();
extern int fn_823042A8();
extern int fn_8234E590();
extern int fn_8251F720();
extern unsigned int lbl_821AEEAC;


unsigned int *
fn_82303E68(unsigned int *param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  float fVar2;
  unsigned char auStack_50 [32];
  
  fn_82230110(auStack_50,"keepermiss");
  fn_822C70F0(param_1,auStack_50,param_2);
  fn_82230300(auStack_50,1,0);
  param_1[0x15] = param_4;
  fVar2 = 0.0f;
  *param_1 = &lbl_821AEEAC;
  *(float *)(param_1 + 0x16) = fVar2;
  uVar1 = fn_8251F720(param_5,0);
  param_1[0x17] = uVar1;
  fn_8234E590(param_1 + 0x18,param_3,*(unsigned int *)(param_2 + 8),
                    *(unsigned int *)(param_2 + 0xc),*(unsigned int *)(param_4 + 0x118));
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
  fn_823042A8(param_1);
  return param_1;
}

