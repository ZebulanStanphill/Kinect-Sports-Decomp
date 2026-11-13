extern int fn_82CE5410();
extern int fn_83081A78();


void fn_82D8A110(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    iVar1 = fn_82CE5410();
    puVar2 = (unsigned int *)(**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),0x10)
    ;
    if (puVar2 == (unsigned int *)0x0) {
      puVar2 = (unsigned int *)0x0;
    }
    else {
      *puVar2 = 0;
      *(unsigned short *)(puVar2 + 1) = 0;
      *(unsigned short *)((int)puVar2 + 6) = 0x8000;
      puVar2[2] = 0;
      *(unsigned short *)(puVar2 + 3) = 0;
      *(unsigned short *)((int)puVar2 + 0xe) = 0x8000;
    }
    *(unsigned int **)(param_1 + 0x214) = puVar2;
  }
  iVar1 = *(int *)(param_1 + 0x214);
  iVar4 = 0;
  piVar5 = (int *)(iVar1 + 8);
  if (*(unsigned short *)(iVar1 + 0xc) != 0) {
    piVar3 = (int *)*piVar5;
    do {
      if (*piVar3 == 0) {
        if (-1 < iVar4) {
          ((int *)*piVar5)[iVar4] = param_2;
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < (int)(unsigned int)*(unsigned short *)(iVar1 + 0xc));
  }
  if (*(unsigned short *)(iVar1 + 0xc) == (*(unsigned short *)(iVar1 + 0xe) & 0x3fff)) {
    fn_83081A78(piVar5,4);
  }
  *(int *)((unsigned int)*(unsigned short *)(iVar1 + 0xc) * 4 + *piVar5) = param_2;
  *(short *)(iVar1 + 0xc) = *(short *)(iVar1 + 0xc) + 1;
  return;
}

