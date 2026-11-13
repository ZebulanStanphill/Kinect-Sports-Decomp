extern int fn_83019A10();


unsigned __int64 fn_83019E38(int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  char cVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  cVar3 = fn_83019A10();
  if (cVar3 == '\0') {
    uVar2 = 2;
  }
  else {
    *(unsigned int *)(param_1[2] + 4) = param_2;
    *(unsigned int *)(param_1[2] + 8) = *param_3;
    if ((int *)*param_1 == (int *)0x0) {
      piVar6 = (int *)param_1[2];
      uVar2 = 1;
      param_1[1] = (int)piVar6;
      param_1[2] = *piVar6;
      *piVar6 = 0;
      *param_1 = param_1[1];
      param_1[5] = param_1[5] + 1;
    }
    else {
      piVar6 = (int *)*param_1;
      piVar4 = (int *)0x0;
      do {
        piVar5 = piVar6;
        piVar6 = piVar5;
        if (param_2 < (unsigned int)piVar5[1]) break;
        piVar6 = (int *)*piVar5;
        piVar4 = piVar5;
      } while (piVar6 != (int *)0x0);
      puVar1 = (unsigned int *)param_1[2];
      if (piVar6 == (int *)0x0) {
        param_1[1] = (int)puVar1;
      }
      if (piVar4 == (int *)0x0) {
        *param_1 = (int)puVar1;
      }
      else {
        *piVar4 = (int)puVar1;
      }
      uVar2 = 1;
      param_1[2] = *(int *)param_1[2];
      *puVar1 = piVar6;
      param_1[5] = param_1[5] + 1;
    }
  }
  return uVar2;
}

