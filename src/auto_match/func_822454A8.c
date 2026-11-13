extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_82197728;
extern unsigned int lbl_82197760;


unsigned int * fn_822454A8(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  fn_8288B668();
  *param_1 = &lbl_82197728;
  fn_8289D6D0(param_1 + 0x12,4);
  param_1[0x12] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0x27,4);
  param_1[0x27] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x3c,0x428);
  param_1[0x3c] = &lbl_82197760;
  fn_8289D6D0(param_1 + 0x51,0);
  param_1[0x51] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x66,0);
  param_1[0x66] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x7b,0);
  param_1[0x7b] = &lbl_82197080;
  fn_8289D7E8(param_1 + 0x90,4);
  puVar2 = param_1 + 0xa5;
  lVar1 = 0xe;
  param_1[0x90] = &lbl_82197760;
  do {
    fn_8289D6D0(puVar2,4);
    *puVar2 = &lbl_82197100;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  puVar2 = param_1 + 0x1e0;
  lVar1 = 0xe;
  do {
    fn_8289D6D0(puVar2,0);
    *puVar2 = &lbl_82197080;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  return param_1;
}

