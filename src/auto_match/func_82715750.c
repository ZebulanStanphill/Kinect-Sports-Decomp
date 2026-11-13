extern int fn_8267C498();


void fn_82715750(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  param_2 = param_2 * 4;
  piVar2 = *(int **)(param_2 + *(int *)(param_1 + 0xa4));
  if (piVar2 != (int *)0x0) {
    if (((-(unsigned int)((*(unsigned char *)((int)piVar2 + 0x66) & 0x80) != 0) & (unsigned int)piVar2) != 0) &&
       (cVar3 = (**(int (***)())(*piVar2 + 0x78))(piVar2), cVar3 != '\0')) {
      (**(int (***)())(*piVar2 + 0x74))(piVar2);
    }
    iVar1 = *(int *)(param_1 + 0xa4);
    if (*(int *)(param_2 + iVar1) != 0) {
      fn_8267C498();
    }
    *(unsigned int *)(param_2 + iVar1) = 0;
  }
  return;
}

