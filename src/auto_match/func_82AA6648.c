extern int fn_8262F658();


void fn_82AA6648(unsigned int param_1,unsigned int *param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int (**pcVar4)();
  
  iVar1 = *(int *)(param_1 & 0xfffff000);
  if (0x84 < param_3) {
    puVar3 = (unsigned int *)((unsigned int)(param_2 + -3) & 0xfffffffe);
    *(unsigned int *)(puVar3[1] & 0xfffffffe) = *puVar3;
    *(unsigned int *)(*puVar3 & 0xfffffffe) = puVar3[1];
    pcVar4 = (int (**)())fn_8262F658();
    (*pcVar4)(param_2 + -3,0x618d0000);
    return;
  }
  iVar2 = ((param_3 >> 2) - 1) * 4;
  *param_2 = *(unsigned int *)(iVar2 + iVar1);
  *(unsigned int **)(iVar2 + iVar1) = param_2;
  return;
}

