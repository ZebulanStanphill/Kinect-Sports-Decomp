extern unsigned int lbl_82196288;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


int * fn_822A6C30(int *param_1,__int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  
  uVar1 = (unsigned int)param_2;
  uVar5 = 0;
  piVar2 = param_1;
  if (uVar1 != 0) {
    do {
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
        uVar5 = uVar5 + 1;
      }
      param_2 = param_2 + -1;
      piVar2 = piVar2 + 1;
    } while (param_2 != 0);
  }
  uVar6 = (unsigned int)uVar5;
  if ((param_3 == (unsigned int *)0x0) || ((uVar5 & 0xffffffff) < 2)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar6 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                  (float)(__int64)(int)uVar6);
  }
  else {
    uVar4 = *param_3;
    if (((int)uVar4 < 0) || ((int)uVar6 <= (int)uVar4)) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar6 = (unsigned int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                    (float)(__int64)(int)uVar6);
    }
    else {
      uVar6 = (int)((uVar5 & 0xffffffff) >> 0x1f) + -1 + (unsigned int)(uVar5 == 0) & uVar6;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar3 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                    (float)(__int64)(int)(uVar6 - 1) + lbl_821CA460) + uVar4;
      uVar6 = iVar3 - (iVar3 / (int)uVar6) * uVar6;
    }
  }
  uVar4 = 0;
  piVar2 = param_1;
  if (uVar1 != 0) {
    do {
      if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (uVar4 == uVar6)) {
        if (param_3 != (unsigned int *)0x0) {
          *param_3 = uVar6;
        }
        return param_1 + uVar4;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < uVar1);
  }
  return &lbl_82196288;
}

