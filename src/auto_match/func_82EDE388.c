extern unsigned int iStack_a8;
extern unsigned int lbl_8215F9C0;
extern unsigned int uStack_b0;


void fn_82EDE388(void)

{
  int iVar1;
  char cVar2;
  char cVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar11;
  unsigned __int64 uVar10;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  __int64 lVar18;
  unsigned int uStack_b0;
  int iStack_a8;
  
  puVar11 = (unsigned int *)&lbl_8215F9C0;
  iStack_a8 = 0;
  do {
    uStack_b0 = 4;
    iVar8 = iStack_a8;
    do {
      uVar10 = (unsigned __int64)*puVar11;
      uVar9 = 0;
      lVar18 = 0x40;
      do {
        uVar6 = (unsigned int)(uVar9 & 0xf8);
        uVar5 = (unsigned int)(uVar9 & 0xfc);
        uVar16 = (uVar9 & 0xf8) + (__int64)(int)(uVar6 / 0x33) * -0x33;
        uVar13 = uVar9 + 1 & 0xf8;
        uVar4 = uVar9 + 1 & 0xfc;
        iVar1 = (int)uVar9;
        cVar2 = (char)(uVar6 / 0x33);
        uVar6 = (unsigned int)uVar13;
        uVar12 = (uVar9 & 0xfc) + (__int64)(int)(uVar5 / 0x33) * -0x33;
        uVar13 = uVar13 + (__int64)(int)(uVar6 / 0x33) * -0x33;
        uVar17 = (unsigned int)uVar4;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb6088) =
             ((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar2;
        uVar14 = uVar9 + 2 & 0xf8;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5f88) =
             (((char)((~(uVar12 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar12 <= uVar10) & 1U) +
             (char)(uVar5 / 0x33)) * '\x06';
        uVar7 = (unsigned int)uVar14;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5e88) =
             (((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar2)
             * '$' + '\n';
        uVar4 = uVar4 + (__int64)(int)(uVar17 / 0x33) * -0x33;
        cVar3 = (char)(uVar6 / 0x33);
        uVar12 = uVar9 + 2 & 0xfc;
        uVar14 = uVar14 + (__int64)(int)(uVar7 / 0x33) * -0x33;
        uVar5 = (unsigned int)uVar12;
        uVar12 = uVar12 + (__int64)(int)(uVar5 / 0x33) * -0x33;
        uVar16 = uVar9 + 3 & 0xf8;
        uVar6 = (unsigned int)uVar16;
        cVar2 = (char)(uVar7 / 0x33);
        uVar16 = uVar16 + (__int64)(int)(uVar6 / 0x33) * -0x33;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb6087) =
             ((char)((~(uVar13 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar13 <= uVar10) & 1U) + cVar3;
        uVar15 = uVar9 + 3 & 0xfc;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5f87) =
             (((char)((~(uVar4 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar4 <= uVar10) & 1U) +
             (char)(uVar17 / 0x33)) * '\x06';
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5e87) =
             (((char)((~(uVar13 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar13 <= uVar10) & 1U) + cVar3)
             * '$' + '\n';
        uVar7 = (unsigned int)uVar15;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb6086) =
             ((char)((~(uVar14 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar14 <= uVar10) & 1U) + cVar2;
        cVar3 = (char)(uVar6 / 0x33);
        uVar15 = uVar15 + (__int64)(int)(uVar7 / 0x33) * -0x33;
        *(unsigned char *)(iVar8 + -0x7cdb5f85 + iVar1) =
             (((char)((~(uVar15 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar15 <= uVar10) & 1U) +
             (char)(uVar7 / 0x33)) * '\x06';
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5e86) =
             (((char)((~(uVar14 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar14 <= uVar10) & 1U) + cVar2)
             * '$' + '\n';
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb6085) =
             ((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar3;
        uVar9 = uVar9 + 4;
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5f86) =
             (((char)((~(uVar12 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar12 <= uVar10) & 1U) +
             (char)(uVar5 / 0x33)) * '\x06';
        *(unsigned char *)(iVar8 + iVar1 + -0x7cdb5e85) =
             (((char)((~(uVar16 ^ uVar10) & 0xffffffff) >> 0x1f) + (uVar16 <= uVar10) & 1U) + cVar3)
             * '$' + '\n';
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      uVar9 = (unsigned __int64)uStack_b0;
      iVar8 = iVar8 + 0xc00;
      puVar11 = puVar11 + 1;
      uStack_b0 = (unsigned int)(uVar9 - 1);
    } while (uVar9 - 1 != 0);
    iStack_a8 = iStack_a8 + 0x300;
  } while ((int)puVar11 < -0x7dea0600);
  return;
}

