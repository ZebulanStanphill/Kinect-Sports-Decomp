extern int fn_82292780();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_82022AF0;
extern unsigned int lbl_821AAD20;


unsigned int * fn_8287A458(double param_1,double param_2,double param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_4[1] = (float)param_1;
  param_4[2] = (float)param_2;
  param_4[4] = (float)param_3;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82005C88;
  *(unsigned char *)(param_4 + 7) = 0;
  param_4[3] = uVar2;
  *param_4 = &lbl_82022AF0;
  param_4[5] = uVar2;
  *(unsigned char *)(param_4 + 10) = 0;
  param_4[6] = uVar2;
  param_4[8] = uVar2;
  param_4[9] = uVar2;
  param_4[0xb] = uVar2;
  param_4[0xc] = uVar1;
  fn_82292780(param_4 + 0xd);
  return param_4;
}

