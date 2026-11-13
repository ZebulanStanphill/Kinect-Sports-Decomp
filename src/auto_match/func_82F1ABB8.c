extern int fn_82F1AA38();


void fn_82F1ABB8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,__int64 param_5,
                  __int64 param_6)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int *piVar6;
  int iVar7;
  unsigned int *puVar8;
  __int64 lVar9;
  __int64 lVar10;
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2048);
  puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1e54) + param_4 * 0x114);
  if ((param_2 & 0xffffffff) < (param_3 & 0xffffffff)) {
    lVar2 = param_3 - param_2;
    do {
      uVar3 = 0;
      if (*(int *)(param_1 + 0x2d0) != 0) {
        do {
          iVar7 = 0;
          piVar6 = puVar5 + 8;
          lVar9 = param_6;
          lVar10 = param_5;
          puVar8 = puVar5;
          do {
            puVar8 = puVar8 + 1;
            if (*(char *)((int)puVar5 + iVar7 + 0x4a) != '\0') {
              if ((*(int *)(param_1 + 0xa0c) != 0) &&
                 ((*(int *)(param_1 + 0xaf0) == 0 || (*(int *)(param_1 + 0xaf0) == 4)))) {
                if (puVar5[7] == 0) {
                  uVar4 = 0xffffffff831a7fc0;
                }
                else {
                  uVar4 = 0xffffffff831a7dc0;
                  if (*piVar6 == 0) {
                    uVar4 = 0xffffffff831a7ec0;
                  }
                }
              }
              uVar1 = fn_82F1AA38(param_1,lVar10,lVar9,uVar4);
              *puVar8 = uVar1;
            }
            iVar7 = iVar7 + 1;
            lVar10 = lVar10 + 0x100;
            lVar9 = lVar9 + 2;
            piVar6 = piVar6 + 1;
          } while (iVar7 < 6);
          uVar3 = uVar3 + 1;
          puVar5 = puVar5 + 0x45;
          param_5 = param_5 + 0x600;
          param_6 = param_6 + 0xc;
        } while (uVar3 < *(unsigned int *)(param_1 + 0x2d0));
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

