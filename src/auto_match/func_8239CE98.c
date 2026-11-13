extern int fn_822AA770();
extern int fn_82399BA0();


unsigned __int64 fn_8239CE98(int param_1)

{
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar1;
  
  iVar2 = *(int *)(param_1 + 0x94);
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar2 + 0x50);
  }
  if (((iVar3 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) && (*(int *)(param_1 + 0x178) == 0)) {
    iVar2 = fn_82399BA0(param_1);
    if ((iVar2 != 0) ||
       ((iVar2 = *(int *)(param_1 + 0x1e4), iVar2 != 0 && (*(int *)(iVar2 + 0x188) != 0)))) {
      return 1;
    }
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
    if (iVar3 != 0) {
      if (((iVar2 != 0) && (*(int *)(iVar2 + 0x1a4) != 0)) &&
         ((iVar2 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x90))(), iVar2 != 5 &&
          (iVar2 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x90))(), iVar2 != 2)))) {
        uVar4 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x34))();
        iVar2 = fn_822AA770(*(unsigned int *)
                                   (**(int **)(param_1 + 8) +
                                   ((unsigned int)((unsigned __int64)LZCOUNT(uVar4) >> 3) & 4)));
        return (unsigned __int64)(iVar2 == 0);
      }
      uVar1 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
      return -((unsigned __int64)(uVar1 < *(unsigned int *)(param_1 + 0x2d4)) - 1);
    }
  }
  return 0;
}

