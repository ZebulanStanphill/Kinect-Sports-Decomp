void fn_822B4300(int *param_1,int *param_2)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  
  iVar5 = *param_2;
  cVar1 = *(char *)(iVar5 + 0x11);
  *param_1 = iVar5;
  if (cVar1 != '\0') {
    return;
  }
  puVar2 = *(unsigned int **)(iVar5 + 8);
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    puVar4 = (unsigned int *)*puVar2;
    while (puVar3 = puVar4, *(char *)((int)puVar3 + 0x11) == '\0') {
      puVar2 = puVar3;
      puVar4 = (unsigned int *)*puVar3;
    }
    *param_2 = (int)puVar2;
    return;
  }
  while ((iVar5 = *(int *)(iVar5 + 4), *(char *)(iVar5 + 0x11) == '\0' &&
         (*param_2 == *(int *)(iVar5 + 8)))) {
    *param_2 = iVar5;
  }
  *param_2 = iVar5;
  return;
}

