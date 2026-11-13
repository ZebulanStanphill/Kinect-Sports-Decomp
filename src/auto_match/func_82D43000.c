extern int fn_82CE4118();
extern int fn_82CE5410();


void fn_82D43000(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  
  piVar3 = (int *)(param_1 + 0x14);
  iVar2 = fn_82CE5410();
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (0 < (int)*(unsigned int *)(param_1 + 0x18)) {
    puVar5 = (unsigned int *)(*piVar3 + -4);
    do {
      if (puVar5[1] != 0) {
        fn_82CE4118();
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      *puVar5 = 0;
    } while (uVar4 != 0);
  }
  *(unsigned int *)(param_1 + 0x18) = 0;
  if ((*(unsigned int *)(param_1 + 0x1c) & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))(piVar1,*piVar3,*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff,4);
  }
  *piVar3 = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0x80000000;
  return;
}

