extern int fn_8225F160();
extern int fn_82359698();
extern int fn_82406BE0();
extern int fn_824077C8();
extern int fn_82455848();
extern int fn_82508078();
extern unsigned int lbl_821BA6DC;
extern unsigned int lbl_821BA74C;


void fn_82407508(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char *puVar4;
  int iVar7;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  iVar7 = (**(int (***)())(**(int **)(param_1 + 0x14) + 4))();
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x1d0) = 1;
  *(unsigned int *)(*(int *)(*(int *)(iVar7 + 0x7dc) + 4) + 0x1d0) = 1;
  *(unsigned int *)(*(int *)(*(int *)(iVar7 + 0x7e4) + 4) + 0x1d0) = 1;
  iVar7 = (**(int (***)())(**(int **)(param_1 + 0x14) + 8))();
  *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x1d0) = 1;
  *(unsigned int *)(*(int *)(*(int *)(iVar7 + 0x7dc) + 4) + 0x1d0) = 1;
  *(unsigned int *)(*(int *)(*(int *)(iVar7 + 0x7e4) + 4) + 0x1d0) = 1;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xec) == 0) {
    piVar1 = *(int **)(param_1 + 0x14);
    iVar7 = fn_8225F160();
    uVar2 = *(unsigned int *)(param_1 + 0x10);
    uVar3 = *(unsigned int *)(iVar7 + 0x14);
    uVar5 = (**(int (***)())(*piVar1 + 8))(piVar1);
    uVar6 = (**(int (***)())(*piVar1 + 4))(piVar1);
    fn_824077C8(uVar2,*(unsigned int *)(param_1 + 100),uVar6,uVar5,uVar3);
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xec) == 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
    if (iVar7 == 1) {
      uVar5 = 3;
      goto LAB_82407678;
    }
    puVar4 = lbl_821BA74C;
    if ((iVar7 != 5) && (puVar4 = lbl_821BA6DC, iVar7 != 6)) {
      uVar5 = 4;
      goto LAB_82407678;
    }
    fn_82508078(**(unsigned int **)(param_1 + 0xc),puVar4,0);
  }
  iVar7 = *(int *)(param_1 + 8);
  *(unsigned int *)(iVar7 + 1000) = 1;
  fn_82359698(iVar7,1);
  fn_82455848((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x7f0);
  uVar5 = 0;
LAB_82407678:
  fn_82406BE0(param_1,uVar5);
  return;
}

