extern int fn_82BC0088();


void fn_82BB1C88(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  if ((*(unsigned int *)(((param_2 >> 5) + 2) * 4 + *(int *)(param_1 + 0x10)) >> (param_2 & 0x1f) & 1) == 0)
  {
    puVar1 = (unsigned int *)fn_82BC0088(param_1,*(unsigned int *)(param_1 + 4));
    *puVar1 = param_2;
  }
  return;
}

