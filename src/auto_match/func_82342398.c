extern int fn_82F68B7C();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CA460;


void fn_82342398(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  piVar1 = *(int **)(param_2 + 0xc);
  uVar7 = 0;
  if ((double)lbl_821917D4 <= param_1) {
    if (((double)lbl_821917D4 <= param_1) && (param_1 < (double)lbl_821CA460)) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 2;
  }
  uVar8 = piVar1[0xb];
  if ((int)uVar8 <= (int)uVar7) {
    piVar1[0xb] = uVar7;
    uVar8 = uVar7;
  }
  uVar5 = 0;
  if (uVar8 == 0) {
    uVar5 = 0;
  }
  else if (uVar8 == 1) {
    uVar5 = 1;
  }
  else if (uVar8 < 3) {
    uVar5 = 2;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(*piVar1 + 0x1a0) + 0xc) + 0x174);
  if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                    *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar6 + 0x40) + 0x114) == 5) {
    uVar3 = *(unsigned int *)(iVar2 + 0xa0);
    uVar4 = 7;
  }
  else {
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar2 + 0x5c) + 0x1c4));
    }
    if (*(int *)(*(int *)(iVar6 + 0x40) + 0x114) != 3) {
      return;
    }
    uVar3 = *(unsigned int *)(iVar2 + 0xa0);
    uVar4 = 6;
  }
  fn_82F68B7C(uVar3,uVar4,uVar5);
  return;
}

