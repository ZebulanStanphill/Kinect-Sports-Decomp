extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_82089FC0;
extern unsigned int lbl_8217E1C4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_c;


unsigned __int64 fn_83056DE8(int param_1,unsigned short param_2,float *param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_c;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  uVar2 = 1;
  if (param_2 < 5) {
    if (param_2 == 1) {
      fVar1 = *param_3;
      *(float *)(param_1 + 8) = fVar1;
      if ((fVar1 < lbl_8217E1C4) || (lbl_821AAD20 < fVar1)) {
        *(float *)(param_1 + 8) = lbl_821AAD20;
        *(unsigned char *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else if (param_2 == 2) {
      fVar1 = *param_3;
      *(float *)(param_1 + 0xc) = fVar1;
      if ((fVar1 < lbl_821AAD20) || (lbl_82005748 < fVar1)) {
        *(float *)(param_1 + 0xc) = lbl_821AAD20;
        *(unsigned char *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else if (param_2 == 3) {
      fVar1 = *param_3;
      *(float *)(param_1 + 0x10) = fVar1;
      if ((fVar1 < lbl_82002AE0) || (lbl_82089FC0 < fVar1)) {
        *(unsigned int *)(param_1 + 0x10) = lbl_8200D898;
        *(unsigned char *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else if (param_2 == 0) {
      fVar1 = *param_3;
      *(float *)(param_1 + 4) = fVar1;
      if ((fVar1 < lbl_8217E1C4) || (lbl_821AAD20 < fVar1)) {
        *(float *)(param_1 + 4) = lbl_821AAD20;
        *(unsigned char *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
    else {
      uStack_c = (int)(__int64)*param_3;
      *(int *)(param_1 + 0x14) = uStack_c;
      if ((uStack_c < 0) || (5 < uStack_c)) {
        *(unsigned int *)(param_1 + 0x14) = 0;
        *(unsigned char *)(param_1 + 0x18) = 1;
        return uVar2;
      }
    }
  }
  else {
    uVar2 = 0x1f;
  }
  *(unsigned char *)(param_1 + 0x18) = 1;
  return uVar2;
}

