extern int fn_8265CA20();
extern int fn_828B3E88();
extern int fn_828D8138();


int * fn_828D81E8(int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  *param_1 = param_3;
  if (param_3 != (int)param_4) {
    puVar2 = (unsigned int *)fn_828D8138(param_4,*(unsigned int *)(param_2 + 4));
    puVar1 = *(unsigned int **)(param_2 + 4);
    if (puVar2 != puVar1) {
      puVar4 = puVar2 + 1;
      do {
        fn_828B3E88(puVar4);
        fn_8265CA20(*puVar4);
        *puVar4 = 0;
        puVar3 = puVar4 + 6;
        puVar4 = puVar4 + 7;
      } while (puVar3 != puVar1);
    }
    *(unsigned int **)(param_2 + 4) = puVar2;
  }
  return param_1;
}

