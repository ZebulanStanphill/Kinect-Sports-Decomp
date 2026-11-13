extern unsigned int iStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8208ED48;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216E498;
extern unsigned int lbl_8216E49C;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FDA908(int param_1,unsigned short param_2,float *param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iStack_c;
  
  if ((param_3 == (float *)0x0) || (uVar2 = 1, 4 < param_2)) {
    return 0x1f;
  }
  if (param_2 == 1) {
    *(float *)(param_1 + 8) = *param_3;
    return uVar2;
  }
  if (param_2 != 2) {
    if (param_2 != 3) {
      if (param_2 == 0) {
        *(float *)(param_1 + 4) = *param_3;
        return uVar2;
      }
      *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)param_3;
      return uVar2;
    }
    fVar1 = *param_3;
    if (fVar1 <= lbl_8216C698) {
      *(float *)(param_1 + 0x10) = lbl_821AAD20;
      return uVar2;
    }
    if (lbl_821AAD20 <= fVar1) {
      *(float *)(param_1 + 0x10) = lbl_82002AE0;
      return uVar2;
    }
    uVar3 = (unsigned __int64)(fVar1 + lbl_8208ED48);
    iStack_c = (int)uVar3;
    fVar1 = (fVar1 + lbl_8208ED48) - (float)(uVar3 & 0xffffffff);
    *(float *)(param_1 + 0x10) =
         *(float *)(&lbl_8216E498 + iStack_c * 4) * (lbl_82002AE0 - fVar1) +
         *(float *)(&lbl_8216E49C + iStack_c * 4) * fVar1;
    return uVar2;
  }
  *(float *)(param_1 + 0xc) = *param_3;
  return uVar2;
}

