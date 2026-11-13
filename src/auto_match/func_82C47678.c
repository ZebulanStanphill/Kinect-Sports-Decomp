extern int fn_82A1DDC0();


void fn_82C47678(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_1 + 0xef8) + *(int *)(param_1 + 0xdc);
  iVar9 = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xdc);
  iVar4 = *(int *)(param_1 + 0xe0);
  iVar7 = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xd0) + iVar4;
  iVar5 = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xd0) + iVar4;
  iVar3 = *(int *)(param_1 + 0xefc) + iVar4;
  iVar4 = *(int *)(param_1 + 0xf00) + iVar4;
  fn_82A1DDC0(iVar8,iVar9);
  iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
  fn_82A1DDC0(iVar8,iVar9);
  iVar6 = 0;
  iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
  uVar1 = *(unsigned int *)(param_1 + 0xbc);
  if (0 < (__int64)((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    do {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0xb4)) {
        do {
          *(char *)(iVar2 + iVar8) =
               (char)((int)((unsigned int)*(unsigned char *)(*(int *)(param_1 + 0xcc) * 2 + iVar2 + iVar9) +
                            (unsigned int)*(unsigned char *)(iVar9 + iVar2) + 1) >> 1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0xb4));
      }
      iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
      iVar9 = *(int *)(param_1 + 0xcc) * 2 + iVar9;
      fn_82A1DDC0(iVar8,iVar9);
      iVar6 = iVar6 + 1;
      iVar8 = *(int *)(param_1 + 0xcc) + iVar8;
      uVar1 = *(unsigned int *)(param_1 + 0xbc);
    } while (iVar6 < (int)(((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  fn_82A1DDC0(iVar3,iVar7,*(unsigned int *)(param_1 + 0xd0));
  iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
  fn_82A1DDC0(iVar3,iVar7);
  uVar1 = *(unsigned int *)(param_1 + 200);
  iVar8 = 0;
  iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
  if (0 < (__int64)((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    do {
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 0xc0)) {
        do {
          *(char *)(iVar6 + iVar3) =
               (char)((int)((unsigned int)*(unsigned char *)(*(int *)(param_1 + 0xd0) * 2 + iVar6 + iVar7) +
                            (unsigned int)*(unsigned char *)(iVar7 + iVar6) + 1) >> 1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 0xc0));
      }
      iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
      iVar7 = *(int *)(param_1 + 0xd0) * 2 + iVar7;
      fn_82A1DDC0(iVar3,iVar7);
      uVar1 = *(unsigned int *)(param_1 + 200);
      iVar8 = iVar8 + 1;
      iVar3 = *(int *)(param_1 + 0xd0) + iVar3;
    } while (iVar8 < (int)(((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  fn_82A1DDC0(iVar4,iVar5);
  iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
  fn_82A1DDC0(iVar4,iVar5);
  iVar8 = 0;
  iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
  uVar1 = *(unsigned int *)(param_1 + 200);
  if (0 < (__int64)((__int64)((int)uVar1 >> 1) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 1) != 0)))
  {
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xc0)) {
        do {
          *(char *)(iVar3 + iVar4) =
               (char)((int)((unsigned int)*(unsigned char *)(*(int *)(param_1 + 0xd0) * 2 + iVar3 + iVar5) +
                            (unsigned int)*(unsigned char *)(iVar5 + iVar3) + 1) >> 1);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 0xc0));
      }
      iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
      iVar5 = *(int *)(param_1 + 0xd0) * 2 + iVar5;
      fn_82A1DDC0(iVar4,iVar5);
      iVar8 = iVar8 + 1;
      iVar4 = *(int *)(param_1 + 0xd0) + iVar4;
      uVar1 = *(unsigned int *)(param_1 + 200);
    } while (iVar8 < (int)(((int)uVar1 >> 1) + (unsigned int)((int)uVar1 < 0 && (uVar1 & 1) != 0)));
  }
  return;
}

