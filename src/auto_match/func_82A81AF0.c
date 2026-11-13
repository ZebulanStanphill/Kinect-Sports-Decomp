extern unsigned char lbl_8322344C;
extern int XamAvatarGetManifestLocalUser(unsigned int,int,int);
extern void fn_82A2A370(int);


unsigned int fn_82A81AF0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  
  if (lbl_8322344C == '\0') {
    iVar1 = -0x7fff0001;
  }
  else {
    if (((param_1) < 4) && (param_2 != 0)) {
      iVar1 = XamAvatarGetManifestLocalUser(param_1,param_2,param_3);
    }
    else {
      iVar1 = -0x7ff8ffa9;
    }
    if (iVar1 >= 0) {
      return param_3 ? 0x3e5 : 0;
    }
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 0x18) = iVar1;
  } else {
    fn_82A2A370(iVar1);
  }
  return 0x65b;
}

