extern unsigned char lbl_8322344C;
extern int XamAvatarGetMetadataRandom(unsigned char,void *,void *,void *);
extern void fn_82A2A370(int);


unsigned int fn_82A81B88(unsigned char param_1,void *param_2,void *param_3,unsigned int param_4)

{
  int iVar1;
  
  if (lbl_8322344C == '\0') {
    iVar1 = -0x7fff0001;
  }
  else {
    if ((((param_2 == 0) || (param_3 == 0)) || (param_1 == 0)) || ((param_1 & ~3u) != 0)) {
      iVar1 = -0x7ff8ffa9;
    }
    else {
      iVar1 = XamAvatarGetMetadataRandom(param_1,param_2,param_3,(void *)param_4);
    }
    if (iVar1 >= 0) {
      return param_4 ? 0x3e5 : 0;
    }
  }
  if (param_4 != 0) {
    *(int *)(param_4 + 0x18) = iVar1;
  } else {
    fn_82A2A370(iVar1);
  }
  return 0x65b;
}

