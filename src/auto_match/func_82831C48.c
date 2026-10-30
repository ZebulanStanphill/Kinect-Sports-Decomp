extern int fn_82F67CF8();

int fn_82831C48(int param_1, int param_2)
{
  int iVar2;
  int iVar3;
  unsigned uVar4;
  int iVar5;

  iVar2 = fn_82F67CF8(*(int *)(param_1 + 0x3c4), 4, *(int *)(param_1 + 0xa4), param_2);
  if (iVar2 != *(unsigned *)(param_1 + 0xa4)) return 1;
  uVar4 = 0;
  if (*(unsigned *)(param_1 + 0xa4) != 0) {
    iVar2 = *(unsigned *)(param_1 + 0x3c4);
    iVar5 = 0;
    do {
      iVar3 = fn_82F67CF8(*(int *)(**(int **)(param_1 + 0x3bc) + iVar5), 1, *(int *)(iVar5 + iVar2), param_2);
      iVar2 = *(unsigned *)(param_1 + 0x3c4);
      if (iVar3 != *(unsigned *)(iVar5 + iVar2)) return 1;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(unsigned *)(param_1 + 0xa4));
  }
  return 0;
}
