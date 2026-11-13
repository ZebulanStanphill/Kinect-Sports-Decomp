extern int fn_8265C990();


void fn_82935258(int param_1)

{
  unsigned int *puVar1;
  
  while (*(unsigned int *)(param_1 + 8) != 0) {
    puVar1 = *(unsigned int **)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = puVar1[4];
    if (((puVar1[2] & 8) != 0) || ((puVar1[2] & 1) == 0)) {
      fn_8265C990(*puVar1,0x24810000);
    }
    fn_8265C990(puVar1,0x24810000);
  }
  return;
}

