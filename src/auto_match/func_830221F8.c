extern int fn_8303A930();
extern int fn_8303AA38();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_830221F8(double param_1,int param_2)

{
  unsigned __int64 uVar1;
  double dVar2;
  float afStack_30;
  
  afStack_30 = lbl_821AAD20;
  dVar2 = (double)lbl_821AAD20;
  if ((dVar2 <= param_1) && (dVar2 = param_1, (double)lbl_82005748 < param_1)) {
    dVar2 = (double)lbl_82005748;
  }
  if (*(char *)(param_2 + 0x2d) != '\0') {
    *(float *)(param_2 + 0x14) = (float)dVar2;
    *(float *)(param_2 + 0x18) = (float)dVar2;
    *(unsigned int *)(param_2 + 0x1c) = 8;
    uVar1 = fn_8303A930(dVar2,param_2,*(unsigned char *)(param_2 + 0x24),&afStack_30);
    *(char *)(param_2 + 0x25) = (char)uVar1;
    if ((uVar1 & 0xff) == 0) {
      fn_8303AA38((double)afStack_30,uVar1,param_2 + 4);
    }
    *(unsigned char *)(param_2 + 0x2d) = 0;
  }
  if (dVar2 != (double)*(float *)(param_2 + 0x18)) {
    *(float *)(param_2 + 0x18) = (float)dVar2;
    *(unsigned int *)(param_2 + 0x1c) = 0;
  }
  return 1;
}

