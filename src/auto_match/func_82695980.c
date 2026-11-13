extern int fn_82681F88();


void fn_82695980(char *param_1)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\b') {
    if (*(int *)(param_1 + 4) != 0) {
      fn_82681F88();
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_82681F88();
    }
    return;
  }
  if ((cVar1 != '\x06') || (puVar3 = *(unsigned int **)(param_1 + 4), puVar3 == (unsigned int *)0x0)) {
    if (cVar1 != '\t') {
      return;
    }
    puVar3 = *(unsigned int **)(param_1 + 4);
  }
  uVar2 = puVar3[2];
  if ((uVar2 & 0x70000000) == 0x10000000) {
    if ((uVar2 & 0xfffffff) == 0) {
      puVar3[2] = uVar2 & 0x8fffffff | 0x20000000;
                    /* WARNING: Could not recover jumptable at 0x82681fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())*puVar3)(puVar3,4);
      return;
    }
    puVar3[2] = uVar2 & 0x8fffffff;
                    /* WARNING: Could not recover jumptable at 0x82681fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())*puVar3)(puVar3,2);
    return;
  }
  return;
}

