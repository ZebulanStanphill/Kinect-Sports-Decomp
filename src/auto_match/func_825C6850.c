extern int fn_8261A250();


void fn_825C6850(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  
  for (puVar1 = *(unsigned int **)(param_1 + 8); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)puVar1[1]) {
    fn_8261A250(*puVar1,param_2);
  }
  return;
}

