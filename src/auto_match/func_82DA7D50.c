int fn_82DA7D50(int *param_1,int *param_2)
{
  int a1, b1, a2, b2, iVar3, iVar4;
  iVar4 = (int)*(char *)(*param_1 + 5) + *param_1;
  iVar3 = (int)*(char *)(*param_2 + 5) + *param_2;
  a1 = *(int *)(*(char *)(iVar4 + 0x10) + iVar4 + 0xd4);
  b1 = *(int *)(*(char *)(iVar3 + 0x10) + iVar3 + 0xd4);
  if (a1 < b1) return 1;
  if (a1 == b1) {
    iVar3 = (int)*(char *)(param_1[1] + 5) + param_1[1];
    iVar4 = (int)*(char *)(param_2[1] + 5) + param_2[1];
    a2 = *(int *)(*(char *)(iVar3 + 0x10) + iVar3 + 0xd4);
    b2 = *(int *)(*(char *)(iVar4 + 0x10) + iVar4 + 0xd4);
    return a2 < b2;
  }
  return 0;
}
