extern int fn_82AA6648();


void fn_82ACB1D8(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)*param_1;
  if ((~(unsigned int)puVar1 & 1) != 0) {
    fn_82AA6648(param_1,puVar1,((unsigned __int64)*puVar1 + 1 & 0x3fffffff) << 2);
    *param_1 = 1;
  }
  return;
}

