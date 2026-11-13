typedef unsigned char bool;
extern int fn_82645110();


unsigned __int64 fn_826415D0(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar2 = *(int *)(param_1 + 0x3244);
  uVar7 = 0;
  if (iVar2 != 0) {
    uVar7 = *(unsigned int *)(*(int *)(iVar2 + 0x40) + iVar2 + 0x30) >> 0x1b & 1;
  }
  uVar3 = *(unsigned int *)(param_1 + 0x2934);
  uVar5 = uVar3 >> 1;
  uVar4 = *(unsigned int *)(param_1 + 0x2940);
  uVar9 = *(unsigned int *)(param_1 + 0x2efc) >> 0x14;
  uVar8 = uVar4 & 0xfffffffe | *(unsigned char *)(param_1 + 0x2abe) >> 5 & uVar5 & 1;
  *(unsigned int *)(param_1 + 0x2940) = uVar8;
  if ((uVar9 & 2) == 0) {
    uVar9 = uVar9 & 1;
  }
  else {
    uVar6 = uVar3 >> 4 & 7;
    if ((uVar4 & 0x10) == 0) {
      if (uVar6 == 1) goto code_r0x8264167c;
      bVar1 = uVar6 == 3;
code_r0x8264166c:
      if ((bVar1) || (uVar9 = 0, uVar6 == 2)) goto code_r0x8264167c;
    }
    else {
      if (uVar6 != 4) {
        bVar1 = uVar6 == 6;
        goto code_r0x8264166c;
      }
code_r0x8264167c:
      uVar9 = 1;
    }
    uVar9 = uVar8 & ~uVar7 & uVar5 & uVar9;
    if ((uVar3 & 1) != 0) {
      uVar9 = uVar9 & ((uVar3 & 0x3800) == 0 && (uVar3 & 0xe0000) == 0);
      if ((uVar3 & 0x80) != 0) {
        uVar9 = uVar9 & ((uVar3 & 0xe0000000) == 0 && (uVar3 & 0x3800000) == 0);
      }
    }
  }
  uVar7 = *(unsigned int *)(param_1 + 0x2940);
  *(unsigned int *)(param_1 + 0x2940) = uVar9 << 1 | uVar7 & 0xfffffffd;
  if (uVar9 != 0) {
    if (((*(unsigned char *)(param_1 + 0x2abd) & 4) != 0) &&
       ((*(int *)(param_1 + 0x3590) == 0 || (*(int *)(param_1 + 0x3598) == 1)))) {
      uVar7 = *(unsigned int *)(param_1 + 0x30);
      *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) & 0xfb;
      if (*(unsigned int *)(param_1 + 0x38) < uVar7) {
        uVar7 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar7 + 4) = 0xc0004600;
      *(unsigned int *)(uVar7 + 8) = 0xf;
      *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar7 + 8);
    }
    goto code_r0x826417ac;
  }
  if ((uVar5 & 1) == 0) goto code_r0x826417ac;
  if ((uVar3 & 4) == 0) goto code_r0x826417ac;
  uVar3 = uVar3 >> 4 & 7;
  if ((uVar3 != 7) && (uVar3 != 5)) {
    if ((uVar7 & 0x10) == 0) {
      if (uVar3 != 4) {
        bVar1 = uVar3 == 6;
code_r0x8264179c:
        if (!bVar1) goto code_r0x826417ac;
      }
    }
    else if (uVar3 != 1) {
      bVar1 = uVar3 == 3;
      goto code_r0x8264179c;
    }
  }
  *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) | 4;
code_r0x826417ac:
  return param_2 | 0x100;
}

