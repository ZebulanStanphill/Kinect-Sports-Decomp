extern int fn_8265CA20();
extern int fn_8265CAA0();


void fn_825E51A8(int param_1)

{
  unsigned int iVar1;
  int lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x4a4);
  lVar2 = 3;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      fn_8265CAA0(*(unsigned int *)(iVar1 + 0x50));
      fn_8265CA20(iVar1);
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0);
  iVar1 = *(int *)(param_1 + 0x5cc8);
  if (iVar1 != 0) {
    fn_8265CAA0(*(unsigned int *)(iVar1 + 0xd0));
    *(unsigned int *)(iVar1 + 0xd0) = 0;
    fn_8265CA20(iVar1);
  }
  return;
}

