extern unsigned int *auStack_30;
extern int fn_825368B0();
extern int fn_82536FD8();
extern int fn_8265CA20();


unsigned int * fn_82536E90(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  unsigned char auStack_30 [48];
  
  piVar4 = *(int **)(param_2 + 4);
  if ((param_3 == (int *)*piVar4) && (param_4 == piVar4)) {
    cVar1 = *(char *)(piVar4[1] + 0x31);
    piVar4 = (int *)piVar4[1];
    while (cVar1 == '\0') {
      fn_82536FD8(param_2,piVar4[2]);
      piVar2 = (int *)*piVar4;
      (**(int (***)())piVar4[3])(piVar4 + 3,0);
      fn_8265CA20(piVar4);
      piVar4 = piVar2;
      cVar1 = *(char *)((int)piVar2 + 0x31);
    }
    *(int *)(*(int *)(param_2 + 4) + 4) = *(int *)(param_2 + 4);
    *(unsigned int *)*(unsigned int *)(param_2 + 4) = *(unsigned int *)(param_2 + 4);
    *(int *)(*(int *)(param_2 + 4) + 8) = *(int *)(param_2 + 4);
    *(unsigned int *)(param_2 + 8) = 0;
    *param_1 = **(unsigned int **)(param_2 + 4);
  }
  else {
    while (param_3 != param_4) {
      piVar4 = param_3;
      if (*(char *)((int)param_3 + 0x31) == '\0') {
        piVar4 = (int *)param_3[2];
        if (*(char *)((int)piVar4 + 0x31) == '\0') {
          piVar2 = (int *)*piVar4;
          while (piVar3 = piVar2, *(char *)((int)piVar3 + 0x31) == '\0') {
            piVar4 = piVar3;
            piVar2 = (int *)*piVar3;
          }
        }
        else {
          piVar2 = (int *)param_3[1];
          piVar3 = param_3;
          while ((piVar4 = piVar2, *(char *)((int)piVar4 + 0x31) == '\0' &&
                 (piVar3 == (int *)piVar4[2]))) {
            piVar3 = piVar4;
            piVar2 = (int *)piVar4[1];
          }
        }
      }
      fn_825368B0(auStack_30,param_2,param_3);
      param_3 = piVar4;
    }
    *param_1 = param_3;
  }
  return param_1;
}

