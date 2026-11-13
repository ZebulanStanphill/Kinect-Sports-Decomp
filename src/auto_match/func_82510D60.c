#define true 1


void fn_82510D60(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  
  iVar2 = param_2;
  while( true ) {
    iVar5 = (iVar2 + 1) * 2;
    if (param_3 <= iVar5) break;
    puVar7 = (unsigned int *)((iVar2 + 1) * 0x20 + param_1);
    if (*puVar7 < puVar7[-4]) {
      iVar5 = iVar5 + -1;
    }
    iVar1 = iVar5 * 0x10 + param_1;
    iVar4 = iVar2 * 0x10 + param_1;
    *(unsigned int *)(iVar2 * 0x10 + param_1) = *(unsigned int *)(iVar5 * 0x10 + param_1);
    *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(iVar1 + 4);
    *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar1 + 8);
    *(unsigned int *)(iVar4 + 0xc) = *(unsigned int *)(iVar1 + 0xc);
    iVar2 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar4 = iVar2 * 0x10;
    iVar5 = param_3 * 0x10 + param_1;
    iVar1 = iVar4 + param_1;
    iVar2 = param_3 + -1;
    *(unsigned int *)(iVar4 + param_1) = *(unsigned int *)(iVar5 + -0x10);
    *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar5 + -0xc);
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar5 + -8);
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar5 + -4);
  }
  uVar6 = iVar2 - 1;
  iVar5 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
  while (iVar1 = iVar5, param_2 < iVar2) {
    puVar7 = (unsigned int *)(iVar1 * 0x10 + param_1);
    if (*param_4 <= *puVar7) break;
    puVar3 = (unsigned int *)(iVar2 * 0x10 + param_1);
    uVar6 = iVar1 - 1;
    *puVar3 = *puVar7;
    puVar3[1] = puVar7[1];
    puVar3[2] = puVar7[2];
    puVar3[3] = puVar7[3];
    iVar5 = ((int)uVar6 >> 1) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 1) != 0);
    iVar2 = iVar1;
  }
  iVar5 = iVar2 * 0x10 + param_1;
  *(unsigned int *)(iVar2 * 0x10 + param_1) = *param_4;
  *(unsigned int *)(iVar5 + 4) = param_4[1];
  *(unsigned int *)(iVar5 + 8) = param_4[2];
  *(unsigned int *)(iVar5 + 0xc) = param_4[3];
  return;
}

