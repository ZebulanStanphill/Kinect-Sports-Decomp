extern int fn_8260D2A8();
extern int fn_828183C0();
extern unsigned int lbl_8201BB38;


unsigned int *
fn_827D9FB0(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned int *param_7)

{
  unsigned int uVar1;
  unsigned int *puStack00000014;
  unsigned int *puVar2;
  
  *param_1 = &lbl_8201BB38;
  puVar2 = param_1 + 0xd;
  uVar1 = *param_5;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = uVar1;
  param_1[5] = *param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = *param_4;
  param_1[9] = 0;
  param_1[10] = *param_6;
  param_1[0xb] = *param_7;
  puStack00000014 = param_1;
  fn_8260D2A8(puVar2);
  if ((param_1[1] == -1) || (param_1[1] == 0)) {
    if (0xf < (unsigned int)param_1[0x12]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    uVar1 = fn_828183C0(puVar2);
    param_1[1] = uVar1;
  }
  return param_1;
}

