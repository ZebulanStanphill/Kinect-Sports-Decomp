extern int memmove();
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FCFC;
extern unsigned int lbl_8322FD20;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;
extern unsigned int lbl_8322FD26;
extern unsigned int lbl_8322FD2C;
extern unsigned int lbl_8322FD2F;


void fn_82BF92A8(unsigned __int64 param_1,__int64 param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  short sVar3;
  unsigned short uVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  
  uVar4 = lbl_8322FD20;
  uVar10 = (unsigned __int64)lbl_8322FD20;
  sVar3 = (-(unsigned short)(param_2 != 0) & 0xfffe) + 1;
  if (uVar10 != 0) {
    iVar11 = 0;
    uVar12 = uVar10;
    do {
      uVar1 = *(unsigned short *)((int)&lbl_8322B4F8 + iVar11);
      uVar2 = *(unsigned short *)((int)&lbl_8322F4F8 + iVar11);
      if (((param_1 & 0xffffffff) <= (unsigned __int64)uVar2) && ((unsigned __int64)uVar2 < 0xfff0)) {
        *(unsigned short *)((int)&lbl_8322F4F8 + iVar11) = uVar2 + sVar3;
      }
      if (((param_1 & 0xffffffff) <= (unsigned __int64)uVar1) && ((unsigned __int64)uVar1 < 0xfff0)) {
        *(unsigned short *)((int)&lbl_8322B4F8 + iVar11) = uVar1 + sVar3;
      }
      iVar11 = iVar11 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((unsigned __int64)lbl_8322FD24 != 0xffff) {
    if ((param_1 & 0xffffffff) <= (unsigned __int64)lbl_8322FD24) {
      lbl_8322FD24 = lbl_8322FD24 + sVar3;
    }
    if ((param_1 & 0xffffffff) <= (unsigned __int64)lbl_8322FD22) {
      lbl_8322FD22 = lbl_8322FD22 + sVar3;
    }
  }
  if (((unsigned __int64)lbl_8322FD2C != 0xffff) && ((param_1 & 0xffffffff) <= (unsigned __int64)lbl_8322FD2C)) {
    lbl_8322FD2C = lbl_8322FD2C + sVar3;
  }
  if ((param_1 & 0xffffffff) < (unsigned __int64)lbl_8322FD26) {
    lbl_8322FD26 = lbl_8322FD26 + sVar3;
  }
  if (((param_1 & 0xffffffff) <= (unsigned __int64)lbl_8322FCFC) && (lbl_8322FCFC < uVar10)) {
    lbl_8322FCFC = lbl_8322FCFC + sVar3;
  }
  lVar9 = (param_1 & 0x3fffffff) * 4;
  lVar7 = (uVar10 - param_1 & 0x3fffffff) * 4;
  lVar5 = lVar9 + -0x7cdd2308;
  iVar11 = (int)param_2;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd2304;
  }
  else {
    lVar7 = lVar7 + -4;
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd2304;
  }
  memmove(lVar6,lVar5,lVar7);
  lVar9 = (param_1 & 0x7fffffff) * 2;
  lVar7 = (uVar10 - param_1 & 0x7fffffff) * 2;
  lVar5 = lVar9 + -0x7cdd1308;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd1306;
    lVar8 = lVar7;
  }
  else {
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd1306;
    lVar8 = lVar7 + -2;
  }
  memmove(lVar6,lVar5,lVar8);
  lVar5 = lVar9 + -0x7cdd0b08;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd0b06;
    lVar8 = lVar7;
  }
  else {
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd0b06;
    lVar8 = lVar7 + -2;
  }
  memmove(lVar6,lVar5,lVar8);
  lVar5 = lVar9 + -0x7cdd4b08;
  if (iVar11 == 0) {
    lVar6 = lVar9 + -0x7cdd4b06;
  }
  else {
    lVar7 = lVar7 + -2;
    lVar6 = lVar5;
    lVar5 = lVar9 + -0x7cdd4b06;
  }
  memmove(lVar6,lVar5,lVar7);
  lbl_8322FD20 = uVar4 + sVar3;
  lbl_8322FD2F = 1;
  return;
}

