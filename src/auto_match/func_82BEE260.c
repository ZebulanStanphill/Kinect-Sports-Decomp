extern int fn_82BE5908();
extern unsigned int lbl_820EB10C;


unsigned int * fn_82BEE260(unsigned int *param_1)

{
  fn_82BE5908(param_1,0x1023,"RequestOpenSession");
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  *param_1 = &lbl_820EB10C;
  *(unsigned __int64 *)(param_1 + 0x16) = 0;
  return param_1;
}

