void fn_83049F40(int param_1)

{
  int lVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_1 + 0x58);
  lVar1 = 2;
  do {
    if (puVar2[3] != 0) {
      ((void (*)(void *))(*(int *)(**(int **)(param_1 + 0x2c) + 0x30)))((void *)*(int *)(param_1 + 0x2c));
      puVar2[3] = 0;
    }
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 2;
    *puVar2 = 0;
  } while (lVar1 != 0);
  return;
}

