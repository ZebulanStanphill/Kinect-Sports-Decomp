void fn_82CF6988(int param_1,int param_2,int param_3)

{
  unsigned char *puVar1;
  
  if (param_3 == 0) {
    return;
  }
  puVar1 = (unsigned char *)(param_3 + -1 + param_1);
  do {
    *puVar1 = puVar1[param_2 - param_1];
    puVar1 = puVar1 + -1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

