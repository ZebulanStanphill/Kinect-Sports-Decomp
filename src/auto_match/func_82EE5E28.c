unsigned __int64 fn_82EE5E28(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if ((param_2 != 0) && (*param_1 != 0)) {
    if ((unsigned int)param_1[6] < param_2) {
      return 0xffffffff80070057;
    }
    while (param_2 != 0) {
      piVar4 = (int *)param_1[1];
      uVar1 = piVar4[4];
      if (param_2 < uVar1) {
        piVar4[4] = uVar1 - param_2;
        piVar4[3] = param_2 + piVar4[3];
        param_1[6] = param_1[6] - param_2;
        return 0;
      }
      param_1[6] = param_1[6] - uVar1;
      param_2 = param_2 - piVar4[4];
      if (*param_1 != 0) {
        *param_1 = *param_1 + -1;
        iVar2 = *piVar4;
        piVar3 = (int *)piVar4[1];
        *piVar3 = iVar2;
        *(int **)(iVar2 + 4) = piVar3;
      }
      (**(int (***)())(*(int *)piVar4[2] + 8))();
      piVar4[2] = 0;
      iVar2 = param_1[4];
      piVar4[1] = (int)(param_1 + 4);
      *piVar4 = iVar2;
      *(int **)(iVar2 + 4) = piVar4;
      param_1[4] = (int)piVar4;
      param_1[3] = param_1[3] + 1;
    }
    piVar4 = (int *)(-(unsigned int)(param_1 + 1 != (int *)param_1[1]) & (unsigned int)param_1[1]);
    do {
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != param_1 + 1);
  }
  return 0;
}

