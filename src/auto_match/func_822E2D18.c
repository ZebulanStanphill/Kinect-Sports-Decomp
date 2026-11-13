extern int fn_8229F618();
extern int fn_822AA770();
extern int fn_82374C88();
extern unsigned int ltcg_pool_0_0f;


void fn_822E2D18(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = param_2;
  uVar4 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x38) = uVar1;
  *(unsigned int *)(param_1 + 0x3c) = uVar4;
  if (param_2 < -1) {
    return;
  }
  if (0 < param_2) {
    if (param_2 < 3) {
      iVar2 = *(int *)(param_1 + 0x14);
      iVar5 = fn_822AA770(*(unsigned int *)(iVar2 + 0x1c));
      if ((iVar5 != 0) && (*(int *)(param_1 + 0x60) == 0)) {
        piVar3 = *(int **)(param_1 + 0x10);
        iVar5 = *(int *)(iVar2 + 0x28);
        iVar2 = *(int *)(iVar2 + 0x2c);
        iVar6 = (**(int (***)())(*piVar3 + 200))(piVar3);
        if ((iVar6 == 0) && (iVar2 == piVar3[0x33])) {
          piVar3[0x197] = iVar2;
          piVar3[0x198] = iVar5;
        }
        *(unsigned int *)(param_1 + 0x60) = 1;
      }
      fn_82374C88(*(unsigned int *)(param_1 + 0x10),1);
      return;
    }
    if (5 < param_2) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    (**(int (***)())(**(int **)(param_1 + 0x10) + 200))();
    *(unsigned int *)(param_1 + 0x60) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if ((*(int *)(iVar2 + 0x204) == 0) &&
     (*(unsigned int *)(iVar2 + 0x344) = 0,
     *(int *)(*(int *)(*(int *)(iVar2 + 0xd4) + 0xc) + 0x58) != 0)) {
    fn_8229F618();
  }
  return;
}

