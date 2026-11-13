#define true 1
extern unsigned int uStack_7a;


void fn_829FC3D0(int param_1)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned short *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned short uVar6;
  unsigned char bVar7;
  int iVar8;
  float *pfVar9;
  unsigned short *puVar10;
  unsigned short *puVar11;
  __int64 lVar12;
  unsigned short uStack_7a;
  
  puVar11 = (unsigned short *)(param_1 + 0x2eff0);
  if (*(unsigned int *)(param_1 + 0x31974) < 0xf) {
    lVar12 = 0x1e0;
    piVar2 = (int *)(param_1 + 0x4b6d0);
    puVar3 = (unsigned short *)(param_1 + 0x2eff4);
    pfVar9 = (float *)(param_1 + 0x1c408);
    do {
      uVar1 = puVar3[-2];
      puVar10 = (unsigned short *)((int)pfVar9 + *piVar2 + (-0x1c408 - param_1));
      uStack_7a = (unsigned short)(__int64)pfVar9[-4];
      if ((unsigned __int64)*puVar10 < ((__int64)pfVar9[-4] & 0xffffU)) {
        uStack_7a = *puVar10;
      }
      *puVar10 = uStack_7a;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      iVar8 = *piVar2 + (-0x1c408 - param_1);
      uStack_7a = (unsigned short)(__int64)*pfVar9;
      puVar10 = (unsigned short *)((int)pfVar9 + iVar8 + 0x10);
      uVar1 = puVar3[-1];
      uVar6 = *puVar10;
      if ((unsigned __int64)uVar6 < ((__int64)*pfVar9 & 0xffffU)) {
        uStack_7a = uVar6;
      }
      *puVar10 = uStack_7a;
      uVar6 = *(unsigned short *)((int)pfVar9 + iVar8 + 0x14);
      if (uVar1 <= uVar6) {
        uVar6 = uVar1;
      }
      *(unsigned short *)((int)pfVar9 + iVar8 + 0x14) = uVar6;
      uVar1 = *puVar3;
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c3e8 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[4];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[1];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c3d8 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[8];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[2];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c3c8 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[0xc];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[3];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c3b8 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[0x10];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[4];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c3a8 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[0x14];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[5];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c398 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[0x18];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[6];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c388 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[0x1c];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      uVar1 = puVar3[7];
      puVar10 = (unsigned short *)((int)pfVar9 + (-0x1c378 - param_1) + *piVar2);
      uStack_7a = (unsigned short)(__int64)pfVar9[0x20];
      uVar6 = *puVar10;
      if (uStack_7a <= *puVar10) {
        uVar6 = uStack_7a;
      }
      *puVar10 = uVar6;
      uVar6 = puVar10[2];
      if (uVar1 <= puVar10[2]) {
        uVar6 = uVar1;
      }
      puVar10[2] = uVar6;
      pfVar9 = pfVar9 + 0x28;
      puVar3 = puVar3 + 10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  lVar12 = 0x12c0;
  puVar3 = (unsigned short *)(param_1 + 0x1c3fe);
  do {
    uVar1 = *puVar11;
    uVar4 = (unsigned int)uVar1;
    puVar10 = (unsigned short *)((int)puVar3 + *(int *)(param_1 + 0x4b6d0) + (-0x1c3fe - param_1));
    if ((*puVar3 & 8) == 0) {
      iVar8 = uVar4 - ((int)(uVar4 - puVar10[1]) >> 0x1f & uVar4 - puVar10[1]);
      puVar10[1] = (unsigned short)iVar8;
      if (iVar8 == 0x7fff) {
        *(char *)((int)puVar10 + 0xd) = *(char *)((int)puVar10 + 0xd) + '\x01';
      }
      if (((unsigned __int64)puVar10[2] < ((__int64)iVar8 * 0xe667 & 0xffffffffU) >> 0x10) &&
         (6 < puVar3[-1])) {
        puVar10[2] = (unsigned short)iVar8;
      }
      *(unsigned char *)(puVar10 + 6) = 0;
      uVar5 = ((unsigned int)*puVar10 * 0x10 - (unsigned int)*puVar10) + (unsigned int)uVar1;
      *puVar10 = (short)((int)uVar5 >> 4) + (unsigned short)((int)uVar5 < 0 && (uVar5 & 0xf) != 0);
    }
    else if ((*puVar3 & 0x100) == 0) {
      *(unsigned char *)((int)puVar10 + 0xd) = 0;
      if (*(unsigned char *)(puVar10 + 6) < 0xfb) {
        *(unsigned char *)(puVar10 + 6) = *(unsigned char *)(puVar10 + 6) + 1;
      }
      if (0x1d < *(unsigned char *)(puVar10 + 6)) {
        puVar10[1] = 0x7fff;
        uVar5 = *puVar10 + 0x32;
        puVar10[2] = 0x7fff;
        if (0x7ffe < uVar5) {
          uVar5 = 0x7fff;
        }
        *puVar10 = (unsigned short)uVar5;
      }
    }
    else {
      puVar10[2] = 0x7fff;
      *(unsigned char *)(puVar10 + 6) = 0;
    }
    if (puVar3[-1] < 7) {
      if (((puVar3[-1] != 0) && ((*puVar3 & 4) != 0)) && ((*puVar3 & 2) == 0)) {
        puVar10[2] = 0x7fff;
LAB_829fca1c:
        puVar10[5] = 0x7fff;
      }
    }
    else if ((int)(*puVar10 - 500) < (int)(unsigned int)uVar1) {
      if ((puVar10[1] == 0x7fff) && (0x14 < *(unsigned char *)((int)puVar10 + 0xd))) {
        puVar10[1] = uVar1;
        puVar10[2] = uVar1;
        *(unsigned char *)((int)puVar10 + 0xd) = 0;
      }
      if (uVar4 != 0) {
        bVar7 = *(char *)(puVar10 + 7) + 1;
        *(unsigned char *)(puVar10 + 7) = bVar7;
        uVar6 = puVar10[4];
        if (puVar10[4] <= uVar4) {
          uVar6 = uVar1;
        }
        puVar10[4] = uVar6;
        uVar5 = (unsigned int)puVar10[5];
        if (uVar4 <= puVar10[5]) {
          uVar5 = uVar4;
        }
        puVar10[5] = (unsigned short)uVar5;
        if ((unsigned __int64)bVar7 == (unsigned __int64)(unsigned int)((int)(unsigned int)bVar7 >> 5) << 5) {
          if ((unsigned int)((int)((unsigned int)uVar6 * 0xe667) >> 0x10) <= uVar5) {
            puVar10[1] = uVar6;
            puVar10[2] = (unsigned short)uVar5;
          }
          puVar10[4] = 0;
          goto LAB_829fca1c;
        }
      }
    }
    puVar3 = puVar3 + 8;
    puVar11 = puVar11 + 1;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      return;
    }
  } while( true );
}

