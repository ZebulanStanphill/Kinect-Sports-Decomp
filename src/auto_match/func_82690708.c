extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_8200E2B0;


unsigned int fn_82690708(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  uVar7 = param_2 >> 5;
  uVar8 = 0;
  uVar1 = -param_2;
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else if (uVar7 < 0x10000) {
    if ((uVar7 & 0x7ff0000) == 0) {
      if ((uVar7 & 0xff00) == 0) {
        uVar7 = (unsigned int)(unsigned char)(&lbl_8200E1B0)[uVar7 & 0xff];
      }
      else {
        uVar7 = (unsigned char)(&lbl_8200E1B0)[param_2 >> 0xd & 0xff] + 8;
      }
    }
    else if ((uVar7 & 0x7000000) == 0) {
      uVar7 = (unsigned char)(&lbl_8200E1B0)[param_2 >> 0x15 & 0xff] + 0x10;
    }
    else {
      uVar7 = (unsigned char)(&lbl_8200E1B0)[param_2 >> 0x1d] + 0x18;
    }
    uVar7 = (param_2 >> ((uVar7 & 0xff) + 4 & 0x3f) & 1) + (uVar7 & 0xff) * 2;
  }
  else {
    uVar7 = 0x1f;
  }
  uVar5 = param_1[uVar7 + 1];
  uVar6 = uVar5;
  if (uVar5 != 0) {
    uVar3 = (unsigned __int64)(param_2 << (-(unsigned int)(uVar7 < 0x1f) & 0x1c - (uVar7 >> 1) & 0x3f));
    uVar2 = 0;
    while ((uVar4 = *(int *)(uVar5 + 0x10) - param_2, uVar1 <= uVar4 ||
           (uVar6 = uVar5, uVar8 = uVar5, uVar1 = uVar4, uVar4 != 0))) {
      uVar4 = *(unsigned int *)(uVar5 + 0x1c);
      uVar5 = *(unsigned int *)(((int)(uVar3 >> 0x1f) + 6) * 4 + uVar5);
      uVar6 = uVar2;
      if ((uVar4 != 0) && (uVar4 != uVar5)) {
        uVar6 = uVar4;
      }
      if (uVar5 == 0) break;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
      uVar2 = uVar6;
    }
    if (uVar6 != 0) goto LAB_826908ec;
    if (uVar8 != 0) {
      return uVar8;
    }
  }
  uVar3 = (unsigned __int64)(unsigned int)(1 << (uVar7 + 1 & 0x3f));
  uVar3 = (-uVar3 | uVar3) & (unsigned __int64)*param_1;
  if (uVar3 != 0) {
    if ((uVar3 & 0xffff) == 0) {
      if ((uVar3 & 0xff0000) == 0) {
        uVar7 = (unsigned char)(&lbl_8200E2B0)[(unsigned char)(uVar3 >> 0x18)] + 0x18;
      }
      else {
        uVar7 = (unsigned char)(&lbl_8200E2B0)[(unsigned short)(uVar3 >> 0x10) & 0xff] + 0x10;
      }
    }
    else if ((uVar3 & 0xff) == 0) {
      uVar7 = (unsigned char)(&lbl_8200E2B0)[(unsigned int)uVar3 >> 8 & 0xff] + 8;
    }
    else {
      uVar7 = (unsigned int)(unsigned char)(&lbl_8200E2B0)[(int)(uVar3 & 0xff)];
    }
    uVar6 = param_1[(uVar7 & 0xff) + 1];
  }
  for (; uVar6 != 0; uVar6 = *(unsigned int *)(((*(int *)(uVar6 + 0x18) == 0) + 6) * 4 + uVar6)) {
LAB_826908ec:
    uVar7 = *(int *)(uVar6 + 0x10) - param_2;
    if (uVar7 < uVar1) {
      uVar8 = uVar6;
      uVar1 = uVar7;
    }
  }
  return uVar8;
}

