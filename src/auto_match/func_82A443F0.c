extern int fn_82A476E0();
extern int fn_82A47B28();


void fn_82A443F0(int param_1)

{
  int *piVar1;
  int iVar2;
  int aiStack_20 [2];
  
  aiStack_20[0] = 0;
  iVar2 = fn_82A476E0(param_1 + 0xbc,aiStack_20);
  if (iVar2 != 0) {
    do {
      for (piVar1 = *(int **)(param_1 + 0xac); (piVar1 != (int *)0x0 && (*piVar1 != aiStack_20[0]));
          piVar1 = (int *)piVar1[1]) {
      }
      fn_82A47B28(param_1 + 0x94,piVar1);
      iVar2 = fn_82A476E0(param_1 + 0xbc,aiStack_20);
    } while (iVar2 != 0);
  }
  return;
}

