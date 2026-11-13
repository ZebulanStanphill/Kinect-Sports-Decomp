void fn_82858550(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)((unsigned int)*(unsigned short *)(param_2 + 4) * 4 + param_3);
  if (*(unsigned int *)((*(unsigned short *)(param_2 + 6) + 3) * 4 + param_1) != (unsigned int)*(unsigned short *)(param_2 + 4)) {
    iVar2 = 0;
    if (0 < piVar1[1]) {
      iVar3 = 0;
      do {
        (**(int (***)())(*(int *)(param_1 + 4) + *(int *)(*piVar1 + iVar3) + 0x1d4))
                  (*(int *)(param_1 + 4),*(unsigned short *)(param_2 + 6),((int *)(*piVar1 + iVar3))[1])
        ;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < piVar1[1]);
    }
    *(unsigned int *)((*(unsigned short *)(param_2 + 6) + 3) * 4 + param_1) = (unsigned int)*(unsigned short *)(param_2 + 4);
  }
  return;
}

