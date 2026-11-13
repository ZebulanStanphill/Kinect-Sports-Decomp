extern int fn_8262F658();


void fn_82AC6808(int param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int (**pcVar3)();
  
  if (0x84 < param_3) {
    puVar2 = (unsigned int *)((unsigned int)(param_2 + -3) & 0xfffffffe);
    *(unsigned int *)(puVar2[1] & 0xfffffffe) = *puVar2;
    *(unsigned int *)(*puVar2 & 0xfffffffe) = puVar2[1];
    pcVar3 = (int (**)())fn_8262F658();
    (*pcVar3)(param_2 + -3,0x618d0000);
    return;
  }
  iVar1 = ((param_3 >> 2) - 1) * 4;
  *param_2 = *(unsigned int *)(iVar1 + param_1 + 0x3cc);
  *(unsigned int **)(iVar1 + param_1 + 0x3cc) = param_2;
  return;
}

