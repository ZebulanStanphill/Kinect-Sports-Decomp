typedef unsigned char bool;
#define true 1


void fn_82E674C0(unsigned char *param_1,__int64 param_2,int param_3,unsigned __int64 param_4)

{
  bool bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  int iVar5;
  __int64 lVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned char *pbVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  
  uVar10 = 0;
  iVar8 = (int)param_2 + 7 >> 3;
  iVar5 = (int)param_4;
  pbVar9 = param_1 + iVar8;
  pbVar13 = (unsigned char *)((iVar5 >> 3) + (unsigned int)(iVar5 < 0 && (param_4 & 7) != 0) + iVar8 + param_3);
  lVar6 = param_4 + ((__int64)(iVar5 >> 3) + (unsigned __int64)(iVar5 < 0 && (param_4 & 7) != 0) &
                    0x1fffffff) * -8;
  param_2 = param_2 + lVar6;
  uVar3 = (unsigned int)lVar6;
  uVar7 = 8 - uVar3;
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)(param_2 - 1U);
    iVar5 = iVar5 + ((iVar5 >> 3) + (unsigned int)(iVar5 < 0 && (param_2 - 1U & 7) != 0)) * -8 + 1;
  }
  bVar4 = (unsigned char)((0xff >> (8U - iVar5 & 0x3f)) << (8U - iVar5 & 0x3f));
  if ((int)uVar7 < 8) {
    bVar1 = true;
    pbVar14 = pbVar13;
    if (param_1 < pbVar9) {
      pbVar12 = pbVar9 + -1;
      bVar2 = *pbVar12;
      uVar10 = (unsigned int)bVar2;
      bVar1 = (int)param_2 <= iVar8 << 3;
      if (!bVar1) {
        *pbVar13 = (bVar2 << (uVar7 & 0x3f) | (unsigned char)(0 >> (uVar3 & 0x3f))) & bVar4 |
                   *pbVar13 & ~bVar4;
      }
      pbVar14 = pbVar13 + -1;
      if (param_1 < pbVar12) {
        if (bVar1) {
          pbVar12 = pbVar9 + -2;
          uVar10 = (unsigned int)*pbVar12;
          *pbVar14 = (*pbVar12 << (uVar7 & 0x3f) | bVar2 >> (uVar3 & 0x3f)) & bVar4 |
                     *pbVar14 & ~bVar4;
          pbVar14 = pbVar13 + -2;
        }
        bVar1 = !bVar1 && bVar1;
        if (param_1 < pbVar12) {
          iVar8 = (int)pbVar12 - (int)param_1;
          uVar11 = uVar10;
          do {
            pbVar12 = pbVar12 + -1;
            uVar10 = (unsigned int)*pbVar12;
            *pbVar14 = *pbVar12 << (uVar7 & 0x3f) | (unsigned char)(uVar11 >> (uVar3 & 0x3f));
            pbVar14 = pbVar14 + -1;
            iVar8 = iVar8 + -1;
            uVar11 = uVar10;
          } while (iVar8 != 0);
        }
      }
    }
    bVar2 = (unsigned char)(0xff << (uVar7 & 0x3f)) & *pbVar14;
    if (bVar1) {
      *pbVar14 = ((unsigned char)(uVar10 >> (uVar3 & 0x3f)) | bVar2) & bVar4 | *pbVar14 & ~bVar4;
    }
    else {
      *pbVar14 = (unsigned char)(uVar10 >> (uVar3 & 0x3f)) | bVar2;
    }
  }
  else {
    pbVar14 = pbVar13 + -1;
    if (param_1 <= pbVar9 + -1) {
      bVar2 = *pbVar14;
      *pbVar14 = bVar2 & ~bVar4;
      *pbVar14 = pbVar9[-1] & bVar4 | bVar2 & ~bVar4;
      if (param_1 <= pbVar9 + -2) {
        pbVar14 = pbVar9 + -1;
        pbVar9 = pbVar9 + -2 + (1 - (int)param_1);
        pbVar13 = pbVar13 + -1;
        do {
          pbVar14 = pbVar14 + -1;
          pbVar13 = pbVar13 + -1;
          *pbVar13 = *pbVar14;
          pbVar9 = pbVar9 + -1;
        } while (pbVar9 != (unsigned char *)0x0);
      }
    }
  }
  return;
}

