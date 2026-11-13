void fn_82F20998(unsigned char *param_1,int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned char *pbVar10;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iVar14;
  int *piVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned char *pbVar18;
  int iVar19;
  
  lVar11 = (__int64)(param_4 >> 2);
  if (0 < lVar11) {
    do {
      param_1 = param_1 + 2;
      iVar14 = 0;
      piVar15 = (int *)0x831b8f30;
      do {
        pbVar18 = param_1 + -param_2;
        bVar1 = *param_1;
        pbVar10 = pbVar18 + -param_2;
        bVar2 = *pbVar18;
        uVar17 = (unsigned __int64)bVar2 - (unsigned __int64)bVar1;
        iVar7 = (int)uVar17;
        iVar19 = (int)((((unsigned __int64)*pbVar10 - (unsigned __int64)param_1[param_2]) + 2 & 0xffffffff) << 1)
                 - (iVar7 + (int)((uVar17 & 0xffffffff) << 2));
        uVar3 = iVar19 >> 3;
        uVar4 = iVar19 >> 0x1f;
        lVar16 = (__int64)(int)(uVar3 ^ uVar4) - (__int64)(int)uVar4;
        if ((int)lVar16 < param_3) {
          uVar8 = (unsigned __int64)*pbVar10 - (unsigned __int64)pbVar10[-param_2];
          uVar12 = (unsigned __int64)param_1[param_2 * 2] - (unsigned __int64)param_1[param_2];
          iVar6 = (int)((((unsigned __int64)(pbVar10 + -param_2)[-param_2] - (unsigned __int64)bVar2) + 2 &
                        0xffffffff) << 1) + (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2);
          iVar19 = (int)((((unsigned __int64)bVar1 - (unsigned __int64)(param_1 + param_2 * 2)[param_2]) + 2 &
                         0xffffffff) << 1) + (int)uVar12 + (int)((uVar12 & 0xffffffff) << 2);
          uVar4 = iVar19 >> 0x1f;
          uVar5 = iVar6 >> 0x1f;
          lVar13 = (__int64)(int)(iVar19 >> 3 ^ uVar4) - (__int64)(int)uVar4;
          lVar9 = (__int64)(int)(iVar6 >> 3 ^ uVar5) - (__int64)(int)uVar5;
          if ((int)lVar9 < (int)lVar13) {
            lVar13 = lVar9;
          }
          if ((int)lVar16 <= (int)lVar13) goto LAB_82f20b20;
          lVar9 = (__int64)(iVar7 >> 1) + (unsigned __int64)(iVar7 < 0 && (uVar17 & 1) != 0);
          iVar7 = (int)lVar9;
          if (lVar9 < 1) {
            if (-1 < iVar7) goto LAB_82f20b20;
            if (-1 < (int)uVar3) {
              iVar19 = (int)(lVar13 - lVar16) + (int)((lVar13 - lVar16 & 0xffffffffU) << 2) + 7 >> 3
              ;
              lVar16 = (__int64)iVar19;
              if (iVar19 < iVar7) {
                lVar16 = lVar9;
              }
              goto LAB_82f20b0c;
            }
          }
          else if ((int)uVar3 < 0) {
            iVar19 = (int)(lVar16 - lVar13) + (int)((lVar16 - lVar13 & 0xffffffffU) << 2) >> 3;
            lVar16 = (__int64)iVar19;
            if (iVar7 < iVar19) {
              *pbVar18 = bVar2 - (char)lVar9;
              *param_1 = (char)lVar9 + bVar1;
            }
            else {
LAB_82f20b0c:
              *pbVar18 = bVar2 - (char)lVar16;
              *param_1 = (char)lVar16 + bVar1;
            }
          }
        }
        else {
LAB_82f20b20:
          if (iVar14 == 0) {
            param_1 = param_1 + 2;
            break;
          }
        }
        iVar7 = *piVar15;
        piVar15 = piVar15 + 1;
        param_1 = param_1 + iVar7;
        iVar14 = iVar14 + 1;
      } while ((int)piVar15 < -0x7ce470c0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

