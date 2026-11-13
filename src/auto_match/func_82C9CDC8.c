void fn_82C9CDC8(unsigned char *param_1,unsigned int param_2,int param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  char cVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned __int64 uVar17;
  unsigned char *pbVar18;
  
  if (0 < (int)param_4) {
    pbVar13 = param_1 + -param_2;
    pbVar18 = param_1 + param_2 * 2;
    pbVar16 = param_1 + (param_2 & 0x7fffffff) * -2;
    pbVar15 = param_1 + param_2 * -3;
    pbVar14 = param_1 + (param_2 & 0x3fffffff) * -4;
    do {
      bVar1 = *pbVar13;
      bVar2 = *param_1;
      uVar8 = (unsigned __int64)bVar1 - (unsigned __int64)bVar2;
      iVar5 = (int)uVar8;
      uVar17 = (__int64)(iVar5 >> 1) + (unsigned __int64)(iVar5 < 0 && (uVar8 & 1) != 0);
      if (uVar17 != 0) {
        iVar5 = (int)((((unsigned __int64)*pbVar16 - (unsigned __int64)param_1[param_2]) + 2 & 0xffffffff) << 1) -
                (iVar5 + (int)((uVar8 & 0xffffffff) << 2));
        uVar3 = iVar5 >> 3;
        if ((((__int64)(int)uVar3 ^ uVar17) & 0x80000000) != 0) {
          uVar4 = iVar5 >> 0x1f;
          iVar5 = (uVar3 ^ uVar4) - uVar4;
          if (iVar5 < param_3) {
            uVar8 = (unsigned __int64)*pbVar16 - (unsigned __int64)*pbVar15;
            uVar10 = (unsigned __int64)*pbVar18 - (unsigned __int64)param_1[param_2];
            iVar7 = (int)((((unsigned __int64)*pbVar14 - (unsigned __int64)bVar1) + 2 & 0xffffffff) << 1) +
                    (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
            iVar6 = (int)((((unsigned __int64)bVar2 - (unsigned __int64)pbVar18[param_2]) + 2 & 0xffffffff) << 1)
                    + (int)uVar10 + (int)((uVar10 & 0xffffffff) << 2);
            uVar3 = iVar6 >> 0x1f;
            uVar4 = iVar7 >> 0x1f;
            iVar6 = (iVar6 >> 3 ^ uVar3) - uVar3;
            iVar7 = (iVar7 >> 3 ^ uVar4) - uVar4;
            if (iVar7 < iVar6) {
              iVar6 = iVar7;
            }
            if (iVar6 < iVar5) {
              iVar5 = (iVar5 - iVar6) * 5 >> 3;
              uVar8 = (unsigned __int64)((int)uVar17 >> 0x1f);
              lVar9 = (uVar17 ^ uVar8) - uVar8;
              lVar11 = (__int64)iVar5;
              if ((int)lVar9 <= iVar5) {
                lVar11 = lVar9;
              }
              cVar12 = (char)lVar11;
              if (bVar1 < bVar2) {
                cVar12 = -cVar12;
              }
              *pbVar13 = bVar1 - cVar12;
              *param_1 = cVar12 + bVar2;
            }
          }
        }
      }
      param_1 = param_1 + 1;
      pbVar18 = pbVar18 + 1;
      pbVar13 = pbVar13 + 1;
      pbVar16 = pbVar16 + 1;
      pbVar15 = pbVar15 + 1;
      pbVar14 = pbVar14 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

