#define true 1
extern unsigned int *auStack_64;
extern unsigned int *auStack_80;
extern unsigned int *auStack_8f;
extern unsigned int uStack_84;
extern unsigned int uStack_90;


void fn_82DA7740(int param_1,int param_2,int param_3,int (**param_4)())

{
  char cVar1;
  char *pcVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  unsigned char uStack_90;
  unsigned char auStack_8f [1];
  unsigned int uStack_84;
  unsigned char auStack_80 [28];
  unsigned int auStack_64 [25];
  
  do {
    lVar9 = 5;
    puVar3 = &uStack_84;
    puVar5 = (unsigned int *)((param_2 + param_3 >> 1) * 0x14 + param_1 + -4);
    do {
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar5;
      lVar9 = lVar9 + -1;
      iVar7 = param_2;
      iVar8 = param_3;
    } while (lVar9 != 0);
    do {
      iVar6 = iVar7 * 0x14 + param_1;
      pcVar2 = (char *)(*param_4)(&uStack_90,iVar6,auStack_80);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        iVar6 = iVar6 + 0x14;
        iVar7 = iVar7 + 1;
        pcVar2 = (char *)(*param_4)(&uStack_90,iVar6,auStack_80);
        cVar1 = *pcVar2;
      }
      iVar6 = iVar8 * 0x14 + param_1;
      pcVar2 = (char *)(*param_4)(auStack_8f,auStack_80,iVar6);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        iVar6 = iVar6 + -0x14;
        iVar8 = iVar8 + -1;
        pcVar2 = (char *)(*param_4)(auStack_8f,auStack_80,iVar6);
        cVar1 = *pcVar2;
      }
      if (iVar8 < iVar7) break;
      if (iVar8 != iVar7) {
        iVar4 = iVar8 * 0x14 + param_1;
        puVar3 = auStack_64;
        lVar9 = 5;
        iVar6 = iVar7 * 0x14 + param_1;
        puVar5 = (unsigned int *)(iVar4 + -4);
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar5 = (unsigned int *)(iVar6 + -4);
        puVar3 = (unsigned int *)(iVar4 + -4);
        lVar9 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        puVar5 = auStack_64;
        puVar3 = (unsigned int *)(iVar6 + -4);
        lVar9 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar5;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      iVar8 = iVar8 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar8);
    if (param_2 < iVar8) {
      fn_82DA7740(param_1,param_2,iVar8,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

