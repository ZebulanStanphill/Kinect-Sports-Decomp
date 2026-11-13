extern int fn_822ABA88();


unsigned __int64 fn_8241F2A0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  
  iVar2 = *(int *)(*param_1 + 0xa0);
  if ((((iVar2 == 0) || (*(int *)(iVar2 + 0x40) != 1)) &&
      (piVar1 = *(int **)(**(int **)(*param_1 + 8) + *param_2 * 4),
      iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0), *(int *)(iVar2 + 0x24) != 0)
      ) && (iVar2 = *(int *)(iVar2 + 0x74), iVar2 != 0)) {
    iVar3 = 0x458;
    lVar4 = 0x29;
    do {
      *(unsigned int *)((int)param_2 + iVar3 + -0x360) =
           *(unsigned int *)(iVar3 + *(int *)(iVar2 + 0x100));
      iVar3 = iVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return 1;
  }
  return 0;
}

