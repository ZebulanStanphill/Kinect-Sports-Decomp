extern int fn_82F68CC0();


unsigned __int64 fn_82AA8D50(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = *(int **)(param_1 + 0xe8);
  iVar3 = piVar2[1];
  iVar5 = (*(int *)(param_1 + 0x14) + 0x1b) * 4 + *(int *)(param_1 + 0x24);
  if (iVar3 < iVar5) {
    return 0xfffffffffffffff5;
  }
  iVar4 = iVar5 + 1;
  piVar2[2] = iVar5;
  if (iVar4 <= iVar3) {
    cVar1 = *(char *)(*piVar2 + iVar5);
    piVar2[2] = iVar4;
    if (cVar1 != -1) {
      return 0xfffffffffffffff0;
    }
    if (iVar4 + *(int *)(param_1 + 0x68) + -1 <= iVar3) {
      fn_82F68CC0(param_2,iVar4 + *piVar2,*(int *)(param_1 + 0x68) + -1);
      piVar2[2] = *(int *)(param_1 + 0x68) + piVar2[2] + -1;
      return 0;
    }
  }
  return 0xfffffffffffffff4;
}

