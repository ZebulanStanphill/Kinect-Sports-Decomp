extern unsigned int lbl_83212A1C;


void fn_828869B8(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  puVar2 = *(unsigned int **)(param_2 * 4 + param_1);
  uVar1 = *puVar2;
  uVar3 = *(unsigned int *)(param_2 * 4 + lbl_83212A1C);
  *puVar2 = uVar1 + 1;
  if (uVar1 + 1 < (unsigned int)(1 << (uVar3 & 0x3f))) {
    return;
  }
  *puVar2 = 0;
  return;
}

