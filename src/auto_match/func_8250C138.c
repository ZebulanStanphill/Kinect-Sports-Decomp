#define true 1
extern int fn_8250A688();


void fn_8250C138(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  
  iVar7 = param_2;
  while( true ) {
    iVar6 = (iVar7 + 1U) * 2;
    if (param_3 <= iVar6) break;
    iVar1 = (iVar7 + 1U & 0x7fffffff) * 0x28 + param_1;
    cVar2 = fn_8250A688(iVar1,iVar1 + -0x14);
    if (cVar2 != '\0') {
      iVar6 = iVar6 + -1;
    }
    puVar3 = (unsigned int *)(iVar6 * 0x14 + param_1 + -4);
    puVar4 = (unsigned int *)(iVar7 * 0x14 + param_1 + -4);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
      iVar7 = iVar6;
    } while (lVar8 != 0);
  }
  if (iVar6 == param_3) {
    puVar3 = (unsigned int *)(param_3 * 0x14 + param_1 + -0x18);
    puVar4 = (unsigned int *)(iVar7 * 0x14 + param_1 + -4);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar7 = param_3 + -1;
  }
  while( true ) {
    uVar5 = iVar7 - 1;
    iVar6 = ((int)uVar5 >> 1) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 1) != 0);
    if (iVar7 <= param_2) break;
    iVar1 = iVar6 * 0x14 + param_1;
    cVar2 = fn_8250A688(iVar1,param_4);
    if (cVar2 == '\0') break;
    puVar3 = (unsigned int *)(iVar1 + -4);
    puVar4 = (unsigned int *)(iVar7 * 0x14 + param_1 + -4);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
      iVar7 = iVar6;
    } while (lVar8 != 0);
  }
  puVar3 = (unsigned int *)(param_4 + -4);
  puVar4 = (unsigned int *)(iVar7 * 0x14 + param_1 + -4);
  lVar8 = 5;
  do {
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

