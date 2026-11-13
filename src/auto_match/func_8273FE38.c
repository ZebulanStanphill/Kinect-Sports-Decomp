extern int fn_826BE6C0();


void fn_8273FE38(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  fn_826BE6C0();
  puVar1 = *(unsigned int **)(param_1 + 0x38);
  if ((int)puVar1 != 0) {
    uVar2 = puVar1[2] + 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0) {
      puVar1[2] = uVar2 & 0x8fffffff;
      (*(int (**)())*puVar1)(puVar1,2);
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0x3c);
  if ((int)puVar1 != 0) {
    uVar2 = puVar1[2] + 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0) {
      puVar1[2] = uVar2 & 0x8fffffff;
      (*(int (**)())*puVar1)(puVar1,2);
    }
  }
  puVar1 = *(unsigned int **)(param_1 + 0x40);
  if ((int)puVar1 != 0) {
    uVar2 = puVar1[2] + 1;
    puVar1[2] = uVar2;
    if ((uVar2 & 0x70000000) != 0) {
      puVar1[2] = uVar2 & 0x8fffffff;
      (*(int (**)())*puVar1)(puVar1,2);
    }
  }
  return;
}

