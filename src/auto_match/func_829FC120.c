void fn_829FC120(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  
  uVar4 = 0;
  do {
    iVar8 = *(int *)(param_1 + 0x4b6d0) + uVar4;
    uVar1 = *(unsigned short *)(iVar8 + 4);
    *(unsigned short *)(iVar8 + 6) = uVar1;
    uVar7 = (unsigned int)*(unsigned short *)(iVar8 + 0x14);
    if ((unsigned int)uVar1 < (unsigned int)*(unsigned short *)(iVar8 + 0x14)) {
      uVar7 = (unsigned int)uVar1;
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(unsigned short *)(iVar8 + -0x4fc) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar8 + -0x4fc);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(unsigned short *)(iVar8 + -0x4ec) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar8 + -0x4ec);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(unsigned short *)(iVar8 + 0x504) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar8 + 0x504);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if (*(unsigned short *)(iVar8 + 0x514) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar8 + 0x514);
    }
    *(short *)(iVar8 + 6) = (short)uVar7;
    if ((int)(uVar1 - uVar7) < 200) {
      *(unsigned short *)(iVar8 + 6) = uVar1;
    }
    lVar10 = 0x4e;
    iVar2 = iVar8 + 0x510;
    iVar3 = iVar8 + -0x4f0;
    do {
      iVar5 = iVar3;
      iVar6 = iVar2;
      iVar9 = iVar8;
      uVar1 = *(unsigned short *)(iVar9 + 0x14);
      *(unsigned short *)(iVar9 + 0x16) = uVar1;
      uVar7 = (unsigned int)*(unsigned short *)(iVar9 + 0x24);
      if ((unsigned int)uVar1 < (unsigned int)*(unsigned short *)(iVar9 + 0x24)) {
        uVar7 = (unsigned int)uVar1;
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar9 + 4) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar9 + 4);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar5 + 4) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar5 + 4);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar5 + 0x14) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar5 + 0x14);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar5 + -0xc) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar5 + -0xc);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar6 + 4) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar6 + 4);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar6 + 0x14) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar6 + 0x14);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if (*(unsigned short *)(iVar6 + -0xc) <= uVar7) {
        uVar7 = (unsigned int)*(unsigned short *)(iVar6 + -0xc);
      }
      *(short *)(iVar9 + 0x16) = (short)uVar7;
      if ((int)(uVar1 - uVar7) < 200) {
        *(unsigned short *)(iVar9 + 0x16) = uVar1;
      }
      lVar10 = lVar10 + -1;
      iVar8 = iVar9 + 0x10;
      iVar2 = iVar6 + 0x10;
      iVar3 = iVar5 + 0x10;
    } while (lVar10 != 0);
    uVar1 = *(unsigned short *)(iVar9 + 0x24);
    *(unsigned short *)(iVar9 + 0x26) = uVar1;
    uVar7 = (unsigned int)*(unsigned short *)(iVar9 + 0x14);
    if ((unsigned int)uVar1 < (unsigned int)*(unsigned short *)(iVar9 + 0x14)) {
      uVar7 = (unsigned int)uVar1;
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(unsigned short *)(iVar5 + 0x14) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar5 + 0x14);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(unsigned short *)(iVar5 + 4) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar5 + 4);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(unsigned short *)(iVar6 + 0x14) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar6 + 0x14);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if (*(unsigned short *)(iVar6 + 4) <= uVar7) {
      uVar7 = (unsigned int)*(unsigned short *)(iVar6 + 4);
    }
    *(short *)(iVar9 + 0x26) = (short)uVar7;
    if ((int)(uVar1 - uVar7) < 200) {
      *(unsigned short *)(iVar9 + 0x26) = uVar1;
    }
    uVar4 = uVar4 + 0x500;
  } while (uVar4 < 0x12c00);
  return;
}

