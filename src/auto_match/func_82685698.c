void fn_82685698(int param_1,int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  
  piVar1 = (int *)param_2[5];
  *(int *)(param_2[2] + 0xc) = param_2[3];
  *(int *)(param_2[3] + 8) = param_2[2];
  uVar2 = piVar1[3];
  piVar1[3] = (int)((unsigned __int64)uVar2 - 1);
  if (((unsigned __int64)uVar2 - 1 == 0) && (piVar1 != *(int **)(param_1 + 0x88))) {
    RtlEnterCriticalSection(param_1 + 0x5c);
    iVar3 = piVar1[2];
    if (iVar3 == 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
    }
    else {
      *(unsigned int *)(iVar3 + 0x1c) = 0;
      *(unsigned int *)(iVar3 + 0x18) = 0;
    }
    *piVar1 = *(int *)(param_1 + 0x4c);
    *(int **)(param_1 + 0x4c) = piVar1;
    RtlLeaveCriticalSection(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  puVar4 = (unsigned int *)param_2[4];
  if (puVar4 != (unsigned int *)0x0) {
    (**(int (***)())*puVar4)(puVar4,1);
  }
  *param_2 = *(int *)(param_1 + 0x28);
  *(int **)(param_1 + 0x28) = param_2;
  return;
}

