#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


int fn_82A3E2B0(int *param_1,int param_2,int param_3)

{
  unsigned char uVar1;
  unsigned char bVar2;
  short sVar3;
  unsigned char *puVar4;
  int iVar5;
  unsigned char *puVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  char cVar15;
  int iVar14;
  unsigned __int64 uVar16;
  char cVar17;
  unsigned int uVar18;
  int *piVar19;
  unsigned char *puVar20;
  
  puVar4 = (unsigned char *)param_1[0xac2];
  iVar5 = *param_1;
  param_3 = param_2 + param_3;
  uVar16 = (unsigned __int64)*(unsigned char *)(param_1 + 0xbad);
  uVar18 = param_1[0xbac];
  puVar20 = (unsigned char *)param_1[0xac1];
  piVar19 = param_1 + 3;
  while( true ) {
    if (param_3 <= param_2) {
      *(char *)(param_1 + 0xbad) = (char)uVar16;
      param_1[0xbac] = uVar18;
      param_1[0xac1] = (int)puVar20;
      return param_2;
    }
    sVar3 = *(short *)((int)param_1 + (uVar18 >> 0x15 & 0x7fe) + 0x18);
    uVar9 = (unsigned __int64)sVar3;
    if (sVar3 < 0) {
      uVar13 = 0x200000;
      do {
        uVar11 = (unsigned int)uVar13;
        uVar13 = uVar13 >> 1;
        sVar3 = *(short *)((int)param_1 +
                          (int)((((unsigned __int64)((uVar11 & uVar18) == 0) ^ 1) +
                                 (uVar9 & 0x7fffffff) * -2 & 0xffffffff) << 1) + 0xe3c);
        uVar9 = (unsigned __int64)sVar3;
      } while (sVar3 < 0);
    }
    if (puVar4 <= puVar20) break;
    bVar2 = *(unsigned char *)((int)param_1 + (int)uVar9 + 0xa18);
    cVar17 = (char)uVar16 - bVar2;
    uVar18 = uVar18 << (bVar2 & 0x3f);
    uVar16 = (unsigned __int64)cVar17;
    if ((__int64)uVar16 < 1) {
      puVar6 = puVar20 + 1;
      uVar1 = *puVar20;
      puVar20 = puVar20 + 2;
      uVar16 = (unsigned __int64)(char)(cVar17 + '\x10');
      uVar18 = (unsigned int)CONCAT11(*puVar6,uVar1) << (-(int)cVar17 & 0x3fU) | uVar18;
    }
    uVar9 = uVar9 - 0x100;
    if ((__int64)uVar9 < 0) {
      iVar14 = param_1[1];
      *(char *)(iVar5 + param_2) = (char)uVar9;
      *(char *)(iVar14 + iVar5 + param_2) = (char)uVar9;
      param_2 = param_2 + 1;
    }
    else {
      uVar13 = uVar9 & 7;
      if ((int)uVar13 == 7) {
        sVar3 = *(short *)((int)param_1 + (uVar18 >> 0x17 & 0x1fe) + 0x818);
        uVar13 = (unsigned __int64)sVar3;
        if (sVar3 < 0) {
          uVar10 = 0x800000;
          do {
            uVar11 = (unsigned int)uVar10;
            uVar10 = uVar10 >> 1;
            sVar3 = *(short *)((int)param_1 +
                              (int)((((unsigned __int64)((uVar11 & uVar18) == 0) ^ 1) +
                                     (uVar13 & 0x7fffffff) * -2 & 0xffffffff) << 1) + 0x233c);
            uVar13 = (unsigned __int64)sVar3;
          } while (sVar3 < 0);
        }
        bVar2 = *(unsigned char *)((int)param_1 + (int)uVar13 + 0xcb8);
        cVar17 = (char)uVar16 - bVar2;
        uVar18 = uVar18 << (bVar2 & 0x3f);
        uVar16 = (unsigned __int64)cVar17;
        if ((__int64)uVar16 < 1) {
          puVar6 = puVar20 + 1;
          uVar1 = *puVar20;
          puVar20 = puVar20 + 2;
          uVar16 = (unsigned __int64)(char)(cVar17 + '\x10');
          uVar18 = (unsigned int)CONCAT11(*puVar6,uVar1) << (-(int)cVar17 & 0x3fU) | uVar18;
        }
        uVar13 = uVar13 + 7;
      }
      cVar15 = (char)uVar16;
      cVar17 = (char)((int)uVar9 >> 3);
      uVar9 = (unsigned __int64)cVar17;
      if (cVar17 < '\x03') {
        iVar7 = (int)((uVar9 & 0xffffffff) << 2);
        iVar14 = *(int *)(iVar7 + (int)piVar19);
        *(int *)(iVar7 + (int)piVar19) = *piVar19;
      }
      else {
        bVar2 = *(unsigned char *)((int)param_1 + cVar17 + 0x2ee4);
        if (bVar2 < 3) {
          if (bVar2 == 0) {
            iVar14 = 1;
          }
          else {
            bVar2 = *(unsigned char *)((int)param_1 + cVar17 + 0x2ee4);
            cVar15 = cVar15 - bVar2;
            uVar16 = (unsigned __int64)cVar15;
            uVar11 = uVar18 >> (0x20 - bVar2 & 0x3f);
            uVar18 = uVar18 << (bVar2 & 0x3f);
            if ((__int64)uVar16 < 1) {
              puVar6 = puVar20 + 1;
              uVar1 = *puVar20;
              puVar20 = puVar20 + 2;
              uVar16 = (unsigned __int64)(char)(cVar15 + '\x10');
              uVar18 = (unsigned int)CONCAT11(*puVar6,uVar1) << (-(int)cVar15 & 0x3fU) | uVar18;
            }
            iVar14 = *(int *)((int)((uVar9 + 0xbc6 & 0xffffffff) << 2) + (int)param_1) + uVar11;
          }
        }
        else {
          if (bVar2 == 3) {
            uVar11 = 0;
          }
          else {
            bVar2 = *(unsigned char *)((int)param_1 + cVar17 + 0x2ee4);
            cVar17 = cVar15 - bVar2;
            cVar15 = cVar17 + '\x03';
            uVar11 = uVar18 >> (0x23 - bVar2 & 0x3f);
            uVar18 = uVar18 << (bVar2 - 3 & 0x3f);
            if (cVar15 < '\x01') {
              puVar6 = puVar20 + 1;
              iVar14 = (int)cVar15;
              uVar1 = *puVar20;
              cVar15 = cVar17 + '\x13';
              puVar20 = puVar20 + 2;
              uVar18 = (unsigned int)CONCAT11(*puVar6,uVar1) << (-iVar14 & 0x3fU) | uVar18;
            }
          }
          cVar17 = *(char *)((int)param_1 + (uVar18 >> 0x19) + 0xdb4);
          bVar2 = *(unsigned char *)((int)param_1 + cVar17 + 0xe34);
          cVar15 = cVar15 - bVar2;
          uVar18 = uVar18 << (bVar2 & 0x3f);
          uVar16 = (unsigned __int64)cVar15;
          if ((__int64)uVar16 < 1) {
            puVar6 = puVar20 + 1;
            uVar1 = *puVar20;
            puVar20 = puVar20 + 2;
            uVar16 = (unsigned __int64)(char)(cVar15 + '\x10');
            uVar18 = (unsigned int)CONCAT11(*puVar6,uVar1) << (-(int)cVar15 & 0x3fU) | uVar18;
          }
          iVar14 = *(int *)((int)((uVar9 + 0xbc6 & 0xffffffff) << 2) + (int)param_1) + uVar11 * 8 +
                   (int)cVar17;
        }
        param_1[5] = param_1[4];
        param_1[4] = *piVar19;
      }
      uVar11 = param_1[2];
      lVar8 = uVar13 + 2;
      *piVar19 = iVar14;
      uVar12 = param_2 - iVar14;
      do {
        uVar1 = *(unsigned char *)((uVar12 & uVar11) + iVar5);
        *(unsigned char *)(iVar5 + param_2) = uVar1;
        if (param_2 < 0x101) {
          *(unsigned char *)(param_1[1] + iVar5 + param_2) = uVar1;
        }
        lVar8 = lVar8 + -1;
        param_2 = param_2 + 1;
        uVar12 = uVar12 + 1;
      } while (0 < lVar8);
    }
  }
  return -1;
}

