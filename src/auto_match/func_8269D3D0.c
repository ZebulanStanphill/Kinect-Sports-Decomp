extern int fn_8268CC00();
extern int fn_8268D758();
extern unsigned int lbl_82005700;
extern unsigned int lbl_82006850;
extern unsigned int lbl_820069EC;
extern unsigned int lbl_821AAD20;


unsigned int * fn_8269D3D0(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  param_1[2] = 0;
  param_1[1] = 1;
  param_1[3] = &lbl_82005700;
  *param_1 = &lbl_82006850;
  param_1[3] = &lbl_820069EC;
  uVar1 = lbl_821AAD20;
  param_1[4] = *param_3;
  param_1[7] = uVar1;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[8] = param_2;
  fn_8268D758(param_1 + 9);
  fn_8268CC00(param_1 + 0x11);
  *(unsigned short *)(param_1 + 0x19) = 0;
  *(unsigned char *)((int)param_1 + 0x66) = 0;
  return param_1;
}

