extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_82012A64;
extern unsigned int lbl_82013488;


unsigned int * fn_8274C6F8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82013488;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0x1c);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

