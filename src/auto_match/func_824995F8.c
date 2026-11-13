extern unsigned int *auStack_60;
extern int fn_822B70F0();
extern int fn_822B9440();
extern int fn_82491E88();
extern int fn_82492818();
extern int fn_82499730();
extern int fn_8252CC80();
extern unsigned int lbl_821BEBB0;
extern unsigned int lbl_821BEBB8;
extern unsigned int lbl_821CA460;


void fn_824995F8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  double dVar7;
  unsigned char **appuStack_b0 [20];
  unsigned char auStack_60 [48];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0x118);
  uVar1 = fn_82492818(appuStack_b0,iVar3 + 0x36c,0xffffffffffffffff,iVar3 + 0x160,iVar3 + 0x1e0,
                        *(unsigned int *)(iVar3 + 0xb4),*(unsigned int *)(iVar3 + 0x2ec));
  fn_82499730(param_1 + 0x10,uVar1);
  appuStack_b0[0] = &lbl_821BEBB8;
  fn_82491E88(auStack_60);
  appuStack_b0[0] = &lbl_821BEBB0;
  fn_822B9440(*(unsigned int *)(*(int *)(param_1 + 0xc0) + 0x11c));
  lVar4 = 0;
  iVar5 = 0x130;
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x14) + 0x8c0);
  uVar2 = *(unsigned int *)(iVar3 + 0x90);
  *(unsigned int *)(iVar3 + 0x90) = 0;
  *(unsigned int *)(param_1 + 0xc4) = uVar2;
  dVar7 = (double)lbl_821CA460;
  do {
    *(unsigned int *)(param_1 + -0x68 + iVar5) = *(unsigned int *)(iVar5 + *(int *)(param_1 + 0xc0));
    fn_822B70F0(dVar7,*(unsigned int *)(param_1 + 0xc0));
    lVar6 = 2;
    uVar2 = 0;
    iVar3 = 0;
    do {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xc0) + 0x14) + 0x930 + iVar3) != '\0') {
        uVar2 = 1;
      }
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(unsigned int *)(param_1 + 0xd0) = uVar2;
    fn_8252CC80(*(unsigned int *)(*(int *)(param_1 + 0xc0) + 0x14),0,lVar4);
    iVar5 = iVar5 + 4;
    lVar4 = lVar4 + 1;
  } while (iVar5 < 0x138);
  return;
}

