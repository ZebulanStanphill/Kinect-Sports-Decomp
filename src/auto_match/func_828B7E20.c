extern unsigned int *auStack_20;
extern int fn_8288C1B8();
extern int fn_8289E3C8();
extern int fn_8289EC50();
extern unsigned int lbl_820252A8;
extern unsigned int lbl_83214048;


unsigned int *
fn_828B7E20(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char auStack_20 [8];
  
  *param_1 = &lbl_820252A8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = param_2;
  lbl_83214048 = lbl_83214048 + 1;
  param_1[6] = lbl_83214048;
  param_1[7] = param_4;
  param_1[8] = 0;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fn_8288C1B8(param_1 + 10,10);
  uVar1 = param_1[5];
  iVar2 = fn_8289E3C8((unsigned __int64)uVar1 + 0x1c0);
  if ((unsigned int *)(iVar2 + 0xc) != (unsigned int *)0x0) {
    *(unsigned int *)(iVar2 + 0xc) = param_1;
  }
  fn_8289EC50(auStack_20,(unsigned __int64)uVar1 + 0x1c0,iVar2,0);
  return param_1;
}

