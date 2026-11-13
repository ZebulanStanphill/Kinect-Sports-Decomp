typedef unsigned char bool;
extern int fn_82230218();
extern int fn_823AA970();
extern int fn_8240D928();
extern int fn_8289DB80();
extern int fn_828AEBB8();
extern int fn_828BDDA0();
extern int fn_82A4AAA8();
extern int fn_82F68CC0();
extern unsigned int lbl_82025A10;
extern unsigned int lbl_82025A18;


unsigned int * fn_828D25A8(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  
  fn_828BDDA0();
  param_1[0x20] = param_2;
  *param_1 = &lbl_82025A18;
  param_1[0x14] = &lbl_82025A10;
  param_1[0x32] = 0;
  param_1[0x33] = 0xf;
  *(unsigned char *)(param_1 + 0x2e) = 0;
  uVar1 = fn_828AEBB8(param_3);
  fn_82F68CC0(param_1 + 0x21,uVar1,0x24);
  uVar2 = fn_8240D928(param_3);
  param_1[0x2a] = uVar2;
  uVar2 = fn_823AA970(param_3);
  param_1[0x2b] = uVar2;
  iVar3 = fn_82A4AAA8(param_3);
  *(bool *)(param_1 + 0x2c) = iVar3 == 1;
  param_1[0x2d] = *(unsigned int *)(param_3 + 0x10);
  uVar1 = fn_8289DB80(param_3);
  fn_82230218(param_1 + 0x2e,uVar1,0,0xffffffffffffffff);
  return param_1;
}

