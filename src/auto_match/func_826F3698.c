extern int fn_82686E80();
extern int fn_8268B330();
extern unsigned int lbl_8200C938;


unsigned int * fn_826F3698(unsigned int *param_1,int param_2)

{
  fn_82686E80();
  *param_1 = &lbl_8200C938;
  fn_8268B330(param_1 + 7);
  *(unsigned short *)(param_1 + 5) = *(unsigned short *)(param_2 + 0x14);
  *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)(param_2 + 0x16);
  param_1[6] = *(unsigned int *)(param_2 + 0x18);
  return param_1;
}

