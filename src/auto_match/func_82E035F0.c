extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern int fn_82E04A30();


void fn_82E035F0(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  
  fn_82CED5B8(param_1 + 0x20);
  iVar2 = fn_82CE5410();
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)*(unsigned int *)(param_1 + 0x18)) {
    puVar4 = (unsigned int *)(*(int *)(param_1 + 0x14) + -4);
    do {
      if (puVar4[1] != 0) {
        fn_82CE4118();
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (uVar3 != 0);
  }
  *(unsigned int *)(param_1 + 0x18) = 0;
  if ((*(unsigned int *)(param_1 + 0x1c) & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))
              (piVar1,*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff,4);
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0x80000000;
  fn_82E04A30(param_1);
  return;
}

