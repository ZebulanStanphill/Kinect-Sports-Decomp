extern int fn_82381BC0();
extern int fn_82897710();


void fn_828CF510(unsigned __int64 param_1,int param_2)

{
  int aiStack_20 [4];
  
  aiStack_20[0] = **(int **)(param_2 + 0x220);
  if ((int *)aiStack_20[0] != *(int **)(param_2 + 0x220)) {
    do {
      if (*(int *)(*(int *)(aiStack_20[0] + 0x10) + 0x4c) != 0) {
        fn_82897710();
      }
      fn_82381BC0(aiStack_20);
    } while (aiStack_20[0] != *(int *)(param_2 + 0x220));
  }
  return;
}

