void fn_827AF478(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  
  if ((int)param_2 == 0) {
    return;
  }
  puVar1 = (unsigned int *)(param_1 + 0x1c);
  do {
    if (puVar1 != (unsigned int *)0x1c) {
      puVar1[-6] = 0;
      puVar1[-4] = 0;
      puVar1[-7] = 0xffffffff;
      puVar1[-5] = 0xffffffff;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[-1] = 0;
      *(unsigned char *)(puVar1 + 2) = 0;
    }
    puVar1 = puVar1 + 10;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

