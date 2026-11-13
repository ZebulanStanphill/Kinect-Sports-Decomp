#define true 1


void fn_823DA900(int param_1,int param_2,int param_3,unsigned int *param_4,int (**param_5)())

{
  int iVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2;
  while( true ) {
    iVar6 = (iVar5 + 1) * 2;
    if (param_3 <= iVar6) break;
    iVar1 = (iVar5 + 1) * 0x18 + param_1;
    cVar2 = (*param_5)(iVar1,iVar1 + -0xc);
    if (cVar2 != '\0') {
      iVar6 = iVar6 + -1;
    }
    puVar3 = (unsigned int *)(iVar6 * 0xc + param_1);
    iVar1 = iVar5 * 0xc + param_1;
    *(unsigned int *)(iVar5 * 0xc + param_1) = *puVar3;
    *(unsigned int *)(iVar1 + 4) = puVar3[1];
    *(unsigned int *)(iVar1 + 8) = puVar3[2];
    iVar5 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar1 = param_3 * 0xc + param_1;
    iVar6 = iVar5 * 0xc + param_1;
    *(unsigned int *)(iVar5 * 0xc + param_1) = *(unsigned int *)(iVar1 + -0xc);
    iVar5 = param_3 + -1;
    *(unsigned int *)(iVar6 + 4) = *(unsigned int *)(iVar1 + -8);
    *(unsigned int *)(iVar6 + 8) = *(unsigned int *)(iVar1 + -4);
  }
  uVar4 = iVar5 - 1;
  iVar6 = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  while (param_2 < iVar5) {
    puVar3 = (unsigned int *)(iVar6 * 0xc + param_1);
    cVar2 = (*param_5)(puVar3,param_4);
    if (cVar2 == '\0') break;
    *(unsigned int *)(iVar5 * 0xc + param_1) = *puVar3;
    iVar5 = iVar5 * 0xc + param_1;
    uVar4 = iVar6 - 1;
    *(unsigned int *)(iVar5 + 4) = puVar3[1];
    *(unsigned int *)(iVar5 + 8) = puVar3[2];
    iVar5 = iVar6;
    iVar6 = ((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0);
  }
  *(unsigned int *)(iVar5 * 0xc + param_1) = *param_4;
  param_1 = iVar5 * 0xc + param_1;
  *(unsigned int *)(param_1 + 4) = param_4[1];
  *(unsigned int *)(param_1 + 8) = param_4[2];
  return;
}

