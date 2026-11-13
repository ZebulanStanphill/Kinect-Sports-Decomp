extern int fn_82AFA378();


void fn_82AFA410(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  
  for (puVar1 = *(unsigned int **)(param_2 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
    if ((puVar1[4] != 0) && ((*puVar1 & 0xe000000) != 0)) {
      fn_82AFA378(param_1);
    }
  }
  return;
}

