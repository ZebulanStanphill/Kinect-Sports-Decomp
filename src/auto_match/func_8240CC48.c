typedef unsigned char bool;
extern int fn_82250A18();
extern int fn_82327B80();
extern int fn_8240BCE8();
extern int fn_8240C498();
extern int fn_8288B760();
extern int fn_828AB870();
extern unsigned int lbl_832975B0;


void fn_8240CC48(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  char cVar10;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int *piVar11;
  int (**pcVar12)();
  
  iVar7 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar7 = fn_82250A18();
  }
  if (*(char *)(iVar7 + 4) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    return;
  }
  piVar11 = (int *)(param_1 + 0x44);
  iVar7 = (**(int (***)())(*(int *)(param_1 + 0x44) + 4))(piVar11);
  piVar1 = *(int **)(iVar7 + 0x168);
  iVar7 = (**(int (***)())(*(int *)(param_1 + 0x44) + 8))(piVar11);
  piVar2 = *(int **)(iVar7 + 0x168);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  iVar7 = (**(int (***)())(*piVar1 + 4))(piVar1);
  uVar8 = (**(int (***)())(*(int *)(iVar7 + 0x49c) + 0x3c))();
  iVar7 = (**(int (***)())(*piVar2 + 4))(piVar2);
  uVar9 = (**(int (***)())(*(int *)(iVar7 + 0x49c) + 0x3c))();
  cVar10 = fn_8288B760(piVar1);
  if ((((cVar10 == '\0') && (uVar8 != 0)) && (cVar10 = fn_82327B80(piVar1), cVar10 == '\0'))
     && (uVar9 == 0)) {
    lVar5 = (**(int (***)())(*piVar1 + 8))(piVar1);
    fn_828AB870(lVar5 + 0x4f0,1);
  }
  cVar10 = fn_8288B760(piVar2);
  if (((cVar10 == '\0') && (uVar9 != 0)) &&
     ((cVar10 = fn_82327B80(piVar2), cVar10 == '\0' && (uVar8 == 0)))) {
    lVar5 = (**(int (***)())(*piVar2 + 8))(piVar2);
    fn_828AB870(lVar5 + 0x4f0,1);
  }
  cVar10 = fn_82327B80(piVar1);
  if (cVar10 == '\0') {
    cVar10 = fn_82327B80(piVar2);
    pcVar12 = *(int (***)())(*piVar11 + 4);
    if (cVar10 != '\0') goto LAB_8240ce94;
    iVar7 = (*pcVar12)(piVar11);
    if (*(int *)(iVar7 + 0x7c4) == 0) {
      return;
    }
    iVar7 = (**(int (***)())(*piVar11 + 8))(piVar11);
    if (*(int *)(iVar7 + 0x7c4) == 0) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0xe8);
    bVar3 = iVar7 != *(int *)(param_1 + 0x50);
    bVar4 = iVar7 != *(int *)(param_1 + 0x68);
    if ((bVar3) || (bVar4)) {
      if (!bVar3) {
        return;
      }
      if (!bVar4) {
        return;
      }
      *(unsigned int *)(param_1 + 0x58) = 0;
      *(unsigned int *)(param_1 + 0x70) = 0;
      fn_8240BCE8(param_1,6,0,0);
      return;
    }
    if (uVar8 == 0) {
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    iVar7 = *piVar11;
    if (uVar9 <= uVar8) {
      pcVar12 = *(int (***)())(iVar7 + 4);
      goto LAB_8240ce94;
    }
  }
  else {
    iVar7 = *piVar11;
  }
  pcVar12 = *(int (***)())(iVar7 + 8);
LAB_8240ce94:
  uVar6 = (*pcVar12)(piVar11);
  fn_8240C498(param_1,uVar6);
  return;
}

