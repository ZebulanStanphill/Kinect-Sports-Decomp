extern int fn_82BE19A0();
extern int fn_82BE5240();
extern int fn_82BEB750();
extern unsigned int lbl_820EAB18;


unsigned int * fn_82BEA238(unsigned int *param_1,char *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  fn_82BEB750(param_1,0xffffffff820eab24);
  *param_1 = &lbl_820EAB18;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar2 = 300;
  }
  else {
    iVar1 = fn_82BE19A0(param_2);
    param_1[0xe] = iVar1;
    if (iVar1 != 0) {
      return param_1;
    }
    uVar2 = 0x65;
  }
  fn_82BE5240(param_1,uVar2,0xffffffff82196582);
  param_1[4] = 0;
  return param_1;
}

