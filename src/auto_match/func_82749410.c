extern int fn_826829A0();
extern int fn_8268D758();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_82012A64;
extern unsigned int lbl_82012CB8;


unsigned int * fn_82749410(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012CB8;
  fn_8268D758(param_1 + 0xc);
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0x10);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

