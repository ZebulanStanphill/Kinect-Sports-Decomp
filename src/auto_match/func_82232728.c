extern int fn_8288B668();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196AE4;
extern unsigned int lbl_82196B30;
extern unsigned int lbl_82196B78;
extern unsigned int lbl_82196D38;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;


unsigned int * fn_82232728(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  fn_8288B668();
  *param_1 = &lbl_82196AE4;
  fn_8289D7E8(param_1 + 0x12,5);
  param_1[0x12] = &lbl_82196B30;
  fn_8289D7E8(param_1 + 0x27,3);
  puVar2 = param_1 + 0x3c;
  lVar1 = 0x13;
  param_1[0x27] = &lbl_82196B78;
  do {
    fn_8289D7E8(puVar2,4);
    *puVar2 = &lbl_82196D38;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  fn_8289D6D0(param_1 + 0x1e0,0);
  param_1[0x1e0] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x1f5,0);
  param_1[0x1f5] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x20a,4);
  param_1[0x20a] = &lbl_82197100;
  fn_8289D6D0(param_1 + 0x21f,4);
  param_1[0x21f] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x234,3);
  param_1[0x234] = &lbl_82196B78;
  return param_1;
}

