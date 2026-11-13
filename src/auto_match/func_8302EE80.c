extern int fn_82FFF990();


void fn_8302EE80(unsigned __int64 param_1,int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)*param_2;
  if (puVar1 != (unsigned int *)param_2[1]) {
    do {
      fn_82FFF990(*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != (unsigned int *)param_2[1]);
  }
  return;
}

