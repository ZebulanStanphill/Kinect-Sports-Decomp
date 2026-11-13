extern int fn_826829A0();
extern int fn_8268C210();
extern int fn_826A7380();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern unsigned int lbl_82006E68;
extern unsigned int lbl_82006EBC;


unsigned int * fn_826A2AB8(unsigned int *param_1,int param_2)

{
  unsigned int uVar2;
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_82006EBC;
  param_1[4] = &lbl_82006E68;
  uVar2 = fn_826A7380(param_2);
  param_1[0xc] = uVar2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  fn_8268C210(param_1 + 0x10);
  param_1[0x11] = 0;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),2);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

