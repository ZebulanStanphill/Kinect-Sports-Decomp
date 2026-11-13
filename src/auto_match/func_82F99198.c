typedef unsigned char bool;
extern int fn_82F655D8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern float lbl_82005718;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82011630;
extern unsigned int lbl_82015618;
extern unsigned int lbl_8207F25C;
extern float lbl_8216C694;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F99198(int param_1,unsigned short param_2,float *param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  if (param_3 == (float *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    uVar2 = 1;
    if (param_2 < 6) {
      if (param_2 == 1) {
        fVar1 = *param_3;
        *(float *)(param_1 + 8) = fVar1;
        if ((fVar1 < lbl_821AAD20) || (lbl_82005748 < fVar1)) {
          *(float *)(param_1 + 8) = lbl_821AAD20;
        }
        *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * lbl_8216C694;
      }
      else if (param_2 == 2) {
        fVar1 = *param_3;
        *(float *)(param_1 + 0xc) = fVar1;
        if ((fVar1 < lbl_821AAD20) || (lbl_82005748 < fVar1)) {
          *(unsigned int *)(param_1 + 0xc) = lbl_8207F25C;
        }
        *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) * lbl_8216C694;
      }
      else if (param_2 == 3) {
        fVar1 = *param_3;
        *(float *)(param_1 + 0x10) = fVar1;
        if ((fVar1 < lbl_8216C698) || (lbl_821AAD20 < fVar1)) {
          *(float *)(param_1 + 0x10) = lbl_821AAD20;
        }
        dVar3 = (double)fn_82F655D8(lbl_82015618,
                                          (double)(*(float *)(param_1 + 0x10) * lbl_82005718));
        *(float *)(param_1 + 0x10) = (float)dVar3;
      }
      else if (param_2 == 4) {
        *(bool *)(param_1 + 0x14) = *param_3 != lbl_821AAD20;
      }
      else if (param_2 == 0) {
        dVar3 = (double)*param_3;
        *(float *)(param_1 + 4) = *param_3;
        if ((dVar3 < lbl_82011630) || ((double)lbl_82002AE0 < dVar3)) {
          *(unsigned int *)(param_1 + 4) = lbl_82002C5C;
        }
      }
      else {
        *(unsigned char *)(param_1 + 0x15) = *(unsigned char *)param_3;
      }
    }
    else {
      uVar2 = 0x1f;
    }
  }
  return uVar2;
}

