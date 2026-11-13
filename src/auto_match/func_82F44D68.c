extern unsigned int lbl_82163138;


void fn_82F44D68(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 == 0) || (iVar2 == 1)) {
    if (param_2 < 0xd) {
      uVar4 = 0x831ba1e8;
    }
    else {
      uVar4 = 0x831ba0a8;
    }
  }
  else if ((iVar2 == 2) || (iVar2 == 3)) {
    if (param_2 < 0xd) {
      uVar4 = 0x831ba468;
    }
    else {
      uVar4 = 0x831ba328;
    }
  }
  else if (iVar2 == 4) {
    if (param_2 < 0xd) {
      uVar4 = 0x831ba088;
    }
    else {
      uVar4 = 0x831ba078;
    }
  }
  else {
    if (iVar2 == 8) {
      *(unsigned char **)(param_1 + 4) = &lbl_82163138;
      return;
    }
    if (iVar2 == 10) {
      return;
    }
    if (iVar2 < 5) goto code_r0x82f44e3c;
    uVar4 = 0x831ba638;
    if (param_2 < 0xd) {
      uVar4 = 0x831ba5a8;
    }
  }
  *(unsigned int *)(param_1 + 0x18) = uVar4;
code_r0x82f44e3c:
  bVar1 = **(unsigned char **)(param_1 + 0x18);
  *(unsigned char **)(param_1 + 0x18) = *(unsigned char **)(param_1 + 0x18) + 1;
  uVar3 = (unsigned int)bVar1;
  *(unsigned int *)(param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 0x10) = 1 << (uVar3 & 0x3f);
  return;
}

