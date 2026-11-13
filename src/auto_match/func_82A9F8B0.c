extern int fn_82A9F6F8();
extern unsigned int iStack_34;
extern unsigned int lbl_820D28A4;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


unsigned int fn_82A9F8B0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  int iStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    if (*(int *)(param_1 + 0x94) == 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x94) == 3) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_820D28A4;
      uStack_38 = 1;
      uStack_28 = 0;
      iStack_34 = 0;
      uStack_30 = param_2;
      uStack_2c = param_3;
      fn_82A9F6F8(param_1,&ppuStack_40);
      if (-1 < iStack_34) {
        *param_4 = uStack_28;
      }
    }
    else {
      iStack_34 = -0x7fffbffb;
    }
    *(int *)(param_1 + 0x90) = iStack_34;
  }
  return *(unsigned int *)(param_1 + 0x90);
}

