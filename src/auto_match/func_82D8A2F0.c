extern int fn_82CE5410();
extern int fn_83081A78();


void fn_82D8A2F0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    iVar2 = fn_82CE5410();
    puVar3 = (unsigned int *)(**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x10)
    ;
    if (puVar3 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x0;
    }
    else {
      *puVar3 = 0;
      *(unsigned short *)(puVar3 + 1) = 0;
      *(unsigned short *)((int)puVar3 + 6) = 0x8000;
      puVar3[2] = 0;
      *(unsigned short *)(puVar3 + 3) = 0;
      *(unsigned short *)((int)puVar3 + 0xe) = 0x8000;
    }
    *(unsigned int **)(param_1 + 0x214) = puVar3;
  }
  piVar1 = *(int **)(param_1 + 0x214);
  iVar2 = 0;
  if (*(unsigned short *)(piVar1 + 1) != 0) {
    piVar4 = (int *)*piVar1;
    do {
      if (*piVar4 == 0) {
        if (-1 < iVar2) {
          ((int *)*piVar1)[iVar2] = param_2;
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(piVar1 + 1));
  }
  if (*(unsigned short *)(piVar1 + 1) == (*(unsigned short *)((int)piVar1 + 6) & 0x3fff)) {
    fn_83081A78(piVar1,4);
  }
  *(int *)((unsigned int)*(unsigned short *)(piVar1 + 1) * 4 + *piVar1) = param_2;
  *(short *)(piVar1 + 1) = *(short *)(piVar1 + 1) + 1;
  return;
}

