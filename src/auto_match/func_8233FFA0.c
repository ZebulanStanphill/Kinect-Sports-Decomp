typedef unsigned char bool;
#define true 1


void fn_8233FFA0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  unsigned __int64 uVar8;
  float *pfVar10;
  bool bVar11;
  
  uVar4 = param_2;
  while( true ) {
    uVar8 = uVar4 + 1 & 0x7fffffff;
    uVar7 = uVar8 * 2;
    if ((int)param_3 <= (int)uVar7) break;
    pfVar10 = (float *)((int)(uVar8 << 4) + param_1);
    if (pfVar10[-2] < *pfVar10) {
      uVar7 = uVar7 - 1;
    }
    puVar5 = (unsigned int *)((int)((uVar7 & 0xffffffff) << 3) + param_1);
    puVar6 = (unsigned int *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
    uVar4 = uVar7;
  }
  if ((int)uVar7 == (int)param_3) {
    iVar2 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    puVar6 = (unsigned int *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    uVar4 = param_3 - 1;
    *puVar6 = *(unsigned int *)(iVar2 + -8);
    puVar6[1] = *(unsigned int *)(iVar2 + -4);
  }
  iVar2 = (int)uVar4;
  uVar9 = iVar2 - 1;
  bVar11 = (int)uVar9 < 0 && (uVar9 & 1) != 0;
  while (uVar8 = (__int64)((int)uVar9 >> 1) + (unsigned __int64)bVar11, (int)param_2 < iVar2) {
    iVar3 = (int)((uVar8 & 0xffffffff) << 3);
    fVar1 = *(float *)(iVar3 + param_1);
    if (fVar1 <= *param_4) break;
    pfVar10 = (float *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    iVar2 = (int)uVar8;
    uVar9 = iVar2 - 1;
    bVar11 = (int)uVar9 < 0 && (uVar9 & 1) != 0;
    *pfVar10 = fVar1;
    pfVar10[1] = *(float *)(iVar3 + param_1 + 4);
    uVar4 = uVar8;
  }
  pfVar10 = (float *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
  *pfVar10 = *param_4;
  pfVar10[1] = param_4[1];
  return;
}

