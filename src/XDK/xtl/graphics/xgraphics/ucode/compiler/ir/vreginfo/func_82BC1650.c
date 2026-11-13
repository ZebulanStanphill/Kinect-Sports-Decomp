extern int fn_82BB1BE8();
extern int fn_82BC0928();
extern unsigned int lbl_820E3564;


unsigned int * fn_82BC1650(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  fn_82BC0928();
  *param_1 = &lbl_820E3564;
  fn_82BB1BE8(*(unsigned int *)(param_4 + 0xab0),param_2);
  *(unsigned char *)((int)param_1 + 5) = 1;
  param_1[4] = (int)param_2;
  *(unsigned char *)((int)param_1 + 0x1d) = 1;
  *(unsigned char *)(param_1 + 7) = 1;
  return param_1;
}

