void fn_82F20B58(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  int iVar10;
  __int64 lVar9;
  __int64 lVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iVar14;
  int *piVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  
  lVar11 = (__int64)(param_4 >> 2);
  if (0 < lVar11) {
    do {
      param_1 = param_2 * 2 + param_1;
      iVar14 = 0;
      piVar15 = (int *)0x831b8f30;
      do {
        bVar1 = *(unsigned char *)(param_1 + 4);
        bVar2 = *(unsigned char *)(param_1 + 5);
        uVar17 = (unsigned __int64)bVar1 - (unsigned __int64)bVar2;
        iVar7 = (int)uVar17;
        iVar6 = (int)((((unsigned __int64)*(unsigned char *)(param_1 + 3) - (unsigned __int64)*(unsigned char *)(param_1 + 6)) + 2 &
                      0xffffffff) << 1) - (iVar7 + (int)((uVar17 & 0xffffffff) << 2));
        uVar3 = iVar6 >> 3;
        uVar4 = iVar6 >> 0x1f;
        lVar16 = (__int64)(int)(uVar3 ^ uVar4) - (__int64)(int)uVar4;
        if ((int)lVar16 < param_3) {
          uVar8 = (unsigned __int64)*(unsigned char *)(param_1 + 3) - (unsigned __int64)*(unsigned char *)(param_1 + 2);
          uVar12 = (unsigned __int64)*(unsigned char *)(param_1 + 7) - (unsigned __int64)*(unsigned char *)(param_1 + 6);
          iVar6 = (int)uVar8 + (int)((uVar8 & 0xffffffff) << 2) +
                  (int)((((unsigned __int64)*(unsigned char *)(param_1 + 1) - (unsigned __int64)bVar1) + 2 & 0xffffffff) <<
                       1);
          iVar10 = (int)((((unsigned __int64)bVar2 - (unsigned __int64)*(unsigned char *)(param_1 + 8)) + 2 & 0xffffffff)
                        << 1) + (int)uVar12 + (int)((uVar12 & 0xffffffff) << 2);
          uVar4 = iVar10 >> 0x1f;
          uVar5 = iVar6 >> 0x1f;
          lVar13 = (__int64)(int)(iVar10 >> 3 ^ uVar4) - (__int64)(int)uVar4;
          lVar9 = (__int64)(int)(iVar6 >> 3 ^ uVar5) - (__int64)(int)uVar5;
          if ((int)lVar9 < (int)lVar13) {
            lVar13 = lVar9;
          }
          if ((int)lVar16 <= (int)lVar13) goto LAB_82f20ccc;
          lVar9 = (__int64)(iVar7 >> 1) + (unsigned __int64)(iVar7 < 0 && (uVar17 & 1) != 0);
          iVar7 = (int)lVar9;
          if (lVar9 < 1) {
            if (-1 < iVar7) goto LAB_82f20ccc;
            if (-1 < (int)uVar3) {
              iVar6 = (int)(lVar13 - lVar16) + (int)((lVar13 - lVar16 & 0xffffffffU) << 2) + 7 >> 3;
              lVar16 = (__int64)iVar6;
              if (iVar6 < iVar7) {
                lVar16 = lVar9;
              }
              goto LAB_82f20cb8;
            }
          }
          else if ((int)uVar3 < 0) {
            iVar6 = (int)(lVar16 - lVar13) + (int)((lVar16 - lVar13 & 0xffffffffU) << 2) >> 3;
            lVar16 = (__int64)iVar6;
            if (iVar7 < iVar6) {
              *(unsigned char *)(param_1 + 4) = bVar1 - (char)lVar9;
              *(unsigned char *)(param_1 + 5) = (char)lVar9 + bVar2;
            }
            else {
LAB_82f20cb8:
              *(unsigned char *)(param_1 + 4) = bVar1 - (char)lVar16;
              *(unsigned char *)(param_1 + 5) = (char)lVar16 + bVar2;
            }
          }
        }
        else {
LAB_82f20ccc:
          if (iVar14 == 0) {
            param_1 = param_2 * 2 + param_1;
            break;
          }
        }
        iVar7 = *piVar15;
        piVar15 = piVar15 + 1;
        param_1 = param_2 * iVar7 + param_1;
        iVar14 = iVar14 + 1;
      } while ((int)piVar15 < -0x7ce470c0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

