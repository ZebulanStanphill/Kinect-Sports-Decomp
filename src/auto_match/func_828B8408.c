extern int fn_8265C9E0();
extern int fn_828B7E20();
extern int fn_828ED4C0();
extern unsigned int lbl_820252D0;


unsigned int *
fn_828B8408(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned int param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  
  fn_828B7E20(param_1,param_2,param_5,param_7);
  puVar3 = (unsigned char *)((int)param_1 + 0x37);
  *param_1 = &lbl_820252D0;
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[0x12] = param_6;
  *(unsigned char *)(param_1 + 0x13) = 0;
  iVar1 = fn_8265C9E0(0x448);
  if (iVar1 == 0) {
    param_1[0x14] = 0;
  }
  else {
    uVar2 = fn_828ED4C0();
    param_1[0x14] = uVar2;
  }
  return param_1;
}

