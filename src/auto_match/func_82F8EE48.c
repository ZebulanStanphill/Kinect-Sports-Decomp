extern unsigned int uStack_10;


int fn_82F8EE48(int param_1)

{
  unsigned int uStack_10;
  
  if (*(int *)(param_1 + 4) == 0) {
    uStack_10 = 0;
  }
  else {
    uStack_10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  return uStack_10;
}

