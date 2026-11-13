unsigned __int64 fn_82FB2590(int param_1,int param_2,unsigned int *param_3)

{
  int *piVar1;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0xbc);
  piVar4 = *(int **)(param_1 + 0xb8);
  for (piVar2 = piVar4; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
  }
  puVar3 = (unsigned int *)(-(unsigned int)(piVar1 != piVar2) & (unsigned int)(piVar2 + 1));
  if (puVar3 == (unsigned int *)0x0) {
    for (; (piVar4 != piVar1 && (*piVar4 != *(int *)(param_1 + 200))); piVar4 = piVar4 + 2) {
    }
    puVar3 = (unsigned int *)(-(unsigned int)(piVar1 != piVar4) & (unsigned int)(piVar4 + 1));
    if (puVar3 == (unsigned int *)0x0) {
      *param_3 = 0;
      return 0x39;
    }
  }
  *param_3 = *puVar3;
  return 1;
}

