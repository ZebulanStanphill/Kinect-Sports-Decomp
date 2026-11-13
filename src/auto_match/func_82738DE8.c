extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern int fn_827582C8();
extern unsigned int lbl_82011AD0;
extern unsigned int lbl_82011B24;


unsigned int * fn_82738DE8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_82011B24;
  param_1[4] = &lbl_82011AD0;
  fn_827582C8(param_1 + 0xc);
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0x29);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

