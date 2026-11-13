extern unsigned int lbl_82138380;


void fn_82D3CC20(int param_1,int param_2,__int64 param_3,int param_4)

{
  unsigned short uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int in_r0;
  unsigned short *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_3 + -1 < 0) {
    return;
  }
  puVar5 = (unsigned short *)(param_2 + -2);
  do {
    puVar5 = puVar5 + 1;
    uVar1 = *puVar5;
    pfVar2 = (float *)(in_r0 + param_1 + 0x20 & 0xfffffff0);
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
    fVar8 = pfVar2[3];
    pfVar3 = (float *)((unsigned int)(&lbl_82138380 + (unsigned int)uVar1 * 8) & 0xfffffff0);
    fVar9 = pfVar3[1];
    fVar10 = pfVar3[2];
    fVar11 = pfVar3[3];
    pfVar4 = (float *)(in_r0 + param_4 & 0xfffffff0);
    *pfVar4 = *pfVar2 * *pfVar3;
    pfVar4[1] = fVar6 * fVar9;
    pfVar4[2] = fVar7 * fVar10;
    pfVar4[3] = fVar8 * fVar11;
    *(unsigned int *)(param_4 + 0xc) = uVar1 | 0x3f000000;
    param_4 = param_4 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

