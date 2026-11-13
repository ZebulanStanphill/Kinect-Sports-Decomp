void fn_82494410(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = *(unsigned int **)(param_4 + 8);
  for (puVar2 = *(unsigned int **)(param_4 + 4); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(int (***)())(*(int *)*puVar2 + 8))
              (param_1,param_2,param_3,(int *)*puVar2,param_5,param_6,param_7,param_8,param_9,
               param_10);
  }
  return;
}

