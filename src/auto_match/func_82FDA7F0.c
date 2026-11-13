extern unsigned int iStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216E498;
extern unsigned int lbl_8216E49C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FDA7F0(int param_1,unsigned int *param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  int iStack_c;
  
  if (param_2 == (unsigned int *)0x0) {
    return 0x1f;
  }
  *(unsigned int *)(param_1 + 4) = *param_2;
  *(unsigned int *)(param_1 + 8) = param_2[1];
  *(unsigned int *)(param_1 + 0xc) = param_2[2];
  fVar1 = (float)param_2[3];
  if (fVar1 <= lbl_8216C698) {
    *(float *)(param_1 + 0x10) = lbl_821AAD20;
    *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_2 + 4);
    return 1;
  }
  if (lbl_821AAD20 <= fVar1) {
    *(float *)(param_1 + 0x10) = lbl_82002AE0;
    *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_2 + 4);
    return 1;
  }
  uVar2 = (unsigned __int64)(fVar1 + lbl_8208ED48);
  iStack_c = (int)uVar2;
  fVar1 = (fVar1 + lbl_8208ED48) - (float)(uVar2 & 0xffffffff);
  *(float *)(param_1 + 0x10) =
       *(float *)(&lbl_8216E498 + iStack_c * 4) * (lbl_82002AE0 - fVar1) +
       *(float *)(&lbl_8216E49C + iStack_c * 4) * fVar1;
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_2 + 4);
  return 1;
}

