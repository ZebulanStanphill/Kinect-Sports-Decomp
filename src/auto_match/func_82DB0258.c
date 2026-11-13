int fn_82DB0258(unsigned int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char cVar5;
  int iVar3;
  unsigned int *puVar4;
  
  cVar5 = ((char)((int)*(unsigned int *)(param_3 + 0x60) >> 0x1f) -
          (char)((int)*(unsigned int *)(param_2 + 0x60) >> 0x1f)) +
          (*(unsigned int *)(param_2 + 0x60) <= *(unsigned int *)(param_3 + 0x60));
  iVar3 = param_2;
  if (cVar5 == '\0') {
    iVar3 = param_3;
  }
  cVar1 = '\0';
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0x60)) {
    puVar4 = *(unsigned int **)(iVar3 + 0x5c);
    do {
      if ((*puVar4 <= param_1) && (param_1 < *puVar4 + 0x200)) {
        cVar1 = '\x01';
        break;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < *(int *)(iVar3 + 0x60));
  }
  if ((int)cVar1 + (-(unsigned int)(cVar1 == '\0') - (cVar1 + -1)) ==
      (int)cVar5 + (-(unsigned int)(cVar5 == '\0') - (cVar5 + -1))) {
    param_3 = param_2;
  }
  return param_3;
}

