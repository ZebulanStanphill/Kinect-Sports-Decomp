extern int fn_82BE5908();
extern unsigned int lbl_820EBA68;


unsigned int * fn_82BF4D90(unsigned int *param_1)

{
  fn_82BE5908(param_1,0x1065,"RequestImpressionUpdate");
  *(unsigned short *)(param_1 + 0x14) = 0;
  *param_1 = &lbl_820EBA68;
  *(unsigned short *)((int)param_1 + 0x52) = 0;
  return param_1;
}

