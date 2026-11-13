extern int fn_8265C9E0();
extern unsigned int lbl_821B9BC8;


void fn_824543B0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_821B9BC8;
    puVar3[1] = *(unsigned int *)(param_2 + 4);
    *puVar3 = &lbl_821B9BC8;
    puVar3[2] = *(unsigned int *)(param_2 + 8);
    puVar3[3] = *(unsigned int *)(param_2 + 0xc);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  puVar2 = *(unsigned int **)(iVar1 + 0x7c);
  if (puVar3 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    *(unsigned int **)(iVar1 + 0x7c) = puVar3;
  }
  return;
}

