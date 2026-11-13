extern int fn_82F63BD8();
extern int fn_82F68CC0();


void fn_82F63C78(void)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar7 = 1;
  lVar5 = -0x3ffffbe9;
  fn_82F63BD8(2);
  lVar3 = KeBugCheck(0x1e);
  if ((int)lVar3 == (int)lVar5) {
    return;
  }
  if ((int)lVar5 <= (int)lVar3) {
    lVar2 = uVar7 + 1;
    uVar6 = lVar5 + uVar7;
    for (uVar4 = lVar3 + uVar7; lVar2 = lVar2 + -1, lVar2 != 0 && (uVar4 & 3) != 0;
        uVar4 = uVar4 - 1) {
      uVar7 = uVar7 - 1;
      iVar1 = (int)uVar6;
      uVar6 = uVar6 - 1;
      *(unsigned char *)((int)uVar4 + -1) = *(unsigned char *)(iVar1 + -1);
    }
    uVar8 = (uVar7 & 0xffffffff) >> 2;
    if (uVar8 != 0) {
      if ((uVar6 & 3) == 0) {
        do {
          iVar1 = (int)uVar6;
          uVar6 = uVar6 - 4;
          *(unsigned int *)((int)uVar4 + -4) = *(unsigned int *)(iVar1 + -4);
          uVar4 = uVar4 - 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      else {
        do {
          iVar1 = (int)uVar6;
          uVar4 = uVar4 - 4;
          uVar6 = uVar6 - 4;
          *(unsigned int *)uVar4 = *(unsigned int *)(iVar1 + -4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
    uVar7 = uVar7 & 3;
    if (uVar7 != 0) {
      do {
        iVar1 = (int)uVar6;
        uVar6 = uVar6 - 1;
        *(unsigned char *)((int)uVar4 + -1) = *(unsigned char *)(iVar1 + -1);
        uVar4 = uVar4 - 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      return;
    }
    return;
  }
  fn_82F68CC0();
  return;
}

