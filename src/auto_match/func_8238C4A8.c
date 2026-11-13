extern int fn_8229F618();
extern int fn_822ABA88();
extern int fn_822CFF20();
extern int fn_82359BB0();
extern int fn_82536590();
extern unsigned int ltcg_pool_0_0f;


void fn_8238C4A8(int *param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piStack_30;
  int *piStack_2c;
  
  iVar1 = param_1[2];
  iVar4 = fn_822ABA88(*(unsigned int *)
                        ((*(int **)**(unsigned int **)(iVar1 + 8))[4] * 4 +
                        **(int **)**(unsigned int **)(iVar1 + 8)),0);
  *(unsigned int *)(iVar4 + 0x310) = 0;
  uVar5 = 0;
  piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8);
  if (uVar6 != 0) {
    do {
      piVar2 = *(int **)(**(int **)(iVar1 + 8) + 4);
      iVar4 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2));
      *(unsigned int *)(iVar4 + 0x2e4) = 0;
      uVar5 = uVar5 + 1;
      *(unsigned int *)(iVar4 + 0x2e8) = 0;
      *(unsigned int *)(iVar4 + 0x2e0) = 0x18;
    } while ((uVar5 & 0xffffffff) < (uVar6 & 0xffffffff));
  }
  fn_822CFF20(&piStack_30,iVar1 + 0x184);
  uVar3 = ltcg_pool_0_0f;
  for (; piStack_30 != piStack_2c; piStack_30 = piStack_30 + 2) {
    *(unsigned int *)(*piStack_30 + 0x174) = 0;
    iVar4 = *piStack_30;
    *(unsigned int *)(iVar4 + 0xe0) = uVar3;
    *(unsigned int *)(iVar4 + 0xe4) = uVar3;
    *(unsigned int *)(iVar4 + 0xd4) = 1;
  }
  *(unsigned int *)(iVar1 + 0x344) = 0;
  if (*(int *)(*(int *)(*(int *)(iVar1 + 0xd4) + 0xc) + 0x58) != 0) {
    fn_8229F618();
  }
  if (param_1[0x12] != 0) {
    if (((*(int *)(iVar1 + 0xa0) == 0) || (*(int *)(*(int *)(iVar1 + 0xa0) + 0x40) != 1)) &&
       (*(int *)(iVar1 + 0xc48) != 0)) {
      fn_82536590(iVar1 + 0xc44,0);
      *(unsigned int *)(iVar1 + 0xc48) = 0;
    }
    param_1[0x12] = 0;
  }
  (**(int (***)())(*param_1 + 0x30))(param_1);
  fn_82359BB0(&piStack_30);
  return;
}

