typedef unsigned char bool;
extern int fn_829B0BF8();
extern int fn_829B5088();
extern int fn_829B5130();
extern unsigned int lbl_82054B24;
extern unsigned int lbl_82054B40;


void fn_829B98E0(int param_1)

{
  bool bVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  unsigned int uVar9;
  
  *(unsigned int *)(param_1 + 0x568) = 0;
  fn_829B0BF8();
  if (*(char *)(param_1 + 0x613) == '\0') {
    uVar8 = *(unsigned int *)(param_1 + 0x5b8);
    uVar9 = *(unsigned int *)(param_1 + 0x5c8);
    *(unsigned int *)(param_1 + 0x5c0) = *(unsigned int *)(param_1 + 0x5bc);
    *(unsigned int *)(param_1 + 0x5d0) = uVar8;
  }
  else {
    uVar8 = *(unsigned int *)(param_1 + 0x5bc);
    if ((*(unsigned int *)(param_1 + 0x560) & 2) == 0) {
      uVar8 = uVar8 + 7 >> 3;
    }
    *(unsigned int *)(param_1 + 0x5c0) = uVar8;
    uVar8 = *(unsigned int *)(param_1 + 0x5b8);
    iVar6 = (unsigned int)*(unsigned char *)(param_1 + 0x614) * 4;
    uVar7 = (unsigned __int64)*(unsigned int *)(&lbl_82054B40 + iVar6);
    trapWord(6,uVar7,0);
    iVar6 = (int)(((((unsigned __int64)uVar8 - (unsigned __int64)*(unsigned int *)(&lbl_82054B24 + iVar6)) + uVar7) - 1 &
                  0xffffffff) / uVar7);
    *(int *)(param_1 + 0x5d0) = iVar6;
    uVar9 = (unsigned int)*(unsigned char *)(param_1 + 0x619) * iVar6 + 7 >> 3;
  }
  uVar3 = *(unsigned int *)(param_1 + 0x560);
  *(unsigned int *)(param_1 + 0x5cc) = uVar9 + 1;
  uVar7 = (unsigned __int64)*(unsigned char *)(param_1 + 0x619);
  if (((uVar3 & 4) != 0) && (*(unsigned char *)(param_1 + 0x617) < 8)) {
    uVar7 = 8;
  }
  uVar9 = (unsigned int)uVar7;
  if ((uVar3 & 0x1000) != 0) {
    cVar2 = *(char *)(param_1 + 0x616);
    if (cVar2 == '\x03') {
      uVar9 = (-(unsigned int)(*(short *)(param_1 + 0x60a) != 0) & 8) + 0x18;
    }
    else if (cVar2 == '\0') {
      if (uVar9 < 8) {
        uVar7 = 8;
      }
      uVar9 = (unsigned int)uVar7;
      if (*(short *)(param_1 + 0x60a) != 0) {
        uVar9 = (unsigned int)(uVar7 << 1);
      }
    }
    else if ((cVar2 == '\x02') && (*(short *)(param_1 + 0x60a) != 0)) {
      uVar9 = (unsigned int)(uVar7 << 2) / 3;
    }
  }
  if ((uVar3 & 0x8000) == 0) goto LAB_829b9a70;
  cVar2 = *(char *)(param_1 + 0x616);
  if (cVar2 != '\x03') {
    if (cVar2 != '\0') {
      if ((cVar2 == '\x02') && (bVar1 = 0x20 < uVar9, uVar9 = 0x20, bVar1)) {
        uVar9 = 0x40;
      }
      goto LAB_829b9a70;
    }
    if (uVar9 < 9) {
      uVar9 = 0x10;
      goto LAB_829b9a70;
    }
  }
  uVar9 = 0x20;
LAB_829b9a70:
  uVar5 = fn_829B5088(param_1,(((__int64)(int)(uVar8 + 7 & 0xfffffff8) * (__int64)(int)uVar9
                                      + 7U & 0xffffffff) >> 3) + (__int64)((int)(uVar9 + 7) >> 3) +
                                    1);
  *(unsigned int *)(param_1 + 0x5dc) = uVar5;
  uVar4 = fn_829B5088(param_1,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c8) + 1);
  *(int *)(param_1 + 0x5d8) = (int)uVar4;
  fn_829B5130(param_1,uVar4,0,(unsigned __int64)*(unsigned int *)(param_1 + 0x5c8) + 1);
  *(unsigned int *)(param_1 + 0x55c) = *(unsigned int *)(param_1 + 0x55c) | 0x40;
  return;
}

