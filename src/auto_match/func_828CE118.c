extern int fn_828CDF30();


void fn_828CE118(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  unsigned int uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar7 = fn_828CDF30(param_1,*(unsigned int *)(*(int *)(param_2 + 4) + 4),iVar2);
  *(unsigned int *)(iVar2 + 4) = uVar7;
  piVar3 = *(int **)(param_1 + 4);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*piVar4 + 0x19);
    piVar6 = (int *)*piVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*piVar6 + 0x19);
      piVar4 = piVar6;
      piVar6 = (int *)*piVar6;
    }
    *piVar3 = (int)piVar4;
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
    iVar5 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar5 + 0x19);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0x19);
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar5 + 8);
    }
    *(int *)(*(int *)(param_1 + 4) + 8) = iVar2;
  }
  else {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  }
  return;
}

