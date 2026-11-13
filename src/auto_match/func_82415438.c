extern int fn_82415550();
extern int fn_82536690();
extern int fn_8265C9E0();


void fn_82415438(int *param_1,unsigned int param_2)

{
  int iVar1;
  char cVar2;
  unsigned int *apuStack_20 [2];
  
  cVar2 = fn_82415550();
  if (cVar2 == '\0') {
    apuStack_20[0] = (unsigned int *)fn_8265C9E0(0xc);
    if (apuStack_20[0] == (unsigned int *)0x0) {
      apuStack_20[0] = (unsigned int *)0x0;
    }
    else {
      *apuStack_20[0] = param_2;
      apuStack_20[0][1] = 0;
      apuStack_20[0][2] = 0;
    }
    iVar1 = param_1[6] - param_1[5] >> 2;
    if (iVar1 != 0) {
      *(unsigned int **)(*(int *)(iVar1 * 4 + param_1[5] + -4) + 8) = apuStack_20[0];
    }
    fn_82536690(param_1 + 5,apuStack_20);
    iVar1 = *(int *)(*param_1 * 4 + param_1[1]);
    if (*(int *)(iVar1 + 4) == 0) {
      *(unsigned int **)(iVar1 + 4) = apuStack_20[0];
    }
    else if (*(int *)(iVar1 + 8) == 0) {
      *(unsigned int **)(iVar1 + 8) = apuStack_20[0];
    }
    cVar2 = (**(int (***)())**(unsigned int **)(*param_1 * 4 + param_1[1]))();
    if (cVar2 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

