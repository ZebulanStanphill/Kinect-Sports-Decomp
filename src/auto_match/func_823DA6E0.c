extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_823DA6E0(unsigned int *param_1,unsigned int *param_2,int (**param_3)())

{
  unsigned int *puVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  
  puVar3 = param_1;
  puVar1 = param_1;
  while (puVar1 = puVar1 + 3, puVar1 != param_2) {
    stack_pair_50.first = *puVar1;
    stack_pair_50.second = puVar1[1];
    uStack_48 = puVar1[2];
    cVar2 = (*param_3)(&stack_pair_50.first,param_1);
    puVar4 = puVar1;
    puVar5 = puVar3;
    if (cVar2 == '\0') {
      while (cVar2 = (*param_3)(&stack_pair_50.first,puVar5), cVar2 != '\0') {
        *puVar4 = *puVar5;
        puVar4[1] = puVar5[1];
        puVar4[2] = puVar5[2];
        puVar4 = puVar5;
        puVar5 = puVar5 + -3;
      }
      *puVar4 = stack_pair_50.first;
      puVar4[1] = stack_pair_50.second;
      puVar4[2] = uStack_48;
    }
    else {
      while (param_1 != puVar4) {
        *puVar4 = puVar4[-3];
        puVar4[1] = puVar4[-2];
        puVar4[2] = puVar4[-1];
        puVar4 = puVar4 + -3;
      }
      *param_1 = stack_pair_50.first;
      param_1[1] = stack_pair_50.second;
      param_1[2] = uStack_48;
    }
    puVar3 = puVar3 + 3;
  }
  return;
}

