typedef unsigned char bool;
#define true 1


void fn_825520B8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  bool bVar9;
  
  uVar4 = param_2;
  while( true ) {
    uVar7 = uVar4 + 1 & 0x7fffffff;
    uVar6 = uVar7 * 2;
    if ((int)param_3 <= (int)uVar6) break;
    iVar1 = (int)(uVar7 << 4) + param_1;
    if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + -4)) {
      uVar6 = uVar6 - 1;
    }
    iVar1 = (int)((uVar6 & 0xffffffff) << 3);
    iVar3 = (int)((uVar4 & 0xffffffff) << 3);
    *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(iVar1 + param_1);
    *(unsigned int *)(iVar3 + param_1 + 4) = *(unsigned int *)(iVar1 + param_1 + 4);
    uVar4 = uVar6;
  }
  if ((int)uVar6 == (int)param_3) {
    iVar3 = (int)((uVar4 & 0xffffffff) << 3);
    iVar1 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    uVar4 = param_3 - 1;
    *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(iVar1 + -8);
    *(unsigned int *)(iVar3 + param_1 + 4) = *(unsigned int *)(iVar1 + -4);
  }
  iVar1 = (int)uVar4;
  uVar8 = iVar1 - 1;
  bVar9 = (int)uVar8 < 0 && (uVar8 & 1) != 0;
  while ((uVar7 = (__int64)((int)uVar8 >> 1) + (unsigned __int64)bVar9, (int)param_2 < iVar1 &&
         (iVar1 = (int)uVar7, puVar2 = (unsigned int *)(iVar1 * 8 + param_1),
         (int)puVar2[1] < (int)param_4[1]))) {
    uVar8 = iVar1 - 1;
    puVar5 = (unsigned int *)((int)((uVar4 & 0xffffffff) << 3) + param_1);
    bVar9 = (int)uVar8 < 0 && (uVar8 & 1) != 0;
    *puVar5 = *puVar2;
    puVar5[1] = puVar2[1];
    uVar4 = uVar7;
  }
  iVar1 = (int)((uVar4 & 0xffffffff) << 3);
  *(unsigned int *)(iVar1 + param_1) = *param_4;
  *(unsigned int *)(iVar1 + param_1 + 4) = param_4[1];
  return;
}

