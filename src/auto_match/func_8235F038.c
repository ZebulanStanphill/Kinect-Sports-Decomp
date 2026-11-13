typedef unsigned char bool;
extern int fn_8235F3E8();
extern int fn_82547C80();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8235F038(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar11;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar12;
  double dVar13;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x2be4));
  *(float *)(param_2 + 0x2be4) = fVar1;
  iVar12 = *(int *)(param_2 + 0x2b2c) * 0x68 + param_2;
  fVar2 = *(float *)(iVar12 + 0x1604);
  if (fVar2 < fVar1) {
    *(float *)(param_2 + 0x2be4) = fVar1 - fVar2;
    uVar3 = *(unsigned int *)(iVar12 + 0x1600);
    if (uVar3 == 0) {
      uVar9 = (unsigned __int64)*(unsigned int *)(param_2 + 0x2be8) + 1;
      uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0x644) - (unsigned __int64)*(unsigned int *)(param_2 + 0x640);
      lVar10 = uVar9 - (__int64)(int)((uVar9 & 0xffffffff) / (uVar8 & 0xffffffff)) *
                       (__int64)(int)uVar8;
      *(int *)(param_2 + 0x2be8) = (int)lVar10;
      uVar8 = lVar10 + (unsigned __int64)*(unsigned int *)(param_2 + 0x640);
    }
    else {
      if (uVar3 != 1) {
        if (2 < uVar3) {
          return;
        }
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        dVar13 = (double)lbl_821CA460;
        for (uVar8 = (unsigned __int64)
                     (unsigned int)(int)((double)(float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                0x3f800000) - dVar13) *
                                 (double)lbl_8218E8FC + dVar13); uVar8 != 0; uVar8 = uVar8 - 1) {
          lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
          uVar4 = *(unsigned int *)(param_2 + 0x648);
          uVar3 = (unsigned int)((float)(__int64)(*(int *)(param_2 + 0x644) - *(int *)(param_2 + 0x640)) *
                         (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar13) +
                        (float)(__int64)*(int *)(param_2 + 0x640));
          uVar11 = uVar3 - (uVar3 / uVar4) * uVar4;
          iVar7 = (uVar11 & 0xff) * 4;
          iVar5 = iVar7 >> 3;
          iVar12 = **(int **)((uVar3 / uVar4 + 0xafb) * 4 + param_2);
          fn_82547C80(iVar12 + 0xd0,uVar11 & 0xff,
                       (*(unsigned char *)(iVar5 + iVar12 + 0xd4) >> (iVar7 + iVar5 * -8 & 0x3fU) & 0xf) == 0
                      );
        }
        return;
      }
      bVar6 = *(int *)(param_2 + 0x2be8) == 0;
      *(unsigned int *)(param_2 + 0x2be8) = (unsigned int)bVar6;
      if (bVar6) {
        uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0x644);
      }
      else {
        uVar8 = (unsigned __int64)*(unsigned int *)(param_2 + 0x640);
      }
    }
    fn_8235F3E8(param_2,uVar8);
  }
  return;
}

