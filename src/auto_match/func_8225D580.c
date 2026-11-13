extern int fn_8265CA20();
extern int fn_82825AD0();
extern int fn_82829120();
extern int fn_82A1C0F0();
extern int memmove();
extern unsigned int iStack_40;


void fn_8225D580(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iStack_40;
  int aiStack_3c [15];
  
  iStack_40 = param_2;
  fn_82829120(aiStack_3c,param_1 + 0x48,&iStack_40);
  if (aiStack_3c[0] != *(int *)(param_1 + 0x4c)) {
    iVar1 = *(int *)(aiStack_3c[0] + 0x10);
    if (iVar1 != 0) {
      if (((*(int *)(iVar1 + 0x404) == 0) && (*(unsigned int *)(iVar1 + 0x40c) < 3)) &&
         (*(int *)(iVar1 + 1000) == 0x3e5)) {
        fn_82A1C0F0(iVar1 + 1000);
      }
      fn_8265CA20(iVar1);
    }
    fn_82825AD0(aiStack_3c,param_1 + 0x48,aiStack_3c[0]);
  }
  piVar2 = *(int **)(param_1 + 0x24);
  piVar4 = *(int **)(param_1 + 0x20);
  if (piVar4 != piVar2) {
    do {
      if (*piVar4 == param_2) break;
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
    piVar3 = piVar4;
    if (piVar4 != piVar2) {
      while (piVar3 = piVar3 + 1, piVar3 != piVar2) {
        if (*piVar3 != param_2) {
          *piVar4 = *piVar3;
          piVar4 = piVar4 + 1;
        }
      }
    }
  }
  if (piVar4 != *(int **)(param_1 + 0x24)) {
    memmove(piVar4,*(int **)(param_1 + 0x24),0);
    *(int **)(param_1 + 0x24) = piVar4;
  }
  return;
}

