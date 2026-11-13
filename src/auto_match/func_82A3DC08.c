#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


int fn_82A3DC08(int *param_1,int param_2,int param_3)

{
  unsigned char uVar1;
  unsigned char bVar2;
  short sVar3;
  unsigned char *puVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  __int64 lVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  char cVar15;
  unsigned __int64 uVar16;
  char cVar18;
  int iVar17;
  unsigned int uVar19;
  int *piVar20;
  
  param_3 = param_2 + param_3;
  puVar4 = (unsigned char *)param_1[0xac2];
  iVar5 = *param_1;
  uVar14 = (unsigned __int64)*(unsigned char *)(param_1 + 0xbad);
  uVar19 = param_1[0xbac];
  puVar10 = (unsigned char *)param_1[0xac1];
  piVar20 = param_1 + 3;
  do {
    while( true ) {
      if (param_3 <= param_2) {
        *(char *)(param_1 + 0xbad) = (char)uVar14;
        param_1[0xbac] = uVar19;
        param_1[0xac1] = (int)puVar10;
        return param_2;
      }
      sVar3 = *(short *)((int)param_1 + (uVar19 >> 0x15 & 0x7fe) + 0x18);
      uVar11 = (unsigned __int64)sVar3;
      if (sVar3 < 0) {
        uVar16 = 0x200000;
        do {
          uVar6 = (unsigned int)uVar16;
          uVar16 = uVar16 >> 1;
          sVar3 = *(short *)((int)param_1 +
                            (int)((((unsigned __int64)((uVar6 & uVar19) == 0) ^ 1) +
                                   (uVar11 & 0x7fffffff) * -2 & 0xffffffff) << 1) + 0xe3c);
          uVar11 = (unsigned __int64)sVar3;
        } while (sVar3 < 0);
      }
      if (puVar4 <= puVar10) {
        return -1;
      }
      bVar2 = *(unsigned char *)((int)param_1 + (int)uVar11 + 0xa18);
      cVar15 = (char)uVar14 - bVar2;
      uVar19 = uVar19 << (bVar2 & 0x3f);
      uVar14 = (unsigned __int64)cVar15;
      if ((__int64)uVar14 < 1) {
        puVar9 = puVar10 + 1;
        uVar1 = *puVar10;
        puVar10 = puVar10 + 2;
        uVar14 = (unsigned __int64)(char)(cVar15 + '\x10');
        uVar19 = (unsigned int)CONCAT11(*puVar9,uVar1) << (-(int)cVar15 & 0x3fU) | uVar19;
      }
      uVar11 = uVar11 - 0x100;
      if (-1 < (__int64)uVar11) break;
      iVar17 = param_1[1];
      *(char *)(iVar5 + param_2) = (char)uVar11;
      *(char *)(iVar17 + iVar5 + param_2) = (char)uVar11;
      param_2 = param_2 + 1;
    }
    uVar16 = uVar11 & 7;
    if ((int)uVar16 == 7) {
      sVar3 = *(short *)((int)param_1 + (uVar19 >> 0x17 & 0x1fe) + 0x818);
      uVar16 = (unsigned __int64)sVar3;
      if (sVar3 < 0) {
        uVar12 = 0x800000;
        do {
          uVar6 = (unsigned int)uVar12;
          uVar12 = uVar12 >> 1;
          sVar3 = *(short *)((int)param_1 +
                            (int)((((unsigned __int64)((uVar6 & uVar19) == 0) ^ 1) +
                                   (uVar16 & 0x7fffffff) * -2 & 0xffffffff) << 1) + 0x233c);
          uVar16 = (unsigned __int64)sVar3;
        } while (sVar3 < 0);
      }
      bVar2 = *(unsigned char *)((int)param_1 + (int)uVar16 + 0xcb8);
      cVar15 = (char)uVar14 - bVar2;
      uVar19 = uVar19 << (bVar2 & 0x3f);
      uVar14 = (unsigned __int64)cVar15;
      if ((__int64)uVar14 < 1) {
        puVar9 = puVar10 + 1;
        uVar1 = *puVar10;
        puVar10 = puVar10 + 2;
        uVar14 = (unsigned __int64)(char)(cVar15 + '\x10');
        uVar19 = (unsigned int)CONCAT11(*puVar9,uVar1) << (-(int)cVar15 & 0x3fU) | uVar19;
      }
      uVar16 = uVar16 + 7;
    }
    cVar15 = (char)((int)uVar11 >> 3);
    if (cVar15 < '\x03') {
      iVar7 = (int)(((__int64)cVar15 & 0xffffffffU) << 2);
      iVar17 = *(int *)(iVar7 + (int)piVar20);
      if (cVar15 != '\0') {
        *(int *)(iVar7 + (int)piVar20) = *piVar20;
        goto LAB_82a3de64;
      }
    }
    else {
      if (cVar15 < '\x04') {
        iVar17 = 1;
      }
      else {
        bVar2 = *(unsigned char *)((int)param_1 + cVar15 + 0x2ee4);
        cVar18 = (char)uVar14 - bVar2;
        uVar14 = (unsigned __int64)cVar18;
        uVar6 = uVar19 >> (0x20 - bVar2 & 0x3f);
        uVar19 = uVar19 << (bVar2 & 0x3f);
        puVar9 = puVar10;
        if ((__int64)uVar14 < 1) {
          uVar14 = (unsigned __int64)(char)(cVar18 + '\x10');
          uVar19 = (unsigned int)CONCAT11(puVar10[1],*puVar10) << (-(int)cVar18 & 0x3fU) | uVar19;
          puVar9 = puVar10 + 2;
          if ((__int64)uVar14 < 1) {
            uVar1 = *puVar9;
            puVar9 = puVar10 + 4;
            uVar14 = (unsigned __int64)(char)(cVar18 + ' ');
            uVar19 = (unsigned int)CONCAT11(puVar10[3],uVar1) << (-(int)(char)(cVar18 + '\x10') & 0x3fU) |
                     uVar19;
          }
        }
        iVar17 = *(int *)((int)(((__int64)cVar15 + 0xbc6U & 0xffffffff) << 2) + (int)param_1) +
                 uVar6;
        puVar10 = puVar9;
      }
      param_1[5] = param_1[4];
      param_1[4] = *piVar20;
LAB_82a3de64:
      *piVar20 = iVar17;
    }
    uVar6 = param_1[2];
    lVar8 = uVar16 + 2;
    uVar13 = param_2 - iVar17;
    do {
      uVar1 = *(unsigned char *)((uVar13 & uVar6) + iVar5);
      *(unsigned char *)(iVar5 + param_2) = uVar1;
      if (param_2 < 0x101) {
        *(unsigned char *)(param_1[1] + iVar5 + param_2) = uVar1;
      }
      lVar8 = lVar8 + -1;
      param_2 = param_2 + 1;
      uVar13 = uVar13 + 1;
    } while (0 < lVar8);
  } while( true );
}

