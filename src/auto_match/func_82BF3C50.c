extern int fn_82BE8CE0();
extern int fn_82BEC770();
extern int fn_82BFA9C0();
extern int fn_82BFAB68();
extern int fn_82BFACA0();
extern unsigned int lbl_820EB7A0;


unsigned int * fn_82BF3C50(unsigned int *param_1)

{
  fn_82BE8CE0();
  *param_1 = &lbl_820EB7A0;
  fn_82BFACA0(param_1 + 2);
  param_1[5] = 0;
  fn_82BEC770(param_1 + 6);
  fn_82BFAB68(param_1 + 0xb,"CFileAsyncWorker Queue",1);
  fn_82BFA9C0(param_1 + 0x16);
  return param_1;
}

