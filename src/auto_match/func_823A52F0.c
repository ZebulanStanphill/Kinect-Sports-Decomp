extern int fn_822ABA88();
extern int fn_8239FF60();


void fn_823A52F0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x100) = 1;
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = 0;
    piVar4 = *(int **)**(unsigned int **)(iVar3 + 8);
    iVar1 = fn_822ABA88(*(unsigned int *)(piVar4[4] * 4 + *piVar4),0);
    if (*(int *)(iVar1 + 0x74) != 0) {
      iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x74) + 0x100) + 0x90c);
    }
    if (iVar2 < (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20)) {
      fn_8239FF60(*(unsigned int *)(iVar3 + 0x2dc),0x12);
      piVar4 = *(int **)**(unsigned int **)(*(int *)(param_1 + 8) + 8);
      *(unsigned int *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x1c) = 1;
    }
    else {
      fn_8239FF60(*(unsigned int *)(iVar3 + 0x2dc),0x11);
    }
  }
  return;
}

