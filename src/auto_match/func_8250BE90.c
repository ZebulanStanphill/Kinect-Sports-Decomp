#define true 1


void fn_8250BE90(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  
  iVar1 = param_2;
  while( true ) {
    iVar2 = (iVar1 + 1) * 2;
    if (param_3 <= iVar2) break;
    iVar3 = (iVar1 + 1) * 0x28 + param_1;
    if (*(float *)(iVar3 + 8) < *(float *)(iVar3 + -0xc)) {
      iVar2 = iVar2 + -1;
    }
    puVar4 = (unsigned int *)(iVar2 * 0x14 + param_1 + -4);
    puVar6 = (unsigned int *)(iVar1 * 0x14 + param_1 + -4);
    lVar7 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar4;
      lVar7 = lVar7 + -1;
      iVar1 = iVar2;
    } while (lVar7 != 0);
  }
  if (iVar2 == param_3) {
    puVar4 = (unsigned int *)(param_3 * 0x14 + param_1 + -0x18);
    puVar6 = (unsigned int *)(iVar1 * 0x14 + param_1 + -4);
    lVar7 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar1 = param_3 + -1;
  }
  while( true ) {
    uVar5 = iVar1 - 1;
    iVar2 = ((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    if ((iVar1 <= param_2) ||
       (iVar3 = iVar2 * 0x14 + param_1, *(float *)(param_4 + 8) <= *(float *)(iVar3 + 8))) break;
    puVar4 = (unsigned int *)(iVar3 + -4);
    puVar6 = (unsigned int *)(iVar1 * 0x14 + param_1 + -4);
    lVar7 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar4;
      lVar7 = lVar7 + -1;
      iVar1 = iVar2;
    } while (lVar7 != 0);
  }
  puVar4 = (unsigned int *)(param_4 + -4);
  puVar6 = (unsigned int *)(iVar1 * 0x14 + param_1 + -4);
  lVar7 = 5;
  do {
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
    *puVar6 = *puVar4;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}

