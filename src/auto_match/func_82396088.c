extern int fn_8229ACA0();
extern int fn_8229AD30();
extern int fn_8229AD90();
extern int fn_8229F688();
extern int fn_822ABA88();
extern int fn_822B67F8();
extern int fn_822B98A8();
extern int fn_8239C4D8();
extern int fn_82F64988();


void fn_82396088(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  
  fn_8229ACA0(*(unsigned int *)(param_1 + 0xd4),*(unsigned int *)(param_1 + 0xd0));
  piVar1 = *(int **)(param_1 + 8);
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar8 = 0;
    if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
      iVar7 = 0;
      do {
        piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar7);
        uVar3 = *(unsigned int *)(piVar1[4] * 4 + *piVar1);
        uVar6 = (unsigned __int64)uVar3;
        if (*(int *)(uVar3 + 8) == 1) {
          fn_822ABA88(uVar6,0);
          uVar2 = *(unsigned int *)(param_1 + 0xd4);
          fn_822B67F8();
          uVar4 = fn_822B98A8();
          fn_8229AD30(uVar2,lVar8,uVar4);
        }
        else {
          uVar4 = fn_822ABA88(uVar6,0);
          fn_822ABA88(uVar6,1);
          uVar2 = *(unsigned int *)(param_1 + 0xd4);
          fn_822B67F8();
          uVar5 = fn_822B98A8();
          fn_822B67F8(uVar4);
          uVar4 = fn_822B98A8();
          fn_8229AD90(uVar2,lVar8,uVar4,uVar5);
        }
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 4;
      } while ((int)lVar8 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
    }
  }
  else {
    fn_822ABA88(*(unsigned int *)((*(int **)*piVar1)[4] * 4 + **(int **)*piVar1),0);
    uVar2 = *(unsigned int *)(param_1 + 0xd4);
    fn_822B67F8();
    uVar4 = fn_822B98A8();
    fn_8229AD30(uVar2,0,uVar4);
  }
  piVar1 = *(int **)(param_1 + 0x2e0);
  if (piVar1 != (int *)0x0) {
    iVar7 = *(int *)(param_1 + 0xd4);
    uVar4 = (**(int (***)())(*piVar1 + 0x88))(piVar1,param_1);
    iVar9 = iVar7 + 0x50;
    fn_82F64988(iVar9,0x40,uVar4);
    fn_8229F688(*(unsigned int *)(iVar7 + 0xc),iVar9,0);
  }
  *(unsigned int *)(param_1 + 0x240) = 1;
  fn_8239C4D8(param_1);
  return;
}

