void fn_82493F08(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = *(unsigned int **)(param_1 + 4);
  puVar1 = *(unsigned int **)(param_1 + 8);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (*(int (**)())(*(int *)*puVar2 + 4))((int *)*puVar2,param_2);
  }
  return;
}

