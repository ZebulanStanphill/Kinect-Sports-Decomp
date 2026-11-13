extern unsigned int uStack_30;


int * fn_8283F7C0(int param_1,unsigned int *param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  unsigned int uStack_30;
  char *pcStack_28;
  char *pcStack_24;
  char *pcStack_14;
  char *pcStack_10;
  
  if (param_1 != 0) {
    for (uStack_30 = 0; uStack_30 < *(unsigned int *)(*(int *)(param_1 + 0x24) + 4);
        uStack_30 = uStack_30 + 1) {
      piVar3 = (int *)(**(int **)(param_1 + 0x24) + uStack_30 * 0x10);
      if ((*piVar3 != 0) && (piVar3[1] != 0)) {
        pcStack_24 = (char *)*param_2;
        pcStack_28 = (char *)*piVar3;
        do {
          cVar1 = *pcStack_28;
          cVar2 = *pcStack_24;
          if (cVar1 == '\0') break;
          pcStack_28 = pcStack_28 + 1;
          pcStack_24 = pcStack_24 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          pcStack_10 = (char *)param_2[1];
          pcStack_14 = (char *)piVar3[1];
          do {
            cVar1 = *pcStack_14;
            cVar2 = *pcStack_10;
            if (cVar1 == '\0') break;
            pcStack_14 = pcStack_14 + 1;
            pcStack_10 = pcStack_10 + 1;
          } while (cVar1 == cVar2);
          if ((cVar1 == cVar2) && (piVar3[2] == param_2[2])) {
            return piVar3;
          }
        }
      }
    }
  }
  return (int *)0x0;
}

