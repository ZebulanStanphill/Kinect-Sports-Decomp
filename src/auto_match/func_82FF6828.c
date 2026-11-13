extern int _blkmov();
extern int fn_8302AE48();


unsigned __int64 fn_82FF6828(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  __int64 lVar8;
  
  piVar7 = *(int **)(param_1 + 4);
  if (piVar7 != *(int **)(param_1 + 8)) {
    do {
      iVar1 = piVar7[1];
      uVar6 = (__int64)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) >> 4) - 1;
      if (-1 < (__int64)uVar6) {
        lVar8 = (uVar6 & 0xfffffff) << 4;
        do {
          iVar3 = *(int *)((int)lVar8 + *(int *)(iVar1 + 0x10));
          for (piVar5 = *(int **)(param_1 + 4);
              (piVar5 != *(int **)(param_1 + 8) && (*piVar5 != *piVar7)); piVar5 = piVar5 + 2) {
          }
          iVar2 = *(int *)(-(unsigned int)(*(int **)(param_1 + 8) != piVar5) & (unsigned int)(piVar5 + 1));
          for (piVar5 = *(int **)(iVar2 + 0x10);
              (piVar5 != *(int **)(iVar2 + 0x14) && (*piVar5 != iVar3)); piVar5 = piVar5 + 4) {
          }
          piVar5 = (int *)(-(unsigned int)(*(int **)(iVar2 + 0x14) != piVar5) & (unsigned int)(piVar5 + 1));
          if (piVar5 != (int *)0x0) {
            piVar5 = (int *)*piVar5;
            if (*(int **)(iVar2 + 0xc) == piVar5) {
              *(unsigned int *)(iVar2 + 0xc) = 0;
            }
            fn_8302AE48(piVar5);
            (**(int (***)())(*piVar5 + 8))(piVar5);
            piVar5 = *(int **)(iVar2 + 0x14);
            piVar4 = *(int **)(iVar2 + 0x10);
            if (piVar4 != piVar5) {
              do {
                if (*piVar4 == iVar3) break;
                piVar4 = piVar4 + 4;
              } while (piVar4 != piVar5);
              if (piVar4 != piVar5) {
                if (piVar4 < piVar5 + -4) {
                  _blkmov(piVar4,piVar4 + 4);
                }
                *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + -0x10;
              }
            }
          }
          uVar6 = uVar6 - 1;
          lVar8 = lVar8 + -0x10;
        } while (-1 < (__int64)uVar6);
      }
      piVar7 = piVar7 + 2;
    } while (piVar7 != *(int **)(param_1 + 8));
  }
  return 1;
}

