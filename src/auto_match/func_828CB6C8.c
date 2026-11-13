void fn_828CB6C8(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)*param_1;
  if (puVar2 != (unsigned int *)0x0) {
    do {
      puVar1 = (unsigned int *)puVar2[1];
      if (puVar1 == (unsigned int *)0x0) {
        puVar1 = (unsigned int *)puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2 = puVar1;
      }
      else {
        puVar2[1] = puVar1[2];
        puVar1[2] = puVar2;
        puVar2 = puVar1;
      }
    } while (puVar2 != (unsigned int *)0x0);
    param_1[1] = param_1;
    param_1[2] = param_1;
    *param_1 = 0;
    return;
  }
  return;
}

