void fn_82CA8198(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  int iVar18;
  int iVar19;
  
  uVar11 = (*(int *)(param_1 + 0xb4) >> 1) + 0xf;
  uVar8 = uVar11 & 0xfffffff0;
  iVar2 = (int)uVar8 >> 1;
  iVar19 = *(int *)(param_1 + 0x4fb0) + uVar8;
  uVar9 = (*(int *)(param_1 + 0xbc) >> 1) + 0xf;
  uVar16 = uVar9 & 0xfffffff0;
  iVar3 = (int)uVar16 >> 1;
  uVar4 = *(int *)(param_1 + 0x9c) >> 1;
  uVar5 = *(int *)(param_1 + 0xa0) >> 1;
  iVar6 = (int)uVar11 >> 4;
  iVar7 = (int)uVar9 >> 4;
  if (*(int *)(param_1 + 0xf8c) != 0) {
    iVar2 = (int)uVar8 >> 2;
    iVar3 = (int)uVar16 >> 2;
  }
  iVar1 = *(int *)(param_1 + 0x4fb4);
  *(int *)(param_1 + 0x3a30) = *(int *)(param_1 + 0xb4);
  iVar13 = *(int *)(param_1 + 0x4fb0) * 2;
  iVar10 = iVar1 * 2 + iVar2;
  iVar12 = iVar13 + uVar8;
  iVar18 = (iVar12 + 1) * *(int *)(param_1 + 0x4fb0);
  iVar15 = (iVar10 + 1) * iVar1;
  *(unsigned int *)(param_1 + 0x3a34) = *(unsigned int *)(param_1 + 0xc0);
  *(unsigned int *)(param_1 + 0x3a38) = *(unsigned int *)(param_1 + 0xbc);
  iVar13 = iVar13 + uVar16;
  iVar14 = iVar1 * 2 + iVar3;
  *(unsigned int *)(param_1 + 0x3a3c) = *(unsigned int *)(param_1 + 200);
  *(unsigned int *)(param_1 + 0x3a40) = *(unsigned int *)(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x3a44) = *(unsigned int *)(param_1 + 0xa0);
  *(unsigned int *)(param_1 + 0x3a48) = *(unsigned int *)(param_1 + 0xb8);
  *(unsigned int *)(param_1 + 0x3a4c) = *(unsigned int *)(param_1 + 0xc4);
  *(unsigned int *)(param_1 + 0x3a50) = *(unsigned int *)(param_1 + 0x98);
  *(unsigned int *)(param_1 + 0x3a54) = *(unsigned int *)(param_1 + 0x88);
  *(unsigned int *)(param_1 + 0x3a58) = *(unsigned int *)(param_1 + 0x8c);
  *(unsigned int *)(param_1 + 0x3a5c) = *(unsigned int *)(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0x3a60) = *(unsigned int *)(param_1 + 0x94);
  *(unsigned int *)(param_1 + 0x3a64) = *(unsigned int *)(param_1 + 0xcc);
  *(unsigned int *)(param_1 + 0x3a68) = *(unsigned int *)(param_1 + 0xd0);
  *(unsigned int *)(param_1 + 0x3a6c) = *(unsigned int *)(param_1 + 0xd4);
  *(unsigned int *)(param_1 + 0x3a70) = *(unsigned int *)(param_1 + 0xd8);
  *(unsigned int *)(param_1 + 0x3a74) = *(unsigned int *)(param_1 + 0xdc);
  *(unsigned int *)(param_1 + 0x3a78) = *(unsigned int *)(param_1 + 0xe0);
  *(unsigned int *)(param_1 + 0x3a7c) = *(unsigned int *)(param_1 + 0xe4);
  *(unsigned int *)(param_1 + 0x3a80) = *(unsigned int *)(param_1 + 0xe8);
  *(unsigned int *)(param_1 + 0x3a84) = uVar8;
  *(int *)(param_1 + 0x3a88) = iVar2;
  *(unsigned int *)(param_1 + 0x3a8c) = *(unsigned int *)(param_1 + 0xbc);
  *(unsigned int *)(param_1 + 0x3a90) = *(unsigned int *)(param_1 + 200);
  *(unsigned int *)(param_1 + 0x3a94) = uVar4;
  *(unsigned int *)(param_1 + 15000) = *(unsigned int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x3a9c) = iVar19;
  *(int *)(param_1 + 0x3aa0) = iVar1 + iVar2;
  if ((uVar8 != uVar4) || (uVar17 = 1, *(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0xa0))) {
    uVar17 = 0;
  }
  *(unsigned int *)(param_1 + 0x3aa4) = uVar17;
  *(int *)(param_1 + 0x3aa8) = iVar6;
  *(unsigned int *)(param_1 + 0x3aac) = *(unsigned int *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x3ab0) = *(int *)(param_1 + 0x8c) * iVar6;
  *(int *)(param_1 + 0x3ab4) = iVar6 + -1;
  *(int *)(param_1 + 0x3ab8) = iVar12;
  *(int *)(param_1 + 0x3abc) = iVar10;
  *(unsigned int *)(param_1 + 0x3ac0) = *(unsigned int *)(param_1 + 0xd4);
  *(unsigned int *)(param_1 + 0x3ac4) = *(unsigned int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0x3acc) = iVar15;
  *(int *)(param_1 + 0x3ad0) = iVar12 * 0x10;
  *(int *)(param_1 + 0x3ad4) = iVar10 * 8;
  *(int *)(param_1 + 0x3ac8) = iVar18;
  *(unsigned int *)(param_1 + 0x3ad8) = *(unsigned int *)(param_1 + 0xb4);
  *(unsigned int *)(param_1 + 0x3adc) = *(unsigned int *)(param_1 + 0xc0);
  *(unsigned int *)(param_1 + 0x3ae0) = uVar16;
  *(int *)(param_1 + 0x3ae4) = iVar3;
  *(unsigned int *)(param_1 + 0x3ae8) = *(unsigned int *)(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x3aec) = uVar5;
  *(unsigned int *)(param_1 + 0x3af0) = *(unsigned int *)(param_1 + 0xb8);
  *(unsigned int *)(param_1 + 0x3af4) = *(unsigned int *)(param_1 + 0xc4);
  if ((*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0x9c)) || (uVar17 = 1, uVar16 != uVar5)) {
    uVar17 = 0;
  }
  *(unsigned int *)(param_1 + 0x3af8) = uVar17;
  *(int *)(param_1 + 0x3b00) = iVar7;
  *(unsigned int *)(param_1 + 0x3afc) = *(unsigned int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x3b04) = *(int *)(param_1 + 0x88) * iVar7;
  *(unsigned int *)(param_1 + 0x3b08) = *(unsigned int *)(param_1 + 0x94);
  *(unsigned int *)(param_1 + 0x3b0c) = *(unsigned int *)(param_1 + 0xcc);
  *(unsigned int *)(param_1 + 0x3b10) = *(unsigned int *)(param_1 + 0xd0);
  *(int *)(param_1 + 0x3b14) = iVar13;
  *(int *)(param_1 + 0x3b18) = iVar14;
  *(unsigned int *)(param_1 + 0x3b1c) = *(unsigned int *)(param_1 + 0xdc);
  *(unsigned int *)(param_1 + 0x3b20) = *(unsigned int *)(param_1 + 0xe0);
  *(unsigned int *)(param_1 + 0x3b24) = *(unsigned int *)(param_1 + 0xe4);
  *(unsigned int *)(param_1 + 0x3b28) = *(unsigned int *)(param_1 + 0xe8);
  *(unsigned int *)(param_1 + 0x3b2c) = uVar8;
  *(int *)(param_1 + 0x3b30) = iVar2;
  *(unsigned int *)(param_1 + 0x3b34) = uVar16;
  *(int *)(param_1 + 0x3b38) = iVar3;
  *(unsigned int *)(param_1 + 0x3b3c) = uVar4;
  *(unsigned int *)(param_1 + 0x3b40) = uVar5;
  *(int *)(param_1 + 0x3b44) = iVar19;
  *(int *)(param_1 + 0x3b48) = iVar1 + iVar2;
  if ((uVar8 != uVar4) || (uVar17 = 1, uVar16 != uVar5)) {
    uVar17 = 0;
  }
  *(unsigned int *)(param_1 + 0x3b4c) = uVar17;
  *(int *)(param_1 + 0x3b50) = iVar6;
  *(int *)(param_1 + 0x3b54) = iVar7;
  *(int *)(param_1 + 0x3b58) = iVar7 * iVar6;
  *(int *)(param_1 + 0x3b5c) = iVar6 + -1;
  *(int *)(param_1 + 0x3b60) = iVar12;
  *(int *)(param_1 + 0x3b64) = iVar10;
  *(int *)(param_1 + 0x3b68) = iVar13;
  *(int *)(param_1 + 0x3b6c) = iVar14;
  *(int *)(param_1 + 0x3b70) = iVar18;
  *(int *)(param_1 + 0x3b74) = iVar15;
  *(int *)(param_1 + 0x3b78) = iVar12 * 0x10;
  *(int *)(param_1 + 0x3b7c) = iVar10 * 8;
  return;
}

