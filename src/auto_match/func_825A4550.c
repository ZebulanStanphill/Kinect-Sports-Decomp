extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA4B8();


void fn_825A4550(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  
  iVar3 = fn_82CE5410();
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  piVar1 = *(int **)(iVar3 + 0x10);
  if (0 < (int)*(unsigned int *)(param_1 + 0x20)) {
    puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1c) + -0x18);
    do {
      iVar3 = fn_82CE5410();
      piVar2 = *(int **)(iVar3 + 0x10);
      puVar5[0x17] = 0;
      if ((puVar5[0x18] & 0x80000000) == 0) {
        (**(int (***)())(*piVar2 + 0x10))(piVar2,puVar5[0x16],puVar5[0x18] & 0x3fffffff,4);
      }
      puVar5[0x16] = 0;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 0x18;
      *puVar5 = 0x80000000;
    } while (uVar4 != 0);
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  if ((*(unsigned int *)(param_1 + 0x24) & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))
              (piVar1,*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x24) & 0x3fffffff,0x60);
  }
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0x80000000;
  iVar3 = fn_82CE5410();
  piVar1 = *(int **)(iVar3 + 0x10);
  *(unsigned int *)(param_1 + 0x14) = 0;
  if ((*(unsigned int *)(param_1 + 0x18) & 0x80000000) == 0) {
    (**(int (***)())(*piVar1 + 0x10))
              (piVar1,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x18) & 0x3fffffff,4);
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0x80000000;
  iVar3 = fn_82CE5410();
  fn_82CEA4B8(param_1,*(unsigned int *)(iVar3 + 0x10));
  fn_82BA02A8(param_1);
  return;
}

