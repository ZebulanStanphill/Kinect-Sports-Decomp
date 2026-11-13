extern int fn_82A5A1A8();


unsigned int * fn_82A41B80(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  *param_1 = 0;
  lVar2 = 2;
  puVar1 = param_1;
  do {
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    *puVar1 = 0x7fffffff;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  fn_82A5A1A8(param_1 + 5);
  return param_1;
}

