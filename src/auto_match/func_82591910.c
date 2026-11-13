extern int fn_8288B760();


unsigned __int64 fn_82591910(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned int *puVar4;
  char cVar5;
  
  for (iVar3 = *(int *)(param_2 + 0x84) + 0x80; *(int *)(iVar3 + 4) != 0;
      iVar3 = *(int *)(iVar3 + 4)) {
  }
  *(int **)(iVar3 + 4) = (int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar3;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x58) = *(unsigned int *)(param_2 + 0x98);
  *(unsigned int *)(param_1 + 0x5c) = *(unsigned int *)(param_2 + 0x9c);
  *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_2 + 0xa0);
  if (*(int *)(param_1 + 0x20) == 0) {
    cVar5 = *(int *)(param_1 + 0x24) != 0;
  }
  else {
    cVar5 = fn_8288B760();
  }
  if (cVar5 == '\0') {
    iVar3 = *(int *)(param_2 + 0x84);
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x4c) = 0;
    puVar4 = (unsigned int *)(param_1 + 0x48);
    for (piVar2 = (int *)(iVar3 + 0x88); *piVar2 != 0; piVar2 = (int *)*piVar2) {
    }
    puVar1 = (unsigned int *)piVar2[1];
    piVar2[1] = (int)puVar4;
    *puVar4 = piVar2;
    *(unsigned int **)(param_1 + 0x4c) = puVar1;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = puVar4;
    }
  }
  return 1;
}

