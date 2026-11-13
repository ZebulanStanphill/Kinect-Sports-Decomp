#define true 1
extern unsigned int *auStack_50;
extern int fn_8250A688();
extern unsigned int uStack_54;


void fn_8250BC10(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int uStack_54;
  unsigned char auStack_50 [1];
  
  iVar5 = param_1;
  iVar7 = param_1;
  while (iVar1 = iVar7 + 0x14, iVar1 != param_2) {
    puVar4 = &uStack_54;
    puVar3 = (unsigned int *)(iVar7 + 0x10);
    lVar8 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    cVar2 = fn_8250A688(auStack_50,param_1);
    iVar7 = iVar1;
    iVar6 = iVar5;
    if (cVar2 == '\0') {
      while( true ) {
        cVar2 = fn_8250A688(auStack_50,iVar6);
        lVar8 = 5;
        puVar3 = (unsigned int *)(iVar7 + -4);
        lVar9 = 5;
        if (cVar2 == '\0') break;
        puVar4 = (unsigned int *)(iVar6 + -4);
        do {
          puVar4 = puVar4 + 1;
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        iVar7 = iVar6;
        iVar6 = iVar6 + -0x14;
      }
      puVar4 = &uStack_54;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    else {
      while (param_1 != iVar7) {
        iVar6 = iVar7 + -0x14;
        puVar4 = (unsigned int *)(iVar7 + -4);
        puVar3 = (unsigned int *)(iVar7 + -0x18);
        lVar8 = 5;
        do {
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar3;
          lVar8 = lVar8 + -1;
          iVar7 = iVar6;
        } while (lVar8 != 0);
      }
      puVar3 = &uStack_54;
      puVar4 = (unsigned int *)(param_1 + -4);
      lVar8 = 5;
      do {
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    iVar5 = iVar5 + 0x14;
    iVar7 = iVar1;
  }
  return;
}

