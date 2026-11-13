void fn_82C9CF48(int param_1,int param_2,int param_3,__int64 param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  char cVar14;
  unsigned __int64 uVar15;
  unsigned char *pbVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned char *pbVar19;
  unsigned char *pbVar20;
  unsigned char *pbVar21;
  
  if (0 < (int)param_4) {
    pbVar17 = (unsigned char *)(param_1 + 5);
    pbVar18 = (unsigned char *)(param_1 + 4);
    pbVar19 = (unsigned char *)(param_1 + 7);
    pbVar20 = (unsigned char *)(param_1 + 8);
    pbVar21 = (unsigned char *)(param_1 + 1);
    pbVar6 = (unsigned char *)(param_1 + 2);
    pbVar16 = (unsigned char *)(param_1 + 6);
    pbVar5 = (unsigned char *)(param_1 + 3);
    do {
      bVar1 = *pbVar18;
      bVar2 = *pbVar17;
      uVar10 = (unsigned __int64)bVar1 - (unsigned __int64)bVar2;
      iVar8 = (int)uVar10;
      uVar15 = (__int64)(iVar8 >> 1) + (unsigned __int64)(iVar8 < 0 && (uVar10 & 1) != 0);
      if (uVar15 != 0) {
        iVar8 = (int)((((unsigned __int64)*pbVar5 - (unsigned __int64)*pbVar16) + 2 & 0xffffffff) << 1) -
                (iVar8 + (int)((uVar10 & 0xffffffff) << 2));
        uVar3 = iVar8 >> 3;
        if ((((__int64)(int)uVar3 ^ uVar15) & 0x80000000) != 0) {
          uVar4 = iVar8 >> 0x1f;
          iVar8 = (uVar3 ^ uVar4) - uVar4;
          if (iVar8 < param_3) {
            uVar12 = (unsigned __int64)*pbVar5 - (unsigned __int64)*pbVar6;
            uVar10 = (unsigned __int64)*pbVar19 - (unsigned __int64)*pbVar16;
            iVar9 = (int)((((unsigned __int64)*pbVar21 - (unsigned __int64)bVar1) + 2 & 0xffffffff) << 1) +
                    (int)uVar12 + (int)((uVar12 & 0xffffffff) << 2);
            iVar7 = (int)((((unsigned __int64)bVar2 - (unsigned __int64)*pbVar20) + 2 & 0xffffffff) << 1) +
                    (int)uVar10 + (int)((uVar10 & 0xffffffff) << 2);
            uVar3 = iVar7 >> 0x1f;
            uVar4 = iVar9 >> 0x1f;
            iVar7 = (iVar7 >> 3 ^ uVar3) - uVar3;
            iVar9 = (iVar9 >> 3 ^ uVar4) - uVar4;
            if (iVar9 < iVar7) {
              iVar7 = iVar9;
            }
            if (iVar7 < iVar8) {
              iVar8 = (iVar8 - iVar7) * 5 >> 3;
              uVar10 = (unsigned __int64)((int)uVar15 >> 0x1f);
              lVar11 = (uVar15 ^ uVar10) - uVar10;
              lVar13 = (__int64)iVar8;
              if ((int)lVar11 <= iVar8) {
                lVar13 = lVar11;
              }
              cVar14 = (char)lVar13;
              if (bVar1 < bVar2) {
                cVar14 = -cVar14;
              }
              *pbVar18 = bVar1 - cVar14;
              *pbVar17 = cVar14 + bVar2;
            }
          }
        }
      }
      pbVar5 = pbVar5 + param_2;
      pbVar16 = pbVar16 + param_2;
      pbVar6 = pbVar6 + param_2;
      pbVar21 = pbVar21 + param_2;
      pbVar20 = pbVar20 + param_2;
      pbVar19 = pbVar19 + param_2;
      pbVar18 = pbVar18 + param_2;
      pbVar17 = pbVar17 + param_2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

