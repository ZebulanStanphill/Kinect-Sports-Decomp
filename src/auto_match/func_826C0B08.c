extern int fn_826829A0();
extern int fn_826A73B0();
extern int fn_826B14D8();
extern unsigned int lbl_8200B5A8;
extern unsigned int lbl_82010118;
extern unsigned int lbl_82012A64;


unsigned int * fn_826C0B08(unsigned int *param_1,int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  
  uVar2 = fn_826A73B0(param_2);
  param_1[1] = uVar2;
  param_1[2] = 1;
  param_1[4] = &lbl_8200B5A8;
  param_1[5] = 0;
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82010118;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 0;
  *(unsigned char *)((int)param_1 + 0x2d) = 0;
  uVar1 = fn_826B14D8(*(unsigned int *)(param_2 + 0x78),1);
  fn_826829A0(param_1 + 4,param_2 + 0x78,uVar1);
  return param_1;
}

