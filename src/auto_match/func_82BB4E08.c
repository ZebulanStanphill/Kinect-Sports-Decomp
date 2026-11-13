__int64 fn_82BB4E08(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0xc) <= *(int *)(param_2 + 0xc)) {
    if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc)) {
      return -1;
    }
    cVar2 = (**(int (***)())(**(int **)(param_1 + 0x28) + 0x18))();
    cVar3 = (**(int (***)())(**(int **)(param_2 + 0x28) + 0x18))(*(int **)(param_2 + 0x28));
    if (cVar2 != cVar3) {
      return (-(unsigned __int64)(cVar2 != '\0') & 2) - 1;
    }
    iVar4 = *(int *)(param_1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
    iVar5 = iVar1;
    if (iVar1 < iVar4) {
      iVar5 = iVar4;
      iVar4 = iVar1;
    }
    iVar1 = *(int *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x18);
    iVar7 = iVar1;
    if (iVar6 < iVar1) {
      iVar7 = iVar6;
      iVar6 = iVar1;
    }
    if (iVar5 <= iVar6) {
      if (iVar5 < iVar6) {
        return -1;
      }
      if (iVar4 <= iVar7) {
        if (iVar4 < iVar7) {
          return -1;
        }
        if (*(float *)(param_1 + 0x10) <= *(float *)(param_2 + 0x10)) {
          if (*(float *)(param_2 + 0x10) <= *(float *)(param_1 + 0x10)) {
            return 0;
          }
          return -1;
        }
      }
    }
  }
  return 1;
}

