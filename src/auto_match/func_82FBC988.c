extern int fn_82F691F0();
extern int fn_82FC9CF8();
extern int fn_82FCA280();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82FBC988(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      fn_82FCA280();
    }
  }
  else {
    fn_82FC9CF8();
  }
  uVar2 = lbl_821AAD20;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      if (*(int *)(param_1 + 0x2c) != 0) {
        iVar3 = iVar6 + *(int *)(param_1 + 0x2c);
        iVar1 = *(int *)(iVar3 + 0x18);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar1,0,*(int *)(iVar3 + 0x14) << 2);
        }
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        piVar4 = (int *)(iVar7 + *(int *)(param_1 + 0x28));
        iVar1 = piVar4[1];
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar1,0,*piVar4 << 2);
        }
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        piVar4 = (int *)(iVar7 + *(int *)(param_1 + 0x24));
        iVar1 = piVar4[1];
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(iVar1,0,*piVar4 << 2);
        }
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x3c;
      iVar7 = iVar7 + 0x10;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x100));
  }
  uVar5 = 0;
  *(unsigned int *)(param_1 + 0x18) = lbl_821AAD20;
  *(unsigned int *)(param_1 + 0x1c) = uVar2;
  if (*(int *)(param_1 + 0x104) != 0) {
    iVar6 = 0;
    do {
      uVar5 = uVar5 + 1;
      iVar7 = *(int *)(param_1 + 0x10) + iVar6;
      iVar6 = iVar6 + 0x10;
      *(unsigned int *)(iVar7 + 4) = uVar2;
    } while (uVar5 < *(unsigned int *)(param_1 + 0x104));
  }
  return 1;
}

