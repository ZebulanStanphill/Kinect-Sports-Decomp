extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_8200F6F0;
extern unsigned int lbl_8200F744;


unsigned int * fn_827164B0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_8200F744;
  param_1[4] = &lbl_8200F6F0;
  param_1[0xc] = 0;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),9);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

