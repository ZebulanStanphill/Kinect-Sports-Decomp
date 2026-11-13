extern unsigned int lbl_820FDE78;


void fn_82C9DAC8(int param_1,int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  char cVar15;
  int iVar16;
  unsigned __int64 uVar17;
  
  lVar12 = (__int64)(param_4 >> 2);
  if (0 < lVar12) {
    do {
      param_1 = param_2 * 2 + param_1;
      iVar16 = 0;
      do {
        bVar1 = *(unsigned char *)(param_1 + 4);
        bVar2 = *(unsigned char *)(param_1 + 5);
        uVar10 = (unsigned __int64)bVar1 - (unsigned __int64)bVar2;
        iVar7 = (int)uVar10;
        uVar17 = (__int64)(iVar7 >> 1) + (unsigned __int64)(iVar7 < 0 && (uVar10 & 1) != 0);
        if (uVar17 == 0) {
LAB_82c9dc14:
          if (iVar16 == 0) {
            param_1 = param_2 * 2 + param_1;
            break;
          }
        }
        else {
          iVar7 = (int)((((unsigned __int64)*(unsigned char *)(param_1 + 3) - (unsigned __int64)*(unsigned char *)(param_1 + 6)) + 2
                        & 0xffffffff) << 1) - (iVar7 + (int)((uVar10 & 0xffffffff) << 2));
          uVar3 = iVar7 >> 3;
          uVar4 = iVar7 >> 0x1f;
          iVar7 = (uVar3 ^ uVar4) - uVar4;
          if (param_3 <= iVar7) goto LAB_82c9dc14;
          uVar10 = (unsigned __int64)*(unsigned char *)(param_1 + 3) - (unsigned __int64)*(unsigned char *)(param_1 + 2);
          uVar13 = (unsigned __int64)*(unsigned char *)(param_1 + 7) - (unsigned __int64)*(unsigned char *)(param_1 + 6);
          iVar9 = (int)uVar10 + (int)((uVar10 & 0xffffffff) << 2) +
                  (int)((((unsigned __int64)*(unsigned char *)(param_1 + 1) - (unsigned __int64)bVar1) + 2 & 0xffffffff) <<
                       1);
          iVar8 = (int)((((unsigned __int64)bVar2 - (unsigned __int64)*(unsigned char *)(param_1 + 8)) + 2 & 0xffffffff) <<
                       1) + (int)uVar13 + (int)((uVar13 & 0xffffffff) << 2);
          uVar4 = iVar8 >> 0x1f;
          uVar5 = iVar9 >> 0x1f;
          iVar8 = (iVar8 >> 3 ^ uVar4) - uVar4;
          iVar9 = (iVar9 >> 3 ^ uVar5) - uVar5;
          if (iVar9 < iVar8) {
            iVar8 = iVar9;
          }
          if (iVar7 <= iVar8) goto LAB_82c9dc14;
          if ((((__int64)(int)uVar3 ^ uVar17) & 0x80000000) != 0) {
            iVar7 = (iVar7 - iVar8) * 5 >> 3;
            uVar10 = (unsigned __int64)((int)uVar17 >> 0x1f);
            lVar11 = (uVar17 ^ uVar10) - uVar10;
            lVar14 = (__int64)iVar7;
            if ((int)lVar11 <= iVar7) {
              lVar14 = lVar11;
            }
            cVar15 = (char)lVar14;
            if (bVar1 < bVar2) {
              cVar15 = -cVar15;
            }
            *(unsigned char *)(param_1 + 4) = bVar1 - cVar15;
            *(unsigned char *)(param_1 + 5) = cVar15 + bVar2;
          }
        }
        pcVar6 = &lbl_820FDE78 + iVar16;
        iVar16 = iVar16 + 1;
        param_1 = *pcVar6 * param_2 + param_1;
      } while (iVar16 < 4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

