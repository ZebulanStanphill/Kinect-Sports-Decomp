__int64 fn_82E9A9A8(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  unsigned char bVar15;
  unsigned char bVar16;
  unsigned char *pbVar17;
  __int64 lVar18;
  int iVar19;
  __int64 lVar20;
  
  iVar19 = 0;
  lVar18 = 0;
  pbVar17 = (unsigned char *)(param_1 + -0x10);
  lVar20 = 0x10;
  do {
    bVar1 = pbVar17[0x1d];
    bVar2 = pbVar17[0x1f];
    bVar3 = pbVar17[0x1e];
    bVar4 = pbVar17[0x1b];
    bVar5 = pbVar17[0x1a];
    bVar6 = pbVar17[0x19];
    bVar7 = pbVar17[0x17];
    bVar8 = pbVar17[0x16];
    bVar9 = pbVar17[0x14];
    bVar10 = pbVar17[0x11];
    bVar11 = pbVar17[0x1c];
    bVar12 = pbVar17[0x18];
    bVar13 = pbVar17[0x15];
    bVar14 = pbVar17[0x13];
    bVar15 = pbVar17[0x12];
    pbVar17 = pbVar17 + 0x10;
    bVar16 = *pbVar17;
    iVar19 = (unsigned int)bVar16 + (unsigned int)bVar10 + (unsigned int)bVar15 + (unsigned int)bVar14 + (unsigned int)bVar9 + (unsigned int)bVar13
             + (unsigned int)bVar8 + (unsigned int)bVar7 + (unsigned int)bVar12 + (unsigned int)bVar6 + (unsigned int)bVar5 + (unsigned int)bVar4 +
             (unsigned int)bVar11 + (unsigned int)bVar1 + (unsigned int)bVar2 + (unsigned int)bVar3 + iVar19;
    lVar18 = (__int64)(int)(unsigned int)bVar16 * (__int64)(int)(unsigned int)bVar16 +
             (__int64)(int)(unsigned int)bVar10 * (__int64)(int)(unsigned int)bVar10 +
             (__int64)(int)(unsigned int)bVar15 * (__int64)(int)(unsigned int)bVar15 +
             (__int64)(int)(unsigned int)bVar14 * (__int64)(int)(unsigned int)bVar14 +
             (__int64)(int)(unsigned int)bVar9 * (__int64)(int)(unsigned int)bVar9 +
             (__int64)(int)(unsigned int)bVar13 * (__int64)(int)(unsigned int)bVar13 +
             (__int64)(int)(unsigned int)bVar8 * (__int64)(int)(unsigned int)bVar8 +
             (__int64)(int)(unsigned int)bVar7 * (__int64)(int)(unsigned int)bVar7 +
             (__int64)(int)(unsigned int)bVar12 * (__int64)(int)(unsigned int)bVar12 +
             (__int64)(int)(unsigned int)bVar3 * (__int64)(int)(unsigned int)bVar3 +
             (__int64)(int)(unsigned int)bVar6 * (__int64)(int)(unsigned int)bVar6 +
             (__int64)(int)(unsigned int)bVar5 * (__int64)(int)(unsigned int)bVar5 +
             (__int64)(int)(unsigned int)bVar4 * (__int64)(int)(unsigned int)bVar4 +
             (__int64)(int)(unsigned int)bVar11 * (__int64)(int)(unsigned int)bVar11 +
             (__int64)(int)(unsigned int)bVar1 * (__int64)(int)(unsigned int)bVar1 +
             (__int64)(int)(unsigned int)bVar2 * (__int64)(int)(unsigned int)bVar2 + lVar18;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  return lVar18 - (iVar19 * iVar19 >> 8);
}

