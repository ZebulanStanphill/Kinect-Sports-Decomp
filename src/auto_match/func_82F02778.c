void fn_82F02778(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned int uVar16;
  
  *(unsigned int *)(param_1 + 0x6a8) = *(unsigned int *)(param_1 + 0x548);
  *(unsigned int *)(param_1 + 0x6ac) = *(unsigned int *)(param_1 + 0x554);
  *(unsigned int *)(param_1 + 0x6b0) = *(unsigned int *)(param_1 + 0x550);
  *(unsigned int *)(param_1 + 0x6b4) = *(unsigned int *)(param_1 + 0x55c);
  *(unsigned int *)(param_1 + 0x6b8) = *(unsigned int *)(param_1 + 0x31c);
  *(unsigned int *)(param_1 + 0x6bc) = *(unsigned int *)(param_1 + 800);
  *(unsigned int *)(param_1 + 0x6c0) = *(unsigned int *)(param_1 + 0x54c);
  *(unsigned int *)(param_1 + 0x6c4) = *(unsigned int *)(param_1 + 0x558);
  *(unsigned int *)(param_1 + 0x6c8) = *(unsigned int *)(param_1 + 0x560);
  *(unsigned int *)(param_1 + 0x6cc) = *(unsigned int *)(param_1 + 0x340);
  *(unsigned int *)(param_1 + 0x6d0) = *(unsigned int *)(param_1 + 0x2d0);
  *(unsigned int *)(param_1 + 0x6d4) = *(unsigned int *)(param_1 + 0x2d4);
  *(unsigned int *)(param_1 + 0x6d8) = *(unsigned int *)(param_1 + 0x2d8);
  *(unsigned int *)(param_1 + 0x6dc) = *(unsigned int *)(param_1 + 0x2dc);
  *(unsigned int *)(param_1 + 0x6e0) = *(unsigned int *)(param_1 + 0x564);
  *(unsigned int *)(param_1 + 0x6e4) = *(unsigned int *)(param_1 + 0x568);
  *(unsigned int *)(param_1 + 0x6e8) = *(unsigned int *)(param_1 + 0x56c);
  *(unsigned int *)(param_1 + 0x6ec) = *(unsigned int *)(param_1 + 0x570);
  *(unsigned int *)(param_1 + 0x6f0) = *(unsigned int *)(param_1 + 0x574);
  *(unsigned int *)(param_1 + 0x6f4) = *(unsigned int *)(param_1 + 0x578);
  *(unsigned int *)(param_1 + 0x6f8) = *(unsigned int *)(param_1 + 0x57c);
  *(unsigned int *)(param_1 + 0x6fc) = *(unsigned int *)(param_1 + 0x580);
  if ((param_2 == 0) || ((*(int *)(param_1 + 4) != 8 && (*(int *)(param_1 + 4) != 7)))) {
    uVar11 = (*(int *)(param_1 + 0x550) >> 1) + 0xf;
    uVar10 = (__int64)(*(int *)(param_1 + 0x548) >> 1) + 0xfU & 0xfffffff0;
    uVar14 = uVar11 & 0xfffffff0;
    iVar15 = (int)uVar10;
    *(int *)(param_1 + 0x700) = iVar15;
    iVar1 = iVar15 >> 1;
    iVar2 = (int)uVar14 >> 1;
    *(int *)(param_1 + 0x704) = iVar1;
    iVar3 = *(int *)(param_1 + 0x31c) >> 1;
    iVar12 = iVar1 + 0x20;
    uVar4 = *(int *)(param_1 + 800) >> 1;
    iVar5 = iVar15 >> 4;
    iVar6 = (int)uVar11 >> 4;
    uVar9 = (unsigned int)((uVar10 + 0x41 & 0xffffffff) << 5);
    iVar7 = (iVar1 + 0x21) * 0x10;
    uVar8 = (unsigned int)((uVar10 + 0x40 & 0xffffffff) << 4);
    *(unsigned int *)(param_1 + 0x708) = *(unsigned int *)(param_1 + 0x550);
    *(unsigned int *)(param_1 + 0x70c) = *(unsigned int *)(param_1 + 0x55c);
    *(int *)(param_1 + 0x710) = iVar3;
    *(unsigned int *)(param_1 + 0x714) = *(unsigned int *)(param_1 + 800);
    *(int *)(param_1 + 0x718) = iVar15 + 0x20;
    *(int *)(param_1 + 0x71c) = iVar1 + 0x10;
    *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x550) * iVar15;
    if ((iVar15 != iVar3) || (uVar13 = 1, *(int *)(param_1 + 0x550) != *(int *)(param_1 + 800))) {
      uVar13 = 0;
    }
    *(unsigned int *)(param_1 + 0x724) = uVar13;
    *(int *)(param_1 + 0x728) = iVar5;
    *(unsigned int *)(param_1 + 0x72c) = *(unsigned int *)(param_1 + 0x2d4);
    *(int *)(param_1 + 0x730) = *(int *)(param_1 + 0x2d4) * iVar5;
    *(int *)(param_1 + 0x734) = iVar5 + -1;
    uVar13 = (unsigned int)(uVar10 + 0x40);
    *(unsigned int *)(param_1 + 0x738) = uVar13;
    *(int *)(param_1 + 0x73c) = iVar12;
    *(unsigned int *)(param_1 + 0x740) = *(unsigned int *)(param_1 + 0x56c);
    *(unsigned int *)(param_1 + 0x744) = *(unsigned int *)(param_1 + 0x570);
    *(int *)(param_1 + 0x74c) = iVar7;
    *(unsigned int *)(param_1 + 0x750) = uVar8;
    *(int *)(param_1 + 0x754) = iVar12 * 8;
    *(unsigned int *)(param_1 + 0x748) = uVar9;
    *(unsigned int *)(param_1 + 0x758) = *(unsigned int *)(param_1 + 0x548);
    *(unsigned int *)(param_1 + 0x75c) = *(unsigned int *)(param_1 + 0x554);
    *(unsigned int *)(param_1 + 0x760) = uVar14;
    *(int *)(param_1 + 0x764) = iVar2;
    *(unsigned int *)(param_1 + 0x768) = *(unsigned int *)(param_1 + 0x31c);
    *(unsigned int *)(param_1 + 0x76c) = uVar4;
    *(unsigned int *)(param_1 + 0x770) = *(unsigned int *)(param_1 + 0x54c);
    *(unsigned int *)(param_1 + 0x774) = *(unsigned int *)(param_1 + 0x558);
    *(unsigned int *)(param_1 + 0x778) = *(int *)(param_1 + 0x548) * uVar14;
    if ((*(int *)(param_1 + 0x548) != *(int *)(param_1 + 0x31c)) || (uVar16 = 1, uVar14 != uVar4)) {
      uVar16 = 0;
    }
    *(unsigned int *)(param_1 + 0x77c) = uVar16;
    *(int *)(param_1 + 0x784) = iVar6;
    *(unsigned int *)(param_1 + 0x780) = *(unsigned int *)(param_1 + 0x2d0);
    *(int *)(param_1 + 0x788) = *(int *)(param_1 + 0x2d0) * iVar6;
    *(unsigned int *)(param_1 + 0x78c) = *(unsigned int *)(param_1 + 0x2dc);
    *(unsigned int *)(param_1 + 0x790) = *(unsigned int *)(param_1 + 0x564);
    *(unsigned int *)(param_1 + 0x798) = uVar14 + 0x40;
    *(unsigned int *)(param_1 + 0x794) = *(unsigned int *)(param_1 + 0x568);
    *(int *)(param_1 + 0x79c) = iVar2 + 0x20;
    *(unsigned int *)(param_1 + 0x7a0) = *(unsigned int *)(param_1 + 0x574);
    *(unsigned int *)(param_1 + 0x7a4) = *(unsigned int *)(param_1 + 0x578);
    *(unsigned int *)(param_1 + 0x7a8) = *(unsigned int *)(param_1 + 0x57c);
    *(unsigned int *)(param_1 + 0x7ac) = *(unsigned int *)(param_1 + 0x580);
    *(int *)(param_1 + 0x7b0) = iVar15;
    *(int *)(param_1 + 0x7b4) = iVar1;
    *(unsigned int *)(param_1 + 0x7b8) = uVar14;
    *(int *)(param_1 + 0x7bc) = iVar2;
    *(int *)(param_1 + 0x7c0) = iVar3;
    *(unsigned int *)(param_1 + 0x7c4) = uVar4;
    *(int *)(param_1 + 0x7c8) = iVar15 + 0x20;
    *(int *)(param_1 + 0x7cc) = iVar1 + 0x10;
    *(unsigned int *)(param_1 + 2000) = uVar14 * iVar15;
    if ((iVar15 != iVar3) || (uVar16 = 1, uVar14 != uVar4)) {
      uVar16 = 0;
    }
    *(unsigned int *)(param_1 + 0x7d4) = uVar16;
    *(int *)(param_1 + 0x7d8) = iVar5;
    *(int *)(param_1 + 0x7dc) = iVar6;
    *(int *)(param_1 + 0x7e0) = iVar6 * iVar5;
    *(int *)(param_1 + 0x7e4) = iVar5 + -1;
    *(unsigned int *)(param_1 + 0x7e8) = uVar13;
    *(int *)(param_1 + 0x7ec) = iVar12;
    *(unsigned int *)(param_1 + 0x7f0) = uVar14 + 0x40;
    *(int *)(param_1 + 0x7f4) = iVar2 + 0x20;
    *(unsigned int *)(param_1 + 0x7f8) = uVar9;
    *(int *)(param_1 + 0x7fc) = iVar7;
    *(unsigned int *)(param_1 + 0x800) = uVar8;
    *(int *)(param_1 + 0x804) = iVar12 * 8;
  }
  return;
}

