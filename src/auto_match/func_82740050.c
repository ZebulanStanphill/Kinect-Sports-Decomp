extern int fn_826BE530();


void fn_82740050(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  fn_826BE530(param_1);
  puVar1 = *(unsigned int **)(param_1 + 0x38);
  if ((int)puVar1 != 0) {
    uVar2 = puVar1[2] - 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0x10000000) {
      puVar1[2] = uVar2 & 0x8fffffff | 0x10000000;
      (*(int (**)())*puVar1)(puVar1,1);
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0x3c);
  if ((int)puVar1 != 0) {
    uVar2 = puVar1[2] - 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0x10000000) {
      puVar1[2] = uVar2 & 0x8fffffff | 0x10000000;
      (*(int (**)())*puVar1)(puVar1,1);
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0x40);
  if ((int)puVar1 != 0) {
    uVar2 = puVar1[2] - 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0x10000000) {
      puVar1[2] = uVar2 & 0x8fffffff | 0x10000000;
      (*(int (**)())*puVar1)(puVar1,1);
    }
  }
  return;
}

