extern unsigned int lbl_820FDE78;


void fn_82C9D938(unsigned char *param_1,int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  int iVar10;
  unsigned char *pbVar12;
  __int64 lVar11;
  __int64 lVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  char cVar16;
  int iVar17;
  unsigned char *pbVar18;
  unsigned __int64 uVar19;
  
  lVar13 = (__int64)(param_4 >> 2);
  if (0 < lVar13) {
    do {
      param_1 = param_1 + 2;
      iVar17 = 0;
      do {
        pbVar18 = param_1 + -param_2;
        bVar1 = *param_1;
        pbVar12 = pbVar18 + -param_2;
        bVar2 = *pbVar18;
        uVar9 = (unsigned __int64)bVar2 - (unsigned __int64)bVar1;
        iVar10 = (int)uVar9;
        uVar19 = (__int64)(iVar10 >> 1) + (unsigned __int64)(iVar10 < 0 && (uVar9 & 1) != 0);
        if (uVar19 == 0) {
LAB_82c9da98:
          if (iVar17 == 0) {
            param_1 = param_1 + 2;
            break;
          }
        }
        else {
          iVar10 = (int)((((unsigned __int64)*pbVar12 - (unsigned __int64)param_1[param_2]) + 2 & 0xffffffff) << 1
                        ) - (iVar10 + (int)((uVar9 & 0xffffffff) << 2));
          uVar3 = iVar10 >> 3;
          uVar4 = iVar10 >> 0x1f;
          iVar10 = (uVar3 ^ uVar4) - uVar4;
          if (param_3 <= iVar10) goto LAB_82c9da98;
          uVar9 = (unsigned __int64)*pbVar12 - (unsigned __int64)pbVar12[-param_2];
          uVar14 = (unsigned __int64)param_1[param_2 * 2] - (unsigned __int64)param_1[param_2];
          iVar8 = (int)((((unsigned __int64)(pbVar12 + -param_2)[-param_2] - (unsigned __int64)bVar2) + 2 &
                        0xffffffff) << 1) + (int)uVar9 + (int)((uVar9 & 0xffffffff) << 2);
          iVar7 = (int)((((unsigned __int64)bVar1 - (unsigned __int64)(param_1 + param_2 * 2)[param_2]) + 2 &
                        0xffffffff) << 1) + (int)uVar14 + (int)((uVar14 & 0xffffffff) << 2);
          uVar4 = iVar7 >> 0x1f;
          uVar5 = iVar8 >> 0x1f;
          iVar7 = (iVar7 >> 3 ^ uVar4) - uVar4;
          iVar8 = (iVar8 >> 3 ^ uVar5) - uVar5;
          if (iVar8 < iVar7) {
            iVar7 = iVar8;
          }
          if (iVar10 <= iVar7) goto LAB_82c9da98;
          if ((((__int64)(int)uVar3 ^ uVar19) & 0x80000000) != 0) {
            iVar10 = (iVar10 - iVar7) * 5 >> 3;
            uVar9 = (unsigned __int64)((int)uVar19 >> 0x1f);
            lVar11 = (uVar19 ^ uVar9) - uVar9;
            lVar15 = (__int64)iVar10;
            if ((int)lVar11 <= iVar10) {
              lVar15 = lVar11;
            }
            cVar16 = (char)lVar15;
            if (bVar2 < bVar1) {
              cVar16 = -cVar16;
            }
            *pbVar18 = bVar2 - cVar16;
            *param_1 = cVar16 + bVar1;
          }
        }
        pcVar6 = &lbl_820FDE78 + iVar17;
        iVar17 = iVar17 + 1;
        param_1 = param_1 + *pcVar6;
      } while (iVar17 < 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}

