extern int fn_826829A0();
extern int fn_8268B330();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_820121E8;
extern unsigned int lbl_8201223C;


unsigned int * fn_8273DF38(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_8201223C;
  param_1[4] = &lbl_820121E8;
  fn_8268B330(param_1 + 0xc);
  fn_8268B330(param_1 + 0xd);
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0x2a);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

