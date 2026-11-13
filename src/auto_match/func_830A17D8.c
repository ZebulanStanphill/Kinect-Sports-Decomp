#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_80;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_60;
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int uStack_88;


void fn_830A17D8(unsigned __int64 param_1,float *param_2,int *param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short *puVar3;
  short *psVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 *puVar10;
  float *pfVar12;
  __int64 lVar11;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned __int64 uStack_88;
  unsigned char auStack_80 [32];
  float fStack_60;
  float fStack_40;
  float fStack_3c;
  
  puVar10 = &uStack_88;
  *param_3 = *param_3 + -0x10;
  iVar5 = (int)param_1;
  fStack_3c = *(float *)(iVar5 + 0x20);
  lVar14 = 0xc;
  pfVar12 = param_2 + -2;
  do {
    pfVar12 = pfVar12 + 2;
    puVar10 = puVar10 + 1;
    *puVar10 = *(unsigned __int64 *)pfVar12;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  uVar1 = *(unsigned short *)(iVar5 + 0x12);
  fStack_60 = param_2[8] * fStack_3c;
  fStack_40 = param_2[0x10] * fStack_3c;
  fStack_3c = param_2[0x11] * fStack_3c;
  do {
    puVar3 = *(unsigned short **)((int)param_1 + 0x14);
    param_1 = ZEXT48(puVar3);
  } while (0x16 < *puVar3);
  uVar2 = puVar3[2];
  uVar13 = 0;
  uVar8 = (unsigned __int64)*(unsigned char *)(puVar3 + 5);
  lVar14 = (unsigned __int64)puVar3[3] * 0x20 + param_1 + 0x30;
  if (3 < uVar2) {
    lVar9 = (((unsigned __int64)uVar2 - 4 & 0xffffffff) >> 2) + 1;
    lVar11 = param_1 + 0x6c;
    uVar13 = lVar9 * 4 & 0xfffffffc;
    do {
      pfVar12 = (float *)lVar11;
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              pfVar12[-8];
      if (fVar6 < *(float *)((int)lVar14 + 0x10)) {
        *(float *)((int)lVar14 + 0x10) = fVar6;
      }
      iVar7 = (int)(uVar8 + lVar14);
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              *pfVar12;
      if (fVar6 < *(float *)(iVar7 + 0x10)) {
        *(float *)(iVar7 + 0x10) = fVar6;
      }
      lVar14 = uVar8 + uVar8 + lVar14;
      iVar7 = (int)lVar14;
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              pfVar12[8];
      if (fVar6 < *(float *)(iVar7 + 0x10)) {
        *(float *)(iVar7 + 0x10) = fVar6;
      }
      lVar14 = uVar8 + lVar14;
      iVar7 = (int)lVar14;
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              pfVar12[0x10];
      if (fVar6 < *(float *)(iVar7 + 0x10)) {
        *(float *)(iVar7 + 0x10) = fVar6;
      }
      lVar14 = uVar8 + lVar14;
      lVar11 = lVar11 + 0x80;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if ((int)uVar13 < (int)(unsigned int)uVar2) {
    lVar9 = uVar2 - uVar13;
    lVar14 = lVar14 + 0x10;
    lVar11 = (uVar13 & 0x7ffffff) * 0x20 + param_1 + 0x4c;
    do {
      fVar6 = (*param_2 / *(float *)(iVar5 + 0x20)) * *(float *)(iVar5 + 0x24) * param_2[1] +
              *(float *)lVar11;
      if (fVar6 < *(float *)lVar14) {
        *(float *)lVar14 = fVar6;
      }
      lVar14 = lVar14 + uVar8;
      lVar11 = lVar11 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  psVar4 = *(short **)(iVar5 + 0x14);
  if (*psVar4 == 0x16) {
    fn_830A4688(psVar4,auStack_80,1);
  }
  else {
    fn_830A2398(psVar4,uVar1,auStack_80,param_3);
  }
  return;
}

