extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();


void fn_82E02358(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  iVar2 = fn_82CE5410();
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)*(unsigned int *)(param_1 + 8)) {
    piVar4 = (int *)(*(int *)(param_1 + 4) + 4);
    do {
      if (*piVar4 != 0) {
        fn_82CE4118();
      }
      *piVar4 = 0;
      fn_82CED5B8(piVar4 + -1);
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  *(unsigned int *)(param_1 + 8) = 0;
  if ((*(unsigned int *)(param_1 + 0xc) & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))
              (piVar1,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 0xc) & 0x3fffffff,8);
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0x80000000;
  fn_82CED5B8(param_1);
  return;
}

