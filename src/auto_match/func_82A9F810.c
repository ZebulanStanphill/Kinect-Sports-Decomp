extern int fn_82A9F6F8();
extern unsigned int iStack_24;
extern unsigned int lbl_820D2894;
extern unsigned int uStack_20;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned int fn_82A9F810(int param_1)

{
  unsigned int uVar1;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  int iStack_24;
  unsigned int uStack_20;
  
  uVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x90)) {
    if ((*(int *)(param_1 + 0x94) == 1) || (*(int *)(param_1 + 0x94) != 3)) {
      uVar1 = 0;
    }
    else {
      uStack_2c = 0;
      uStack_20 = 0;
      iStack_24 = 0;
      uStack_28 = 1;
      ppuStack_30 = &lbl_820D2894;
      fn_82A9F6F8(param_1,&ppuStack_30);
      if (-1 < iStack_24) {
        uVar1 = uStack_20;
      }
      *(int *)(param_1 + 0x90) = iStack_24;
    }
  }
  return uVar1;
}

