#define true 1


void fn_8250FF18(int param_1,int param_2,int param_3,unsigned __int64 *param_4)

{
  int iVar1;
  unsigned __int64 *puVar2;
  int iVar3;
  unsigned __int64 *puVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  
  iVar3 = param_2;
  while( true ) {
    iVar6 = (iVar3 + 1) * 2;
    if (param_3 <= iVar6) break;
    iVar1 = (iVar3 + 1) * 0x40 + param_1;
    if (*(float *)(iVar1 + 0x10) < *(float *)(iVar1 + -0x10)) {
      iVar6 = iVar6 + -1;
    }
    iVar1 = iVar6 * 0x20 + param_1;
    iVar5 = iVar3 * 0x20 + param_1;
    *(unsigned __int64 *)(iVar3 * 0x20 + param_1) = *(unsigned __int64 *)(iVar6 * 0x20 + param_1);
    *(unsigned __int64 *)(iVar5 + 8) = *(unsigned __int64 *)(iVar1 + 8);
    *(unsigned __int64 *)(iVar5 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar5 + 0x18) = *(unsigned __int64 *)(iVar1 + 0x18);
    iVar3 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar5 = iVar3 * 0x20;
    iVar6 = param_3 * 0x20 + param_1;
    iVar1 = iVar5 + param_1;
    iVar3 = param_3 + -1;
    *(unsigned __int64 *)(iVar5 + param_1) = *(unsigned __int64 *)(iVar6 + -0x20);
    *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar6 + -0x18);
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar6 + -0x10);
    *(unsigned __int64 *)(iVar1 + 0x18) = *(unsigned __int64 *)(iVar6 + -8);
  }
  uVar7 = iVar3 - 1;
  iVar6 = ((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0);
  while ((iVar1 = iVar6, param_2 < iVar3 &&
         (puVar2 = (unsigned __int64 *)(iVar1 * 0x20 + param_1),
         *(float *)(puVar2 + 2) < *(float *)(param_4 + 2)))) {
    uVar7 = iVar1 - 1;
    puVar4 = (unsigned __int64 *)(iVar3 * 0x20 + param_1);
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    puVar4[2] = puVar2[2];
    puVar4[3] = puVar2[3];
    iVar6 = ((int)uVar7 >> 1) + (unsigned int)((int)uVar7 < 0 && (uVar7 & 1) != 0);
    iVar3 = iVar1;
  }
  iVar6 = iVar3 * 0x20 + param_1;
  *(unsigned __int64 *)(iVar3 * 0x20 + param_1) = *param_4;
  *(unsigned __int64 *)(iVar6 + 8) = param_4[1];
  *(unsigned __int64 *)(iVar6 + 0x10) = param_4[2];
  *(unsigned __int64 *)(iVar6 + 0x18) = param_4[3];
  return;
}

