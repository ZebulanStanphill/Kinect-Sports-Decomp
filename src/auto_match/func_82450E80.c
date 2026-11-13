typedef unsigned char bool;
#define true 1


void fn_82450E80(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  unsigned __int64 uVar6;
  bool bVar8;
  
  uVar2 = param_2;
  while( true ) {
    uVar6 = uVar2 + 1 & 0x7fffffff;
    uVar5 = uVar6 * 2;
    if ((int)param_3 <= (int)uVar5) break;
    iVar1 = (int)(uVar6 << 4) + param_1;
    if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + -4)) {
      uVar5 = uVar5 - 1;
    }
    puVar3 = (unsigned int *)((int)((uVar5 & 0xffffffff) << 3) + param_1);
    puVar4 = (unsigned int *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    uVar2 = uVar5;
  }
  if ((int)uVar5 == (int)param_3) {
    iVar1 = (int)((param_3 & 0xffffffff) << 3) + param_1;
    puVar4 = (unsigned int *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
    uVar2 = param_3 - 1;
    *puVar4 = *(unsigned int *)(iVar1 + -8);
    puVar4[1] = *(unsigned int *)(iVar1 + -4);
  }
  iVar1 = (int)uVar2;
  uVar7 = iVar1 - 1;
  bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
  while ((uVar6 = (__int64)((int)uVar7 >> 1) + (unsigned __int64)bVar8, (int)param_2 < iVar1 &&
         (iVar1 = (int)uVar6, puVar4 = (unsigned int *)(iVar1 * 8 + param_1),
         (int)puVar4[1] < (int)param_4[1]))) {
    uVar7 = iVar1 - 1;
    puVar3 = (unsigned int *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
    bVar8 = (int)uVar7 < 0 && (uVar7 & 1) != 0;
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    uVar2 = uVar6;
  }
  puVar4 = (unsigned int *)((int)((uVar2 & 0xffffffff) << 3) + param_1);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  return;
}

