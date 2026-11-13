extern int fn_82F1CFB0();
extern unsigned int uStack_374;


unsigned __int64 fn_82F1EE28(int param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int in_r7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  short *psVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned int in_stack_00000064;
  unsigned int uStack_374;
  short asStack_370 [440];
  
  uStack_374 = in_stack_00000064;
  lVar17 = 0;
  fn_82F1CFB0(param_1);
  iVar12 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar18 = 0x40;
  lVar10 = 0;
  psVar11 = (short *)((int)&uStack_374 + 2);
  do {
    psVar1 = psVar11 + 1;
    psVar2 = psVar11 + 2;
    psVar3 = psVar11 + 3;
    psVar11 = psVar11 + 4;
    uVar15 = ((__int64)*psVar1 - (unsigned __int64)*(unsigned char *)(iVar12 + in_r7)) + 0x80;
    uVar7 = ((__int64)*psVar2 - (unsigned __int64)*(unsigned char *)(in_r7 + 1 + iVar12)) + 0x80;
    uVar5 = ((__int64)*psVar3 - (unsigned __int64)*(unsigned char *)(in_r7 + 2 + iVar12)) + 0x80;
    uVar4 = (unsigned __int64)((int)uVar15 >> 0x1f);
    uVar6 = ((__int64)*psVar11 - (unsigned __int64)*(unsigned char *)(in_r7 + 3 + iVar12)) + 0x80;
    uVar16 = (unsigned __int64)((int)uVar7 >> 0x1f);
    uVar14 = (unsigned __int64)((int)uVar5 >> 0x1f);
    uVar13 = (unsigned __int64)((int)uVar6 >> 0x1f);
    lVar17 = ((uVar15 ^ uVar4) - uVar4) + lVar17;
    lVar10 = ((uVar7 ^ uVar16) - uVar16) + lVar10;
    lVar9 = ((uVar5 ^ uVar14) - uVar14) + lVar9;
    lVar8 = ((uVar6 ^ uVar13) - uVar13) + lVar8;
    iVar12 = iVar12 + 4;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x588) & 0x1ffffff) << 7;
  uVar5 = lVar8 + lVar9 + lVar10 + lVar17;
  return ((~(uVar4 ^ uVar5) & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar4 <= uVar5) & 1;
}

