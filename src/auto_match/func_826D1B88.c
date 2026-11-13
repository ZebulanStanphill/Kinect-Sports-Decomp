extern int fn_826C09B0();
extern int fn_826D1820();
extern unsigned int lbl_8200C078;
extern unsigned int lbl_8200F744;


unsigned int * fn_826D1B88(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_8200F744;
  param_1[4] = &lbl_8200C078;
  param_1[0xc] = 0;
  fn_826D1820(param_1 + 4,param_2,param_3);
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0x35) = 0;
  return param_1;
}

