extern int fn_82FEF488();
extern int fn_82FEFC98();
extern int fn_82FEFCC8();
extern int fn_82FEFF98();


void fn_82FA8468(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + -0x188;
  fn_82FEFC98(iVar1);
  if ((*(unsigned int *)(param_1 + 0xc) == 0xffffffff) || (*(unsigned int *)(param_1 + 0xc) > param_2)) {
    *(unsigned int *)(param_1 + 0xc) = param_2;
  }
  if (((*(unsigned char *)(param_1 + -0xae) & 0x80) == 0) &&
     ((*(unsigned int *)(param_1 + -300) == 0 || ((*(unsigned char *)(param_1 + -0x128) & 0x40) == 0)))) {
    *(unsigned char *)(param_1 + -0xaf) = *(unsigned char *)(param_1 + -0xaf) | 2;
    if (param_2 == 0xffffffff) {
      fn_82FEF488(iVar1);
    }
  }
  else {
    fn_82FEFF98(param_1 + -0x184,0,0);
  }
  *(unsigned char *)(param_1 + 0x14) = 1;
  fn_82FEFCC8(iVar1);
  return;
}

