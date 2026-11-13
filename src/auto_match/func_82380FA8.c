extern int fn_822ABA88();
extern int fn_822CEFA0();
extern int fn_822CFA38();
extern int fn_82373530();
extern int fn_823815D0();


void fn_82380FA8(int param_1)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x1e4);
  lVar3 = fn_82373530();
  piVar2 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + iVar1 * 4);
  uVar4 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),1 - lVar3);
  iVar5 = fn_822CEFA0();
  if ((iVar5 == 0) && (iVar5 = fn_822CFA38(uVar4,0xc), iVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    lVar3 = 1 - lVar3;
  }
  fn_823815D0(param_1,iVar1,lVar3,uVar4);
  fn_823815D0(param_1,iVar1 == 0,0xffffffffffffffff,2);
  return;
}

