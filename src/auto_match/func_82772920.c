extern int fn_8267BE38();


void fn_82772920(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  
  if ((int)param_2 != 0) {
    puVar1 = (unsigned int *)((int)param_2 * 0x24 + param_1 + 0x14);
    do {
      puVar1 = puVar1 + -9;
      fn_8267BE38(*puVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

