extern int fn_8233D980();
extern int fn_82344720();
extern int fn_82348D60();
extern int fn_8288B760();


void fn_82344278(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar4;
  __int64 lVar3;
  
  fn_82348D60();
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc) + 0x174);
  if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) != -1) &&
     (iVar1 = *(int *)(iVar1 + 0x5c),
     *(int *)(*(int *)(iVar1 + 0x1d4) * 4 + *(int *)(iVar1 + 0x1c4)) != 0)) {
    iVar1 = (*(int **)(param_1 + 0xc))[1];
    if (iVar1 == 2) {
      if (*(int *)(**(int **)(param_1 + 0xc) + 0x24) == 0) {
        fn_82344720(param_1);
      }
    }
    else if (iVar1 == 9) {
      iVar1 = **(int **)(param_1 + 0xc);
      if (*(int *)(iVar1 + 0x168) == 0) {
        uVar4 = *(unsigned int *)(iVar1 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if (uVar4 == 0) {
        piVar2 = *(int **)(**(int **)(param_1 + 0xc) + 0x168);
        if (piVar2 != (int *)0x0) {
          uVar4 = *(unsigned int *)(param_1 + 0x14);
          lVar3 = (**(int (***)())(*piVar2 + 8))();
          fn_8233D980(lVar3 + 0x534,(unsigned __int64)uVar4 + 0x4c);
        }
      }
    }
  }
  return;
}

