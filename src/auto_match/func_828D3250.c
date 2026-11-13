extern int fn_823AA970();


void fn_828D3250(int param_1,unsigned __int64 param_2,unsigned char param_3)

{
  unsigned int iVar1;
  int *piVar2;
  
  if ((*(int *)(param_1 + 0xc) == 5) &&
     (piVar2 = *(int **)(param_1 + 0x18), piVar2 != *(int **)(param_1 + 0x1c))) {
    do {
      iVar1 = fn_823AA970(param_2);
      if (*piVar2 == iVar1) {
        *(unsigned char *)((int)piVar2 + 5) = param_3;
        *(unsigned char *)(piVar2 + 1) = 1;
        return;
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != *(int **)(param_1 + 0x1c));
  }
  return;
}

