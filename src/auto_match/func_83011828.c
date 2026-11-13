extern int fn_83010770();
extern int fn_83033048();


void fn_83011828(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned char cVar4;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x50); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    iVar2 = puVar1[2];
    iVar3 = *(int *)(iVar2 + 8);
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar4 = fn_83010770(param_1,param_2,*(unsigned int *)(iVar3 + 0x10)), cVar4 != '\0'))
        && ((param_3 == 0 || (*(int *)(iVar2 + 0x34) == param_3)))) &&
       ((*(unsigned int *)(iVar3 + 0x14) & 0xffffff00) == 0x501100)) {
      fn_83033048(iVar3);
    }
  }
  return;
}

