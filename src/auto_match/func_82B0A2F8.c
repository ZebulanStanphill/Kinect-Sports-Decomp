typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82AF54E0();
extern int fn_82AF6268();
extern int fn_82AF8E30();
extern int fn_82AFA478();
extern int fn_82B006B0();
extern int fn_82B09BE0();
extern int fn_82B16698();
extern unsigned int uStack_68;
extern unsigned int uStack_78;


bool fn_82B0A2F8(int param_1,unsigned int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  char cVar6;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned int auStack_90 [4];
  unsigned char auStack_80 [8];
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [8];
  unsigned __int64 uStack_68;
  
  *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) | 6;
  piVar8 = (int *)0x0;
  uVar7 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  uVar9 = 0;
  uVar10 = 0;
  for (uVar3 = *(unsigned int *)((param_2 & 0xfffffffe) + 0x24); (uVar3 & 1) == 0;
      uVar3 = *(unsigned int *)(uVar3 - 4)) {
    uVar3 = uVar3 & 0xfffffffe;
    piVar11 = (int *)(uVar3 - 0x28);
    if (piVar11 == (int *)0x0) break;
    for (iVar5 = *(int *)(uVar3 - 0x24); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      iVar1 = *(int *)(iVar5 + 0x10);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_3)) &&
         ((*(unsigned int *)(iVar1 + 0x14) & 2) != 0)) {
        *(unsigned int *)(uVar3 - 0x14) = *(unsigned int *)(uVar3 - 0x14) | 2;
        goto LAB_82b0a46c;
      }
    }
    if ((*(unsigned int *)(uVar3 - 0x20) >> 7 & 0x7f) == uVar7) {
      if ((*(unsigned int *)(uVar3 - 0x20) >> 0x1a & 1) != 0) {
        fn_82B16698(param_1,piVar11,*(unsigned int *)(param_1 + 0x294));
      }
      cVar6 = fn_82AF6268(param_1,piVar11);
      if ((cVar6 == '\0') &&
         (uVar4 = fn_82AF8E30(param_1,param_2,piVar11,auStack_80), uVar4 < 5)) {
        uVar2 = fn_82AF54E0(param_1,param_2,piVar11);
        if (((uVar10 <= uVar2) && ((uVar2 != uVar10 || (uVar9 < uVar4)))) &&
           (iVar5 = fn_82B09BE0(param_1,param_2,piVar11,auStack_90,auStack_80), iVar5 == 0)) {
          if (*(unsigned int *)(param_1 + 0x298) < auStack_90[0]) {
            fn_82AFA478(param_1,param_2);
          }
          else {
            uStack_68 = uStack_78;
            piVar8 = piVar11;
            uVar9 = uVar4;
            uVar10 = uVar2;
          }
        }
      }
    }
LAB_82b0a46c:;}
  piVar11 = *(int **)((param_2 & 0xfffffffe) + 0x28);
  do {
    if ((((unsigned int)piVar11 & 1) != 0) || (piVar11 == (int *)0x0)) {
      for (uVar3 = *(unsigned int *)(param_3 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
          uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x28)) {
        *(unsigned int *)(uVar3 + 0x14) = *(unsigned int *)(uVar3 + 0x14) & 0xfffffff9;
      }
      if (piVar8 != (int *)0x0) {
        fn_82B006B0(param_1,param_2,piVar8,auStack_70);
      }
      return piVar8 != (int *)0x0;
    }
    for (iVar5 = *piVar11; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
      if ((*(int *)(*(int *)(iVar5 + 0xc) + 0x1c) == param_3) &&
         ((*(unsigned int *)(*(int *)(iVar5 + 0xc) + 0x14) & 4) != 0)) {
        piVar11[5] = piVar11[5] | 4;
        goto LAB_82b0a5b8;
      }
    }
    if (((unsigned int)piVar11[2] >> 7 & 0x7f) == uVar7) {
      if (((unsigned int)piVar11[2] >> 0x1a & 1) != 0) {
        fn_82B16698(param_1,piVar11,*(unsigned int *)(param_1 + 0x294));
      }
      cVar6 = fn_82AF6268(param_1,piVar11);
      if ((cVar6 == '\0') &&
         (uVar3 = fn_82AF8E30(param_1,param_2,piVar11,auStack_80), uVar3 < 5)) {
        uVar4 = fn_82AF54E0(param_1,param_2,piVar11);
        if ((uVar10 <= uVar4) &&
           (((uVar4 != uVar10 || (uVar9 < uVar3)) &&
            (iVar5 = fn_82B09BE0(param_1,param_2,piVar11,auStack_90,auStack_80), iVar5 == 0)))) {
          if (*(unsigned int *)(param_1 + 0x298) < auStack_90[0]) {
            fn_82AFA478(param_1,param_2);
          }
          else {
            uStack_68 = uStack_78;
            piVar8 = piVar11;
            uVar9 = uVar3;
            uVar10 = uVar4;
          }
        }
      }
    }
LAB_82b0a5b8:
    piVar11 = *(int **)(((unsigned int)piVar11 & 0xfffffffe) + 0x28);
  } while( true );
}

