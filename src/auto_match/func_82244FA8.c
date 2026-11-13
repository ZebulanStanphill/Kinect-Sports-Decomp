extern int fn_8223BBA0();
extern int fn_8289D6D0();
extern int fn_8289D7E8();
extern unsigned int lbl_82196CE0;
extern unsigned int lbl_82197080;
extern unsigned int lbl_82197100;
extern unsigned int lbl_82197700;
extern unsigned int lbl_821980D0;
extern unsigned int lbl_821983E8;


unsigned int * fn_82244FA8(unsigned int *param_1)

{
  __int64 lVar1;
  unsigned int *puVar2;
  
  fn_8223BBA0();
  *param_1 = &lbl_82197700;
  fn_8289D6D0(param_1 + 0xba,8);
  param_1[0xba] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0xcf,1);
  puVar2 = param_1 + 0xe4;
  lVar1 = 7;
  param_1[0xcf] = &lbl_821980D0;
  do {
    fn_8289D6D0(puVar2,4);
    *puVar2 = &lbl_82197100;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  fn_8289D6D0(param_1 + 0x18c,8);
  param_1[0x18c] = &lbl_82197100;
  fn_8289D7E8(param_1 + 0x1a1,8);
  param_1[0x1a1] = &lbl_82196CE0;
  fn_8289D7E8(param_1 + 0x1b6,0x10);
  param_1[0x1b6] = &lbl_821983E8;
  fn_8289D6D0(param_1 + 0x1cb,2);
  param_1[0x1cb] = &lbl_82197080;
  fn_8289D7E8(param_1 + 0x1e0,1);
  puVar2 = param_1 + 0x1f5;
  lVar1 = 7;
  param_1[0x1e0] = &lbl_821980D0;
  do {
    fn_8289D6D0(puVar2,4);
    *puVar2 = &lbl_82197100;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0x15;
  } while (-1 < lVar1);
  fn_8289D6D0(param_1 + 0x29d,0);
  param_1[0x29d] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x2b2,2);
  param_1[0x2b2] = &lbl_82197080;
  fn_8289D6D0(param_1 + 0x2c7,0);
  param_1[0x2c7] = &lbl_82197080;
  return param_1;
}

