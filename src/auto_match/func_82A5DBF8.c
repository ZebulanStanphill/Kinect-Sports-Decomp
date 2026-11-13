extern unsigned int lbl_8208E060;
extern unsigned int lbl_8208E070;


unsigned char fn_82A5DBF8(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  unsigned char bVar7;
  short *psVar6;
  __int64 lVar8;
  
  bVar7 = 1;
  if (*(short *)(param_1 + 2) != 1) {
    bVar7 = -(*(short *)(param_1 + 2) == 2) & 1;
  }
  bVar7 = -(*(short *)(param_1 + 0x10) == 0x20) & -(*(short *)(param_1 + 0xe) == 4) & bVar7;
  if (bVar7 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x14) == 7) {
    psVar6 = (short *)(param_1 + 0x18);
    iVar5 = 0;
    lVar8 = 7;
    do {
      psVar2 = psVar6 + -1;
      psVar3 = (short *)(&lbl_8208E060 + iVar5);
      sVar1 = *psVar6;
      psVar6 = psVar6 + 2;
      psVar4 = (short *)(&lbl_8208E070 + iVar5);
      iVar5 = iVar5 + 2;
      bVar7 = -(*psVar4 == sVar1) & -(*psVar3 == *psVar2) & bVar7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  else {
    bVar7 = 0;
  }
  return -((unsigned __int64)*(unsigned short *)(param_1 + 0x12) != 0) &
         -((__int64)
           ((int)(((unsigned int)*(unsigned short *)(param_1 + 0xc) + (unsigned int)*(unsigned short *)(param_1 + 2) * -7) * 8) /
           (int)((unsigned int)*(unsigned short *)(param_1 + 2) << 2)) + 2U ==
          (unsigned __int64)*(unsigned short *)(param_1 + 0x12)) & bVar7;
}

