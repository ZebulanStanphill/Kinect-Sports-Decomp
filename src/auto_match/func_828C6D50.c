extern int fn_823AA970();
extern int fn_8288DB98();
extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82025B20;
extern unsigned int lbl_82025B28;


unsigned int * fn_828C6D50(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  fn_828BDDA0();
  *param_1 = &lbl_82025B28;
  param_1[0x14] = &lbl_82025B20;
  fn_828B5580(param_1 + 0x20,param_2 + 0x14);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(unsigned char *)(param_1 + 0x26) = 1;
  param_1[0x27] = 0;
  uVar1 = fn_823AA970(param_3);
  param_1[0x27] = uVar1;
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_2 + 0x5c);
  fn_8288DB98(param_2,param_3,param_1 + 0x22);
  return param_1;
}

