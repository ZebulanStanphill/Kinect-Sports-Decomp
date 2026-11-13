extern int fn_826829A0();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern int fn_82745128();
extern unsigned int lbl_82012A10;
extern unsigned int lbl_82012A64;


extern char lbl_83156640[];
unsigned int * fn_82746C20(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012A10;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0xf);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  fn_82745128(param_1,param_2 + 0x78,lbl_83156640);
  return param_1;
}

