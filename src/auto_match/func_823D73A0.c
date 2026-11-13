extern unsigned int *auStack_50;


void fn_823D73A0(unsigned __int64 *param_1,unsigned __int64 *param_2,int (**param_3)())

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  char cVar3;
  unsigned __int64 *puVar4;
  unsigned __int64 *puVar5;
  unsigned __int64 auStack_50;
  
  puVar1 = param_1;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      auStack_50 = *puVar2;
      cVar3 = (*param_3)(&auStack_50,param_1);
      puVar4 = puVar2;
      puVar5 = puVar1;
      if (cVar3 == '\0') {
        while (cVar3 = (*param_3)(&auStack_50,puVar5), cVar3 != '\0') {
          *(unsigned int *)puVar4 = *(unsigned int *)puVar5;
          *(unsigned int *)((int)puVar4 + 4) = *(unsigned int *)((int)puVar5 + 4);
          puVar4 = puVar5;
          puVar5 = puVar5 + -1;
        }
        *puVar4 = auStack_50;
      }
      else {
        while (param_1 != puVar4) {
          *(unsigned int *)puVar4 = *(unsigned int *)(puVar4 + -1);
          *(unsigned int *)((int)puVar4 + 4) = *(unsigned int *)((int)puVar4 + -4);
          puVar4 = puVar4 + -1;
        }
        *param_1 = auStack_50;
      }
      puVar1 = puVar1 + 1;
    }
  }
  return;
}

