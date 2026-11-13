extern int fn_82637300();


void fn_82635708(__int64 param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int uVar12;
  __int64 lVar13;
  unsigned int *puVar14;
  unsigned char *pbVar15;
  unsigned char *pbVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned char abStack_d0 [16];
  unsigned char abStack_c0 [48];
  unsigned char abStack_90 [144];
  
  uVar19 = 0;
  uVar17 = 0x40;
  do {
    uVar20 = 0;
    lVar6 = (0x3f - uVar19 & 0x3fffffff) * 4;
    lVar11 = 0;
    pbVar15 = abStack_d0;
    lVar10 = (lVar6 + 0x30U & 0xfffffff) * 0x10;
    lVar7 = 4;
    lVar13 = lVar10 + param_1 + 0x170;
    do {
      if ((1 << ((unsigned int)(lVar11 + lVar6) & 0x1f) &
          *(unsigned int *)(((int)((lVar11 + lVar6 & 0xffffffffU) >> 5) + 0x8ee) * 4 +
                   (int)(param_1 + 0x170))) != 0) {
        puVar14 = (unsigned int *)lVar13;
        uVar20 = 1 << ((unsigned int)lVar11 & 0x3f) | uVar20;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        *(unsigned int *)pbVar15 = *puVar14;
        *(unsigned int *)(pbVar15 + 4) = uVar3;
        *(unsigned int *)(pbVar15 + 8) = uVar4;
        *(unsigned int *)(pbVar15 + 0xc) = uVar5;
      }
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x10;
      pbVar15 = pbVar15 + 0x10;
    } while (lVar7 != 0);
    uVar8 = 0;
    lVar11 = 0;
    pbVar15 = abStack_90;
    lVar10 = lVar10 + param_1 + 0x2840;
    lVar7 = 4;
    do {
      if ((1 << ((unsigned int)(lVar11 + lVar6) & 0x1f) &
          *(unsigned int *)(((int)((lVar11 + lVar6 & 0xffffffffU) >> 5) + 0x8ee) * 4 +
                   (int)(param_1 + 0x2840))) != 0) {
        puVar14 = (unsigned int *)lVar10;
        uVar8 = 1 << ((unsigned int)lVar11 & 0x3f) | uVar8;
        uVar3 = puVar14[1];
        uVar4 = puVar14[2];
        uVar5 = puVar14[3];
        *(unsigned int *)pbVar15 = *puVar14;
        *(unsigned int *)(pbVar15 + 4) = uVar3;
        *(unsigned int *)(pbVar15 + 8) = uVar4;
        *(unsigned int *)(pbVar15 + 0xc) = uVar5;
      }
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
      pbVar15 = pbVar15 + 0x10;
    } while (lVar7 != 0);
    uVar18 = uVar17;
    if (uVar8 != 0 || uVar20 != 0) {
      if ((uVar8 & uVar20) != 0) {
        uVar9 = 0;
        uVar12 = 0;
        do {
          if ((1 << (uVar9 & 0x3f) & uVar8 & uVar20) != 0) {
            pbVar16 = abStack_d0 + uVar12;
            pbVar15 = abStack_90 + uVar12;
            do {
              bVar1 = *pbVar16;
              bVar2 = *pbVar15;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar16 = pbVar16 + 1;
              pbVar15 = pbVar15 + 1;
            } while (pbVar16 != abStack_c0 + uVar12);
            if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) break;
          }
          uVar12 = uVar12 + 0x10;
          uVar9 = uVar9 + 1;
        } while (uVar12 < 0x40);
      }
      uVar18 = 0x3f - uVar19;
      if ((uVar8 & ~uVar20) != 0) break;
    }
    uVar19 = uVar19 + 1;
    uVar17 = uVar18;
  } while ((uVar19 & 0xffffffff) < 0x40);
  *(int *)((int)param_1 + 0x4de0) = (int)uVar17;
  *(unsigned int *)((int)param_1 + 0x4ddc) = 1;
  fn_82637300(param_1 + 0x4de4,0x40 - uVar17,param_1 + 0x4dbc);
  return;
}

