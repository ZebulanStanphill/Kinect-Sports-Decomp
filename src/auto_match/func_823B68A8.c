extern int fn_823B6790();
extern int fn_828AAF70();


void fn_823B68A8(int param_1)

{
  int iVar2;
  int *piVar3;
  char cVar6;
  int iVar4;
  __int64 lVar1;
  unsigned int uVar5;
  
  iVar2 = fn_823B6790();
  if (iVar2 != 0) {
    piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar3 = (int *)0x0;
    }
    iVar2 = (**(int (***)())(*piVar3 + 8))();
    cVar6 = (**(int (***)())(*(int *)(iVar2 + 0x144) + 0x3c))();
    if ((cVar6 == '\0') && (*(int *)(param_1 + 0x50) == 0)) {
      piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
      if (*(int *)(param_1 + 0xc) == 0) {
        piVar3 = (int *)0x0;
      }
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = (**(int (***)())(*piVar3 + 8))();
      iVar4 = (**(int (***)())(*(int *)(iVar4 + 0x1ec) + 0x3c))();
      if (iVar4 == iVar2 + 1) {
        piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar3 = (int *)0x0;
        }
        iVar2 = (**(int (***)())(*piVar3 + 8))();
        (**(int (***)())(*(int *)(iVar2 + 0x198) + 0x3c))();
        piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar3 = (int *)0x0;
        }
        lVar1 = (**(int (***)())(*piVar3 + 8))();
        fn_828AAF70(lVar1 + 0x198,1);
        piVar3 = (int *)(*(int *)(param_1 + 0xc) + -0x68);
        if (*(int *)(param_1 + 0xc) == 0) {
          piVar3 = (int *)0x0;
        }
        iVar2 = (**(int (***)())(*piVar3 + 8))();
        uVar5 = (**(int (***)())(*(int *)(iVar2 + 0x1ec) + 0x3c))();
        *(unsigned int *)(param_1 + 0x54) = uVar5;
      }
    }
  }
  return;
}

