extern int fn_82769900();
extern unsigned int lbl_82014C48;
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_821AAD20;


float * fn_8276AF78(int param_1,unsigned int param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (double)lbl_82014C4C;
  if ((param_2 == 0xffffffff) || (*(unsigned int *)(param_1 + 0x38) <= param_2)) {
    param_3[3] = lbl_82014C4C;
    fVar1 = lbl_821AAD20;
    param_3[2] = lbl_82014C48;
    param_3[1] = fVar1;
    *param_3 = fVar1;
  }
  else {
    fn_82769900(param_1 + 0x2c);
  }
  fVar1 = (float)*(unsigned int *)(param_1 + 0x58);
  *param_3 = (float)((double)*param_3 * dVar2) / fVar1;
  param_3[1] = (float)((double)param_3[1] * dVar2) / fVar1;
  param_3[2] = (float)((double)param_3[2] * dVar2) / fVar1;
  param_3[3] = (float)((double)param_3[3] * dVar2) / fVar1;
  return param_3;
}

