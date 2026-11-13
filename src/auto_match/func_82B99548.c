extern int fn_8265C9E0();
extern int fn_82B90110();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_8202EE48;
extern unsigned int lbl_8202EE4C;
extern unsigned int lbl_8202EE50;
extern unsigned int lbl_821AAD20;


void fn_82B99548(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned int *puVar17;
  
  uVar14 = *(int *)(param_1 + 0x40) + param_2;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  if (*(int *)(param_1 + 0xf0) == 0) {
    lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xdc) & 0xffffff) << 8;
    if (0xfffffff < ((unsigned __int64)*(unsigned int *)(param_1 + 0xdc) & 0xfffffff) << 4) {
      lVar8 = -1;
    }
    iVar9 = fn_8265C9E0(lVar8);
    *(int *)(param_1 + 0xf0) = iVar9;
    if (iVar9 == 0) {
      return;
    }
  }
  if (((uVar14 & 0xfffffffc) != *(unsigned int *)(param_1 + 0xe8)) || (param_3 != *(int *)(param_1 + 0xec)))
  {
    uVar16 = *(unsigned int *)(param_1 + 0xc4);
    *(unsigned int *)(param_1 + 0xe8) = uVar14 & 0xfffffffc;
    *(int *)(param_1 + 0xec) = param_3;
    uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xf0);
    lVar8 = (__int64)(int)(uVar14 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
            (__int64)(int)(uVar16 >> 2) * (__int64)*(int *)(param_1 + 0x88) +
            (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
            (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
    if (uVar16 < *(unsigned int *)(param_1 + 0xcc)) {
      do {
        (**(int (***)())(param_1 + 0x8c))(uVar15,lVar8);
        uVar16 = uVar16 + 4;
        uVar15 = uVar15 + 0x100;
        lVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) + lVar8;
      } while (uVar16 < *(unsigned int *)(param_1 + 0xcc));
    }
  }
  iVar9 = *(int *)(param_1 + 200);
  uVar16 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0xc4);
  uVar12 = *(int *)(param_1 + 0x68) + uVar16;
  if (uVar16 < uVar12) {
    iVar13 = uVar12 - uVar16;
    do {
      iVar13 = iVar13 + -1;
      iVar11 = ((uVar16 & 0xfffffffc | uVar14 - iVar9 & 3) << 2 | uVar16 & 3) * 0x10;
      iVar10 = iVar11 + *(int *)(param_1 + 0xf0);
      puVar17 = (unsigned int *)param_4;
      *puVar17 = *(unsigned int *)(iVar11 + *(int *)(param_1 + 0xf0));
      puVar17[1] = *(unsigned int *)(iVar10 + 4);
      puVar17[2] = *(unsigned int *)(iVar10 + 8);
      puVar17[3] = *(unsigned int *)(iVar10 + 0xc);
      param_4 = param_4 + 0x10;
      uVar16 = uVar16 + 1;
    } while (iVar13 != 0);
  }
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_8202EE50;
  fVar5 = lbl_8202EE4C;
  fVar4 = lbl_8202EE48;
  fVar3 = lbl_820288C0;
  fVar2 = lbl_82002C5C;
  uVar15 = param_4;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (uVar15 = param_4 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10,
     (uVar15 & 0xffffffff) < (param_4 & 0xffffffff))) {
    lVar8 = (((param_4 - uVar15) - 1 & 0xffffffff) >> 4) + 1;
    do {
      pfVar1 = (float *)uVar15;
      if (((((float)(__int64)(int)(*pfVar1 * fVar4 + fVar2) * fVar5 == *(float *)(param_1 + 0x24))
           && ((float)(__int64)(int)(pfVar1[1] * fVar3 + fVar2) * fVar6 ==
               *(float *)(param_1 + 0x28))) &&
          ((float)(__int64)(int)(pfVar1[2] * fVar4 + fVar2) * fVar5 == *(float *)(param_1 + 0x2c)))
         && ((float)(__int64)(int)(pfVar1[3] * *(float *)(param_1 + 0x80) + fVar2) *
             *(float *)(param_1 + 0x84) == *(float *)(param_1 + 0x30))) {
        pfVar1[1] = fVar7;
        pfVar1[3] = fVar7;
        pfVar1[2] = fVar7;
        *pfVar1 = fVar7;
      }
      lVar8 = lVar8 + -1;
      uVar15 = uVar15 + 0x10;
    } while (lVar8 != 0);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_82B90110(param_1,uVar15 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x68) & 0xfffffff) * -0x10);
  }
  return;
}

