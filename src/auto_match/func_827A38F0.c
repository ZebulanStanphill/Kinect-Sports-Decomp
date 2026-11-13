typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_68;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_8279ADE8();
extern int fn_8279AE60();
extern int fn_8279AED8();
extern int fn_827A1B60();
extern int fn_827A1F10();
extern int fn_827A3440();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_820885C8;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_827A38F0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned char bVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  char cVar9;
  unsigned int uVar8;
  unsigned __int64 uVar10;
  unsigned short uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  double dVar15;
  __int64 lStack_70;
  unsigned int auStack_68 [2];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  *(unsigned int *)(param_1 + 0x3c) = param_2;
  *(short *)(*(int *)(param_1 + 0xc) + 0x34) = *(short *)(*(int *)(param_1 + 0xc) + 0x34) + -1;
  iVar5 = *(int *)(param_1 + 0xc);
  uVar11 = *(unsigned short *)(iVar5 + 0x68);
  if ((uVar11 & 1) == 0) {
    uVar11 = uVar11 | 8;
  }
  else {
    uVar11 = uVar11 & 0xfff7;
  }
  *(unsigned short *)(iVar5 + 0x68) = uVar11;
  *(unsigned __int64 *)(iVar5 + 0x38) = lbl_82005710;
  iVar5 = *(int *)(param_1 + 0xc);
  bVar2 = *(unsigned char *)(iVar5 + 0x68);
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30) + (unsigned __int64)*(unsigned int *)(param_1 + 0x3c);
  dVar15 = (double)lbl_821AAD20;
  fStack_60 = lbl_821AAD20;
  fStack_5c = lbl_821AAD20;
  fStack_58 = lbl_821AAD20;
  fStack_54 = lbl_821AAD20;
  uVar13 = 0;
  cVar9 = fn_827A3440(iVar5,uVar10,&fStack_60,auStack_68,0,0,&lStack_70);
  if (cVar9 != '\0') {
    iVar4 = *(int *)(iVar5 + 8);
    fVar6 = fStack_58;
    if ((bVar2 & 1) == 0) {
      fVar6 = fStack_60 + lbl_8200571C;
    }
    fVar3 = *(float *)(iVar4 + 0x44);
    if ((((fVar3 < fVar6) || (*(float *)(iVar4 + 0x48) < fStack_54)) ||
        (fStack_60 < *(float *)(iVar4 + 0x3c))) ||
       (bVar7 = true, fStack_5c < *(float *)(iVar4 + 0x40))) {
      bVar7 = false;
    }
    if ((!bVar7) && ((*(unsigned char *)(iVar4 + 0x13c) & 0x30) == 0)) {
      uVar8 = *(unsigned int *)(iVar4 + 0x4c);
      uVar14 = (unsigned __int64)uVar8;
      uVar12 = -(unsigned __int64)((((unsigned __int64)(lStack_70) >> 0) & 0xFFFFFFFF) == 0) & 0x4b0;
      if (fVar6 <= fVar3) {
        if (fStack_60 < *(float *)(iVar4 + 0x3c)) {
          uVar1 = (unsigned int)(*(float *)(iVar4 + 0x3c) - fStack_60);
          lStack_70 = (__int64)(int)uVar1;
          uVar12 = (uVar14 - uVar1) - uVar12;
          uVar14 = ((uVar12 & 0xffffffff) >> 0x1f) - 1 & uVar12;
        }
      }
      else {
        fStack_50 = (float)dVar15;
        fStack_4c = (float)dVar15;
        fStack_48 = (float)dVar15;
        fStack_44 = (float)dVar15;
        uVar1 = (unsigned int)((fStack_60 - fVar3) + (float)(__int64)(int)uVar12);
        lStack_70 = (__int64)(int)uVar1;
        uVar14 = uVar1 + uVar14;
        if (((uVar10 & 0xffffffff) != 0) &&
           (cVar9 = fn_827A1B60(iVar4,&fStack_50,uVar10 - 1), cVar9 != '\0')) {
          uVar1 = (unsigned int)(fStack_50 - lbl_820885C8);
          lStack_70 = (__int64)(int)uVar1;
          if ((int)uVar1 < (int)uVar14) {
            uVar14 = (unsigned __int64)uVar1;
          }
        }
        if ((int)uVar14 < 0) {
          uVar14 = 0;
        }
      }
      if (((*(unsigned char *)(*(int *)(iVar5 + 8) + 0x13d) & 8) == 0) || ((int)uVar14 < (int)uVar8)) {
        uVar13 = fn_8279ADE8(*(int *)(iVar5 + 8),uVar14);
      }
      if (auStack_68[0] < *(unsigned int *)(*(int *)(iVar5 + 8) + 0x38)) {
        uVar10 = fn_8279AE60(*(int *)(iVar5 + 8),auStack_68[0]);
      }
      else {
        uVar8 = fn_827A1F10();
        if (auStack_68[0] <= uVar8) {
          return uVar13;
        }
        uVar10 = fn_8279AED8(*(unsigned int *)(iVar5 + 8),auStack_68[0]);
      }
      uVar13 = uVar10 & 0xff | uVar13 & 0xff;
    }
  }
  return uVar13;
}

