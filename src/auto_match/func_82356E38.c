extern int fn_8225F160();
extern unsigned int lbl_832765BC;


void fn_82356E38(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (lbl_832765BC == 0) {
    return;
  }
  iVar1 = fn_8225F160();
  if (*(int *)(iVar1 + 8) == 2) {
    if (lbl_832765BC == 0) goto LAB_82356f74;
    iVar2 = *(int *)(lbl_832765BC + 0x28);
    iVar3 = 0;
    iVar1 = 0x10;
    do {
      if (*(int *)(iVar1 + iVar2) == *(int *)(param_1 + 0x34c)) goto LAB_82356eac;
      iVar1 = iVar1 + 4;
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x18);
LAB_82356ea8:
    iVar3 = -1;
LAB_82356eac:
    iVar1 = lbl_832765BC;
    *(int *)(lbl_832765BC + 0x68) = iVar3;
    if (*(int *)(iVar2 + 4) == 0) {
      *(int *)(*(int *)(iVar1 + 200) + 0x50c) = iVar3;
    }
    else {
      *(unsigned int *)(*(int *)(iVar1 + 200) + 0x50c) = 2;
    }
    if (iVar1 == 0) goto LAB_82356f74;
    if (*(int *)(*(int *)(iVar1 + 0x28) + 4) == 0) {
      if (*(int *)(iVar1 + 0x68) == 0) {
        uVar6 = 1;
        uVar5 = 2;
      }
      else {
        uVar6 = 2;
        uVar5 = 3;
      }
      *(unsigned int *)(param_1 + 0x2a8) = 0;
      goto LAB_82356f80;
    }
    uVar6 = 3;
    *(unsigned int *)(param_1 + 0x2a8) = 1;
  }
  else {
    iVar1 = (**(int (***)())(**(int **)(param_1 + 0x18) + 100))();
    if (lbl_832765BC != 0) {
      iVar2 = *(int *)(lbl_832765BC + 0x28);
      iVar3 = 0;
      iVar4 = 0x10;
      do {
        if (*(int *)(iVar4 + iVar2) == iVar1) goto LAB_82356eac;
        iVar4 = iVar4 + 4;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 0x18);
      goto LAB_82356ea8;
    }
LAB_82356f74:
    uVar6 = 0;
    *(unsigned int *)(param_1 + 0x2a8) = 0;
  }
  uVar5 = 0;
LAB_82356f80:
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xd0) = uVar6;
  *(unsigned int *)(*(int *)(param_1 + 0x18) + 0xd8) = uVar5;
  return;
}

