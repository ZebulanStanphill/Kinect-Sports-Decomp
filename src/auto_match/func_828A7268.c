extern unsigned int *auStack_40;
extern int fn_828A2058();
extern int fn_828A4FF8();
extern int fn_828A6B80();
extern int fn_828E2F58();
extern int fn_828E5F60();
extern unsigned int iStack_38;
extern unsigned int iStack_3c;


unsigned int * fn_828A7268(unsigned int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  int aiStack_34 [13];
  
  fn_828A2058(param_1,auStack_40);
  fn_828A4FF8(param_1,*(unsigned int *)*param_1,*(unsigned int *)*param_2,(unsigned int *)*param_2,
                auStack_40[0]);
  fn_828E2F58(param_1 + 3,auStack_40,auStack_40);
  fn_828A6B80(param_1 + 3,param_2 + 3);
  *(unsigned char *)(param_1 + 7) = *(unsigned char *)(param_2 + 7);
  iStack_38 = *(int *)param_1[4];
  puVar4 = *(unsigned int **)*param_1;
  aiStack_34[0] = *(int *)param_2[4];
  if ((int *)aiStack_34[0] != (int *)param_2[4]) {
    do {
      *(unsigned int **)(iStack_38 + 0x18) = puVar4;
      iVar1 = param_2[4];
      if (aiStack_34[0] == iVar1) {
        puVar2 = (unsigned int *)*param_2;
      }
      else {
        puVar2 = *(unsigned int **)(aiStack_34[0] + 0x18);
      }
      iStack_3c = aiStack_34[0];
      fn_828E5F60(&iStack_3c);
      if (iStack_3c == iVar1) {
        puVar3 = (unsigned int *)*param_2;
      }
      else {
        puVar3 = *(unsigned int **)(iStack_3c + 0x18);
      }
      for (; puVar2 != puVar3; puVar2 = (unsigned int *)*puVar2) {
        puVar4 = (unsigned int *)*puVar4;
      }
      fn_828E5F60(aiStack_34);
      fn_828E5F60(&iStack_38);
    } while (aiStack_34[0] != iVar1);
  }
  return param_1;
}

