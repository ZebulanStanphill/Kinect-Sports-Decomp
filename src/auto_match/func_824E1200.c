extern int fn_824CC840();
extern int fn_824CD030();
extern int fn_824E10D0();
extern int fn_824E1C78();
extern int fn_8265C9E0();
extern float lbl_821954EC;
extern unsigned int lbl_821C1148;
extern unsigned int lbl_821C1170;
extern unsigned int lbl_821C1194;


unsigned int * fn_824E1200(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  
  fn_824CC840();
  uVar2 = 0;
  *(unsigned char *)(param_1 + 0x38) = 1;
  param_1[0x3d] = 0;
  param_1[0x3c] = &lbl_821C1194;
  param_1[0x3e] = 0;
  *param_1 = &lbl_821C1148;
  param_1[0x3c] = &lbl_821C1170;
  uVar1 = fn_8265C9E0(0xc0);
  if ((uVar1 & 0xffffffff) != 0) {
    uVar2 = fn_824E10D0(uVar1,param_2);
  }
  param_1[0x3f] = uVar2;
  iVar3 = fn_824CD030(param_1);
  if (iVar3 != 0) {
    fn_824E1C78(param_1);
  }
  *(float *)(param_1[8] + 0x10) = *(float *)(param_1[0x3f] + 0x68) * lbl_821954EC;
  return param_1;
}

