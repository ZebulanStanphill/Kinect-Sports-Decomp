#define true 1


void fn_8249F338(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  float *pfVar7;
  
  iVar2 = param_2;
  while( true ) {
    iVar5 = (iVar2 + 1) * 2;
    if (param_3 <= iVar5) break;
    pfVar7 = (float *)((iVar2 + 1) * 0x18 + param_1);
    if (*pfVar7 < pfVar7[-3]) {
      iVar5 = iVar5 + -1;
    }
    puVar4 = (unsigned int *)(iVar5 * 0xc + param_1);
    iVar1 = iVar2 * 0xc + param_1;
    *(unsigned int *)(iVar2 * 0xc + param_1) = *puVar4;
    *(unsigned int *)(iVar1 + 4) = puVar4[1];
    *(unsigned int *)(iVar1 + 8) = puVar4[2];
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_3 * 0xc + param_1;
    iVar1 = iVar2 * 0xc + param_1;
    *(unsigned int *)(iVar2 * 0xc + param_1) = *(unsigned int *)(iVar5 + -0xc);
    iVar2 = param_3 + -1;
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar5 + -8);
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar5 + -4);
  }
  uVar6 = iVar2 - 1;
  iVar5 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while ((param_2 < iVar2 && (pfVar7 = (float *)(iVar5 * 0xc + param_1), *pfVar7 < *param_4))) {
    pfVar3 = (float *)(iVar2 * 0xc + param_1);
    uVar6 = iVar5 - 1;
    *pfVar3 = *pfVar7;
    pfVar3[1] = pfVar7[1];
    pfVar3[2] = pfVar7[2];
    iVar2 = iVar5;
    iVar5 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  }
  *(float *)(iVar2 * 0xc + param_1) = *param_4;
  param_1 = iVar2 * 0xc + param_1;
  *(float *)(param_1 + 4) = param_4[1];
  *(float *)(param_1 + 8) = param_4[2];
  return;
}

