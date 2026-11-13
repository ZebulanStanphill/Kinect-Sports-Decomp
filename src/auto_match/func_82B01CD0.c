#define true 1
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_82AD1978();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82ADD198();
extern int fn_82ADD600();
extern int fn_82AF50F8();
extern int fn_82AF5160();
extern int fn_82AFA378();
extern int fn_82AFE520();
extern int fn_82B0FC78();
extern int fn_82B161E8();
extern int fn_82B84350();
extern int fn_82B8AC10();
extern int fn_82B8D2B8();
extern int fn_82B8D3D0();
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;


unsigned __int64 fn_82B01CD0(int param_1,__int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  char cVar11;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned short uVar10;
  unsigned int uVar9;
  int *piVar12;
  unsigned int uVar13;
  __int64 lVar14;
  int *piVar15;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned int *puVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  __int64 lVar23;
  unsigned __int64 uVar24;
  unsigned int uVar25;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned int auStack_e0 [4];
  int aiStack_d0 [4];
  unsigned int auStack_c0 [4];
  unsigned int auStack_b0 [4];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [144];
  
  cVar11 = fn_82B8D2B8();
  if (cVar11 == '\0') {
    return 0;
  }
  uVar25 = (unsigned int)param_2;
  uVar20 = *(unsigned int *)(param_3 + 8);
  uVar5 = *(unsigned int *)(uVar25 + 8) >> 0x13;
  uVar19 = (unsigned __int64)uVar5 & 7;
  fn_82AF50F8(param_2,auStack_e0,auStack_c0,auStack_b0);
  fn_82AF50F8(param_3,aiStack_d0,auStack_90,auStack_a0);
  cVar11 = fn_82AF5160(param_1,uVar19,auStack_e0,auStack_c0,auStack_b0,uVar20 >> 0x13 & 7,
                             aiStack_d0,auStack_90);
  if (cVar11 == '\0') {
    return 0;
  }
  if (uStack_ec == 0) goto LAB_82b02238;
  uVar24 = (unsigned __int64)uStack_ec;
  uVar24 = (((0x8da691691448U >> (uVar24 & 0x7f)) >> (uVar24 & 0x7f)) >> (uVar24 & 0x7f) & 7) +
           uVar19;
  if (4 < uVar24) {
    return 0;
  }
  if (((*(unsigned int *)(uVar25 + 8) >> 0x17 & 1) != 0) && ((*(unsigned int *)(param_3 + 8) >> 0x17 & 1) != 0)) {
    uVar6 = fn_82ADD120(param_2);
    uVar6 = fn_82ADD198(param_1,uVar6);
    iVar7 = fn_82ADD600(param_1,uVar6);
    uVar6 = fn_82ADD120(param_3);
    uVar6 = fn_82ADD198(param_1,uVar6);
    iVar8 = fn_82ADD600(param_1,uVar6);
    if (iVar7 != iVar8) {
      return 0;
    }
  }
  puVar18 = auStack_e0;
  lVar14 = param_2 + 0x2c;
  for (uVar20 = 0; uVar20 < (*(unsigned int *)(uVar25 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
    if (*(unsigned int *)(*(int *)lVar14 + 0xc) != *puVar18) {
      return 0;
    }
    lVar14 = lVar14 + 4;
    puVar18 = puVar18 + 1;
  }
  piVar12 = aiStack_d0;
  piVar15 = (int *)(param_3 + 0x2c);
  for (uVar20 = 0; uVar20 < (*(unsigned int *)(param_3 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
    if (*(int *)(*piVar15 + 0xc) != *piVar12) {
      return 0;
    }
    piVar15 = piVar15 + 1;
    piVar12 = piVar12 + 1;
  }
  lVar14 = fn_82B84350(param_1,*(unsigned int *)(uVar25 + 0x1c),0,uVar24);
  uVar2 = (unsigned int)lVar14;
  uVar20 = uVar2 & 0xfffffffe;
  puVar18 = (unsigned int *)((uVar25 & 0xfffffffe) + 0x24);
  *(unsigned int *)(uVar20 + 0x24) = *puVar18;
  *(unsigned int *)(*puVar18 & 0xfffffffe) = uVar20;
  *(unsigned int *)(uVar20 + 0x28) = uVar25 & 0xfffffffe;
  *puVar18 = uVar20 + 0x28;
  if (((*(unsigned int *)(param_3 + 8) >> 0x17 & 1) != 0) && ((*(unsigned int *)(uVar25 + 8) >> 0x17 & 1) == 0)) {
    *(unsigned int *)(uVar2 + 8) = *(unsigned int *)(uVar2 + 8) | 0x800000;
    uVar10 = fn_82ADD120(param_3);
    *(unsigned short *)(uVar2 + 0x12) = uVar10;
    puVar18 = *(unsigned int **)(param_1 + 0x294);
    if ((puVar18[1] & 1) == 0) {
      uVar20 = *puVar18 & 0xfffffffe;
      iVar7 = uVar20 - 4;
      if ((iVar7 == 0) || (*(unsigned int *)(uVar20 + 8) < *(int *)(uVar20 + 4) + 1U)) goto LAB_82b01f58;
    }
    else {
LAB_82b01f58:
      iVar7 = fn_82AD6090(puVar18,1);
    }
    iVar8 = *(int *)(iVar7 + 8);
    *(int *)(iVar7 + 8) = iVar8 + 1;
    *(unsigned int *)((iVar8 + 4) * 4 + iVar7) = uVar2;
  }
  lVar23 = lVar14 + 0x2c;
  for (uVar20 = 0; uVar20 < (*(unsigned int *)(uVar25 + 8) >> 0x13 & 7); uVar20 = uVar20 + 1) {
    iVar7 = *(int *)((uVar25 - uVar2) + (int)(unsigned int *)lVar23);
    uVar9 = fn_82AD1978(lVar14,iVar7);
    *(unsigned int *)lVar23 = uVar9;
    if ((*(unsigned int *)(uVar2 + 8) >> 0x17 & 1) != 0) {
      iVar7 = *(int *)(iVar7 + 0xc);
      if ((*(unsigned int *)(iVar7 + 8) >> 0x17 & 1) == 0) {
        *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(iVar7 + 8) | 0x800000;
        uVar10 = fn_82ADD120(param_3);
        *(unsigned short *)(iVar7 + 0x12) = uVar10;
        *(unsigned int *)(iVar7 + 0x10) = *(unsigned int *)(iVar7 + 0x10) & 0xfff8ffff;
        puVar18 = *(unsigned int **)(param_1 + 0x294);
        if ((puVar18[1] & 1) == 0) {
          uVar3 = *puVar18 & 0xfffffffe;
          iVar8 = uVar3 - 4;
          if ((iVar8 == 0) || (*(unsigned int *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U)) goto LAB_82b02020;
        }
        else {
LAB_82b02020:
          iVar8 = fn_82AD6090(puVar18,1);
        }
        iVar1 = *(int *)(iVar8 + 8);
        *(int *)(iVar8 + 8) = iVar1 + 1;
        *(int *)((iVar1 + 4) * 4 + iVar8) = iVar7;
      }
    }
    lVar23 = lVar23 + 4;
  }
  lVar23 = (uVar19 + 10) * 4 + lVar14;
  uVar24 = uVar19;
  for (uVar20 = uStack_ec; uVar20 != 0; uVar20 = uVar20 - (uVar20 & ~(uVar20 - 1))) {
    lVar22 = -LZCOUNT(uVar20 & ~(uVar20 - 1));
    iVar7 = fn_82AD1978(lVar14,*(unsigned int *)
                                      ((int)((lVar22 + 0x2aU & 0xffffffff) << 2) + param_3));
    lVar23 = lVar23 + 4;
    *(int *)lVar23 = iVar7;
    uVar3 = (unsigned int)((lVar22 + 0x1fU & 0xffffffff) << 1);
    iVar8 = (int)uVar24;
    uVar2 = *(unsigned int *)(iVar7 + 0xc);
    uVar24 = uVar24 + 1;
    uStack_f0 = uStack_f0 & ~(3 << (uVar3 & 0x3e)) | iVar8 << (uVar3 & 0x3e);
    if ((uVar5 & 7) != 0) {
      iVar7 = 0;
      uVar21 = uVar19;
      lVar22 = lVar14 + 0x2c;
      do {
        if (*(unsigned int *)((int)auStack_e0 + iVar7) == uVar2) {
          puVar18 = (unsigned int *)*(int *)lVar22;
          uVar3 = puVar18[3];
          if (uVar3 != uVar2) {
            puVar16 = (unsigned int *)(uVar3 + 4);
            for (puVar4 = *(unsigned int **)(uVar3 + 4); puVar4 != puVar18; puVar4 = (unsigned int *)puVar4[2]) {
              puVar16 = puVar4 + 2;
            }
            *puVar16 = puVar18[2];
            puVar18[2] = *(unsigned int *)(uVar2 + 4);
            *(unsigned int **)(uVar2 + 4) = puVar18;
            puVar18[3] = uVar2;
            uVar3 = *puVar18;
            uVar13 = (*(unsigned int *)((int)auStack_c0 + iVar7) & 0x1b) << 5 | 0x1c80;
            *puVar18 = uVar13 | uVar3 & 0xfffffc9f;
            *puVar18 = uVar13 | uVar3 & 0xfffffc80 | *(unsigned int *)((int)auStack_b0 + iVar7) & 0x1f;
            fn_82AFA378(param_1);
          }
        }
        uVar21 = uVar21 - 1;
        iVar7 = iVar7 + 4;
        lVar22 = lVar22 + 4;
      } while (uVar21 != 0);
    }
    if (((*(unsigned int *)(uVar25 + 8) >> 0x17 & 1) != 0) && ((*(unsigned int *)(uVar2 + 8) >> 0x17 & 1) == 0)) {
      *(unsigned int *)(uVar2 + 8) = *(unsigned int *)(uVar2 + 8) | 0x800000;
      uVar10 = fn_82ADD120(param_2);
      *(unsigned short *)(uVar2 + 0x12) = uVar10;
      *(unsigned int *)(uVar2 + 0x10) = *(unsigned int *)(uVar2 + 0x10) & 0xfff8ffff;
      puVar18 = *(unsigned int **)(param_1 + 0x294);
      if ((puVar18[1] & 1) == 0) {
        uVar3 = *puVar18 & 0xfffffffe;
        iVar7 = uVar3 - 4;
        if ((iVar7 == 0) || (*(unsigned int *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U)) goto LAB_82b021dc;
      }
      else {
LAB_82b021dc:
        iVar7 = fn_82AD6090(puVar18,1);
      }
      iVar8 = *(int *)(iVar7 + 8);
      *(int *)(iVar7 + 8) = iVar8 + 1;
      *(unsigned int *)((iVar8 + 4) * 4 + iVar7) = uVar2;
    }
  }
  fn_82AFE520(param_1,param_2,lVar14,0xe4,1,0);
  param_2 = lVar14;
LAB_82b02238:
  fn_82B8D3D0(param_1,param_2,param_3,1,0);
  puVar18 = (unsigned int *)(param_3 + 4);
  while( true ) {
    puVar4 = (unsigned int *)*puVar18;
    uVar20 = (unsigned int)param_2;
    if (puVar4 == (unsigned int *)0x0) break;
    if (puVar4[4] != 0) {
      puVar17 = (unsigned int *)(puVar4[3] + 4);
      for (puVar16 = (unsigned int *)*puVar17; puVar16 != puVar4; puVar16 = (unsigned int *)puVar16[2]) {
        puVar17 = puVar16 + 2;
      }
      *puVar17 = puVar4[2];
      puVar4[2] = *(unsigned int *)(uVar20 + 4);
      *(unsigned int **)(uVar20 + 4) = puVar4;
      uVar25 = *puVar4;
      puVar4[3] = uVar20;
      *puVar4 = ((((uStack_f0 >> (uVar25 >> 10 & 6) & 3) << 2 | uStack_f0 >> (uVar25 >> 8 & 6) & 3)
                  << 2 | uStack_f0 >> (uVar25 >> 6 & 6) & 3) << 2 |
                uStack_f0 >> (uVar25 >> 4 & 6) & 3) << 5 | uVar25 & 0xffffe01f;
    }
    if ((unsigned int *)*puVar18 == puVar4) {
      puVar18 = puVar4 + 2;
    }
  }
  fn_82B8AC10(param_1,param_3,*(unsigned int *)(param_1 + 0x28c),1);
  if (uStack_ec != 0) {
    lVar14 = param_2 + 0x28;
    for (uVar25 = 0; uVar25 < (*(unsigned int *)(uVar20 + 8) >> 0x13 & 7); uVar25 = uVar25 + 1) {
      lVar14 = lVar14 + 4;
      fn_82B161E8(param_1,*(unsigned int *)(*(int *)lVar14 + 0xc),
                        *(unsigned int *)(param_1 + 0x294));
    }
    fn_82B0FC78(param_1,param_2);
    *(unsigned int *)(uVar20 + 8) = *(unsigned int *)(uVar20 + 8) | 0x1000000;
  }
  return 1;
}

