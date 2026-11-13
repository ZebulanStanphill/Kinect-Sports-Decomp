extern unsigned int *auStack_50;
extern int fn_82814D28();
extern int fn_82820228();
extern int (*lbl_8320A4F4)();


unsigned __int64 fn_82814E30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int auStack_50 [20];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x20);
  *(unsigned char *)(param_1 + 0x79) = 0;
  if ((*(unsigned char *)(iVar1 + 0x50) & 1) != 1) {
    fn_82814D28();
  }
  uVar5 = 0;
  lVar6 = (((unsigned __int64)*(unsigned int *)(param_1 + 4) + (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c)) - 1 &
          ~((unsigned __int64)*(unsigned int *)(param_1 + 4) - 1)) - (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c);
  do {
    iVar7 = uVar5 * 0x14 + iVar1;
    if (*(int *)(iVar7 + 0x58) == 0) {
      return 0;
    }
    *(char *)(param_1 + 0x79) = (char)uVar5;
    *(int *)(iVar7 + 0x60) = (int)lVar6;
    uVar4 = (((unsigned __int64)*(unsigned int *)(iVar7 + 0x68) - lVar6) + (unsigned __int64)*(unsigned int *)(param_1 + 4)) - 1 &
            ~((unsigned __int64)*(unsigned int *)(param_1 + 4) - 1);
    *(int *)(iVar7 + 100) = (int)uVar4;
    lVar6 = (uVar4 - *(unsigned int *)(iVar7 + 0x68)) + lVar6;
    if (iVar2 == 0) {
      auStack_50[0] = *(unsigned int *)(iVar7 + 0x58);
    }
    else {
      fn_82820228(iVar2,uVar5 + 1,auStack_50);
    }
    if (lbl_8320A4F4 == (int (**)())0x0) {
      *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) | 0x1000;
      return 1;
    }
    iVar3 = (*lbl_8320A4F4)(*(unsigned int *)(param_1 + 0x18),lVar6 + 0x44 + (unsigned __int64)auStack_50[0],
                            4);
    *(int *)(iVar7 + 0x5c) = iVar3;
    if (iVar3 == 0) {
      return 1;
    }
    uVar5 = uVar5 + 1 & 0xff;
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x20;
  } while (uVar5 < 2);
  return 0;
}

