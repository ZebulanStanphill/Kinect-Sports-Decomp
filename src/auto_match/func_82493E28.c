void fn_82493E28(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  
  for (puVar1 = *(unsigned int **)(param_1 + 4); puVar1 != *(unsigned int **)(param_1 + 8);
      puVar1 = puVar1 + 1) {
    (*(int (**)())(*(int *)*puVar1 + 0x18))((int *)*puVar1,param_2,param_3);
  }
  return;
}

