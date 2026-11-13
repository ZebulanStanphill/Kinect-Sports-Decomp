extern unsigned int *auStack_40;
extern int fn_826829A0();
extern int fn_8268CC00();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern int fn_82741C18();
extern unsigned int lbl_82012650;
extern unsigned int lbl_82012A64;


unsigned int * fn_82742B70(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned char auStack_40 [16];
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012650;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),0xd);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  fn_8268CC00(auStack_40);
  fn_82741C18(param_1,param_2,auStack_40);
  return param_1;
}

