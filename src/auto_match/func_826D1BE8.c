extern int fn_826B1560();
extern int fn_826C0B08();
extern int fn_826D1820();
extern unsigned int lbl_8200C078;
extern unsigned int lbl_8200F744;


unsigned int * fn_826D1BE8(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_8200F744;
  param_1[4] = &lbl_8200C078;
  param_1[0xc] = 0;
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)((int)param_1 + 0x35) = 0;
  uVar1 = fn_826B1560(*(unsigned int *)(param_2 + 0x78),param_2,6);
  fn_826D1820(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

