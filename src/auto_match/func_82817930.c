void fn_82817930(unsigned int *param_1,int (**param_2)(),int (**param_3)(),int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  
  if (param_1[2] == 0) {
    (*param_2)(param_4,0,*param_1);
    iVar2 = 0;
    if (param_1[3] == 0) {
      if (0 < (int)param_1[4]) {
        puVar4 = param_1 + 5;
        do {
          piVar3 = puVar4 + 1;
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 2;
          *(unsigned int *)(*piVar3 + param_4) = *puVar4;
        } while (iVar2 < (int)param_1[4]);
      }
    }
    else if (0 < (int)param_1[4]) {
      piVar3 = param_1 + 5;
      do {
        piVar1 = piVar3 + 1;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
        *(int *)(*piVar1 + param_4) = *piVar3 + param_4;
      } while (iVar2 < (int)param_1[4]);
    }
  }
  else {
    (*param_3)();
    if ((param_1[3] != 0) && (iVar2 = 0, 0 < (int)param_1[4])) {
      piVar3 = param_1 + 5;
      do {
        piVar1 = piVar3 + 1;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 2;
        *(int *)(*piVar1 + param_4) = *piVar3 + param_4;
      } while (iVar2 < (int)param_1[4]);
    }
  }
  return;
}

