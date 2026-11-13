extern int fn_82381BC0();
extern int fn_82899F38();


unsigned __int64 fn_8289AB78(int param_1)

{
  int *piVar1;
  unsigned char cVar2;
  int aiStack_20 [4];
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x28) + 0x220);
  aiStack_20[0] = *piVar1;
  if ((int *)aiStack_20[0] != piVar1) {
    do {
      cVar2 = fn_82899F38(param_1,*(unsigned int *)(aiStack_20[0] + 0x10));
      if (cVar2 == '\0') {
        return 0;
      }
      fn_82381BC0(aiStack_20);
    } while (aiStack_20[0] != *(unsigned int *)(*(int *)(param_1 + 0x28) + 0x220));
  }
  return 1;
}

