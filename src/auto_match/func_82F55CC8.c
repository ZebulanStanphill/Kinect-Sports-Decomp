extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_82057514;
extern unsigned int lbl_82057518;
extern unsigned int lbl_821AAD20;


void fn_82F55CC8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  
  fVar1 = lbl_821AAD20;
  fVar3 = lbl_82057514;
  fVar2 = lbl_82015BD8;
  if (param_1 == (float *)0x0) {
    return;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  if (in_register_00010018 <= lbl_82057518) {
    *param_1 = lbl_821AAD20;
  }
  else {
    fVar1 = lbl_82002AE0 / in_register_00010018;
    *param_1 = fVar1 * in_register_00010010 * lbl_82057514 + lbl_82015BD0;
    fVar1 = -(fVar1 * in_register_00010014 * fVar3 - fVar2);
  }
  *param_2 = fVar1;
  return;
}

