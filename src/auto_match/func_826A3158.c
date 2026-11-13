extern int fn_8267BE38();
extern int fn_82696330();
extern int fn_827A9810();


void fn_826A3158(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    piVar4 = (int *)(param_1 + 0x34);
    iVar2 = **(int **)(param_1 + 0x34);
    if (iVar2 != 0) {
      fn_82696330(iVar2);
      fn_8267BE38(iVar2);
    }
    uVar3 = 1;
    if (1 < *(unsigned int *)(param_1 + 0x38)) {
      iVar2 = 4;
      do {
        uVar3 = uVar3 + 1;
        puVar1 = (unsigned int *)(iVar2 + *piVar4);
        iVar2 = iVar2 + 4;
        puVar1[-1] = *puVar1;
      } while (uVar3 < *(unsigned int *)(param_1 + 0x38));
    }
    *(unsigned int *)(*(int *)(param_1 + 0x38) * 4 + *piVar4 + -4) = 0;
    fn_827A9810(piVar4,(unsigned __int64)*(unsigned int *)(param_1 + 0x38) - 1);
  }
  return;
}

