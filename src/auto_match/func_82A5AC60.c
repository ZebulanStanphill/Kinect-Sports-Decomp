extern int fn_82A40B38();
extern int fn_82A5A960();


unsigned __int64 fn_82A5AC60(int param_1)

{
  int iVar1;
  int iVar3;
  __int64 lVar2;
  unsigned __int64 uVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x23c) == 2) {
    iVar3 = *(int *)(param_1 + 0x22c);
    piVar5 = (int *)(param_1 + 0x160);
    while (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0x22c);
      iVar3 = *(int *)(iVar1 + 4);
      *(int *)(iVar1 + 4) = *piVar5;
      *piVar5 = iVar1;
      *(int *)(param_1 + 0x22c) = iVar3;
    }
    *(unsigned int *)(param_1 + 0x234) = 0;
    *(unsigned int *)(param_1 + 0x230) = 0;
    puVar7 = *(unsigned int **)(param_1 + 0x150);
    if (puVar7 == (unsigned int *)0x0) goto LAB_82a5ad9c;
    do {
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      if (puVar7 == (unsigned int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)*puVar7;
        puVar7 = (unsigned int *)puVar7[1];
      }
      iVar3 = (**(int (***)())(*piVar6 + 8))(piVar6);
      if (iVar3 != 0) {
        lVar2 = fn_82A5A960(piVar5,piVar6);
        uVar4 = -(unsigned __int64)(lVar2 == 0) & 0xffffffff8007000e;
      }
    } while (puVar7 != (unsigned int *)0x0);
  }
  else {
    if ((*(int *)(param_1 + 0x23c) != 1) ||
       (puVar7 = *(unsigned int **)(param_1 + 0x22c),
       *(unsigned int **)(param_1 + 0x22c) == (unsigned int *)0x0)) goto LAB_82a5ad9c;
    do {
      if (puVar7 == (unsigned int *)0x0) {
        piVar5 = (int *)0x0;
        puVar8 = puVar7;
      }
      else {
        piVar5 = (int *)*puVar7;
        puVar8 = (unsigned int *)puVar7[1];
      }
      iVar3 = (**(int (***)())(*piVar5 + 8))();
      if (iVar3 == 0) {
        fn_82A40B38(param_1 + 0x160,puVar7);
      }
      puVar7 = puVar8;
    } while (puVar8 != (unsigned int *)0x0);
  }
  if ((int)uVar4 < 0) {
    return uVar4;
  }
LAB_82a5ad9c:
  *(unsigned int *)(param_1 + 0x23c) = 0;
  return uVar4;
}

