extern int fn_82BE19A0();
extern int fn_82BE51E8();
extern int fn_82BE5240();
extern int fn_82F6D460();
extern unsigned int lbl_820EB6F4;


unsigned int * fn_82BF2DC8(unsigned int *param_1,unsigned int param_2,unsigned char param_3)

{
  unsigned int iVar1;
  
  fn_82BE51E8(param_1,"CAddressIndexPair");
  *(unsigned char *)(param_1 + 5) = param_3;
  param_1[6] = 0;
  *param_1 = &lbl_820EB6F4;
  if (((param_2 & 0xffffffff) != 0) && (iVar1 = fn_82F6D460(param_2,0x100), iVar1 != 0)) {
    iVar1 = fn_82BE19A0(param_2);
    param_1[6] = iVar1;
    if (iVar1 == 0) {
      fn_82BE5240(param_1,0x65,"Server name in constructor");
      param_1[4] = 0;
    }
  }
  return param_1;
}

