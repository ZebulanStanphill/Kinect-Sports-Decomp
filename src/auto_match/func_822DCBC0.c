#define true 1
extern unsigned int *auStack_50;
extern int fn_822D9E28();
extern unsigned int stack0x00000030;
extern unsigned int uStack00000030;


void fn_822DCBC0(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  char cVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uStack00000030;
  unsigned __int64 auStack_50 [10];
  
  iVar7 = param_2;
  uStack00000030 = param_5;
  while( true ) {
    iVar6 = (iVar7 + 1U) * 2;
    if (param_3 <= iVar6) break;
    iVar2 = (iVar7 + 1U & 0x7fffffff) * 0x28 + param_1;
    cVar1 = fn_822D9E28(&stack0x00000030,iVar2,iVar2 + -0x14);
    if (cVar1 != '\0') {
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
  auStack_50[0] = param_5;
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
    iVar2 = iVar6 * 0x14 + param_1;
    cVar1 = fn_822D9E28(auStack_50,iVar2,param_4);
    if (cVar1 == '\0') break;
    puVar3 = (unsigned int *)(iVar2 + -4);
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

