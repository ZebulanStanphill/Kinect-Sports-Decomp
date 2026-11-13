extern int fn_82A1DDC0();


void fn_82CA1518(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iVar14;
  __int64 lVar15;
  __int64 lVar16;
  __int64 lVar17;
  
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe0);
  uVar1 = *(unsigned int *)(param_1 + 0xdc);
  iVar14 = 0;
  uVar2 = *(unsigned int *)(param_1 + 0xec0);
  uVar3 = *(unsigned int *)(param_1 + 0xefc);
  uVar4 = *(unsigned int *)(param_1 + 0xec4);
  uVar5 = *(unsigned int *)(param_1 + 0xf00);
  iVar6 = *(int *)(param_1 + 0xcc);
  iVar7 = *(int *)(param_1 + 0xd0);
  uVar8 = *(unsigned int *)(param_1 + 0xef8);
  uVar9 = *(unsigned int *)(param_1 + 0xec8);
  *(unsigned int *)(*(int *)(param_1 + 0xeb0) + 0x268) =
       *(unsigned int *)(*(int *)(param_1 + 0xea0) + 0x268);
  lVar12 = (__int64)(iVar7 >> 1) * (__int64)param_2;
  lVar10 = (__int64)(iVar6 >> 1) * (__int64)param_2;
  lVar13 = (unsigned __int64)uVar2 + (unsigned __int64)uVar1 + lVar10;
  lVar16 = uVar4 + uVar11 + lVar12;
  lVar15 = uVar9 + uVar11 + lVar12;
  lVar10 = (unsigned __int64)uVar8 + (unsigned __int64)uVar1 + lVar10;
  lVar17 = uVar3 + uVar11 + lVar12;
  lVar12 = uVar5 + uVar11 + lVar12;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      fn_82A1DDC0(lVar17,lVar16,*(int *)(param_1 + 0xd0) >> 1);
      uVar1 = *(unsigned int *)(param_1 + 0xd0);
      lVar17 = (unsigned __int64)uVar1 + lVar17;
      lVar16 = (unsigned __int64)uVar1 + lVar16;
      fn_82A1DDC0(lVar12,lVar15,(int)uVar1 >> 1);
      lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar12;
      lVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xd0) + lVar15;
      fn_82A1DDC0(lVar10,lVar13,*(int *)(param_1 + 0xcc) >> 1);
      uVar1 = *(unsigned int *)(param_1 + 0xcc);
      lVar10 = (unsigned __int64)uVar1 + lVar10;
      lVar13 = (unsigned __int64)uVar1 + lVar13;
      fn_82A1DDC0(lVar10,lVar13,(int)uVar1 >> 1);
      iVar14 = iVar14 + 1;
      lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + lVar10;
      lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc) + lVar13;
    } while (iVar14 < *(int *)(param_1 + 200));
  }
  return;
}

