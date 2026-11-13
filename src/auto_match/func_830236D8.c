void fn_830236D8(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  unsigned int uVar9;
  unsigned int uVar11;
  __int64 lVar10;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  float in_register_000103d0;
  float in_register_000103d4;
  float in_register_000103d8;
  float in_vr61;
  float in_register_000103e0;
  float in_register_000103e4;
  float in_register_000103e8;
  float in_vr62;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  
  uVar1 = *(unsigned short *)((int)param_2 + 0xe);
  uVar9 = *(unsigned short *)(param_1 + 0x3c) + 1;
  iVar2 = *(int *)((*(unsigned short *)(param_1 + 0x3c) + 0x10) * 4 + param_1);
  *(short *)(param_1 + 0x3c) = (short)uVar9;
  if ((uVar9 & 0xffff) == 2) {
    *(unsigned short *)(param_1 + 0x3c) = 0;
  }
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
  uVar9 = *param_2;
  if (uVar9 == 0) {
    return;
  }
  uVar11 = *(int *)(param_1 + 0x24) * (unsigned int)uVar1 * 4 + uVar9;
  if (uVar11 <= uVar9) {
    return;
  }
  iVar2 = iVar2 - uVar9;
  lVar10 = (unsigned __int64)((uVar11 - uVar9) - 1 >> 4) + 1;
  altv207_13(in_vs39,in_vs40);
  altv207_13(in_vs32,in_vs39);
  do {
    altv207_13(in_vs32,in_vs43);
    fVar4 = in_register_000103f0;
    if (in_register_000103d0 < in_register_000103f0) {
      fVar4 = in_register_000103d0;
    }
    fVar5 = in_register_000103f4;
    if (in_register_000103d4 < in_register_000103f4) {
      fVar5 = in_register_000103d4;
    }
    fVar6 = in_register_000103f8;
    if (in_register_000103d8 < in_register_000103f8) {
      fVar6 = in_register_000103d8;
    }
    fVar7 = in_vr63;
    if (in_vr61 < in_vr63) {
      fVar7 = in_vr61;
    }
    fVar3 = in_register_000103e0;
    if (in_register_000103e0 < fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = in_register_000103e4;
    if (in_register_000103e4 < fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = in_register_000103e8;
    if (in_register_000103e8 < fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = in_vr62;
    if (in_vr62 < fVar7) {
      fVar6 = fVar7;
    }
    pfVar8 = (float *)(iVar2 + uVar9 & 0xfffffff0);
    *pfVar8 = fVar3;
    pfVar8[1] = fVar4;
    pfVar8[2] = fVar5;
    pfVar8[3] = fVar6;
    uVar9 = uVar9 + 0x10;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

