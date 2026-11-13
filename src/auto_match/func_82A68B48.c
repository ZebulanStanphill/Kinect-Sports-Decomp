extern unsigned int lbl_8315F75C;


unsigned char * fn_82A68B48(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 8) {
    iVar1 = 0;
  }
  else if (param_2 == 0x10) {
    iVar1 = 1;
  }
  else {
    if (param_2 != 0x20) {
      return (unsigned char *)0x0;
    }
    iVar1 = 2;
  }
  if ((param_1 != 1) && (param_1 != 2)) {
    return (unsigned char *)0x0;
  }
  return (&lbl_8315F75C)[param_1 * 3 + iVar1 + -3];
}

