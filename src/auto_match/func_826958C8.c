extern int fn_826C31F0();


void fn_826958C8(char *param_1)

{
  unsigned char cVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  cVar1 = *(unsigned char *)param_1;
  if (cVar1 == '\b') {
    fn_826C31F0(param_1 + 4);
    return;
  }
  if (cVar1 == '\x06') {
    puVar2 = *(unsigned int **)(param_1 + 4);
    if (puVar2 != (unsigned int *)0x0) {
      uVar3 = puVar2[2] - 1;
      puVar2[2] = uVar3;
      if ((uVar3 & 0x70000000) == 0x10000000) {
        return;
      }
      puVar2[2] = uVar3 & 0x8fffffff | 0x10000000;
                    /* WARNING: Could not recover jumptable at 0x8269592c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(int (**)())*puVar2)(puVar2,1);
      return;
    }
  }
  if (cVar1 != '\t') {
    return;
  }
  puVar2 = *(unsigned int **)(param_1 + 4);
  uVar3 = puVar2[2] - 1;
  puVar2[2] = uVar3;
  if ((uVar3 & 0x70000000) == 0x10000000) {
    return;
  }
  puVar2[2] = uVar3 & 0x8fffffff | 0x10000000;
                    /* WARNING: Could not recover jumptable at 0x82695974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(int (**)())*puVar2)(puVar2,1);
  return;
}

