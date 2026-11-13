extern int fn_82BC0928();
extern unsigned int lbl_820E3588;


unsigned int * fn_82BC2068(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  fn_82BC0928();
  param_1[0xc] = 0;
  *param_1 = &lbl_820E3588;
  param_1[4] = *(unsigned int *)(param_4 + 0x58c);
  *(int *)(param_4 + 0x58c) = *(int *)(param_4 + 0x58c) + 1;
  return param_1;
}

