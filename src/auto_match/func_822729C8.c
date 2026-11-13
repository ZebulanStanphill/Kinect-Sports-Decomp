extern int fn_8259BDA8();


void fn_822729C8(int param_1)

{
  unsigned int *puVar1;
  unsigned int *apuStack_20 [4];
  
  puVar1 = *(unsigned int **)(param_1 + 0xf8);
  apuStack_20[0] = (unsigned int *)*puVar1;
  while (apuStack_20[0] != puVar1) {
    (*(int (**)())apuStack_20[0][3])();
    fn_8259BDA8(apuStack_20);
    puVar1 = *(unsigned int **)(param_1 + 0xf8);
  }
  return;
}

