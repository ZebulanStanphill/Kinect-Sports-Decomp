void fn_82F24A58(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned short uVar5;
  unsigned short *puVar6;
  int iVar7;
  unsigned short *puVar8;
  unsigned short *puVar9;
  __int64 lVar10;
  
  puVar8 = (unsigned short *)(param_1 + -2);
  puVar9 = (unsigned short *)(param_2 + 4);
  iVar7 = (param_1 - param_2) + -4;
  lVar10 = 0x40;
  do {
    uVar4 = *(unsigned short *)(iVar7 + (int)puVar9);
    uVar1 = puVar8[2];
    uVar2 = puVar8[4];
    uVar3 = puVar8[3];
    uVar5 = (short)(uVar4 ^ puVar9[-2]) >> 0xf;
    *(unsigned short *)(iVar7 + (int)puVar9) = puVar9[-2] & ~uVar5 | uVar4 & uVar5;
    uVar4 = (short)(uVar1 ^ puVar9[-1]) >> 0xf;
    puVar8[2] = puVar9[-1] & ~uVar4 | uVar1 & uVar4;
    uVar1 = (short)(*puVar9 ^ uVar3) >> 0xf;
    puVar8[3] = *puVar9 & ~uVar1 | uVar3 & uVar1;
    puVar6 = puVar9 + 1;
    uVar1 = (short)(uVar2 ^ *puVar6) >> 0xf;
    puVar9 = puVar9 + 4;
    puVar8 = puVar8 + 4;
    *puVar8 = *puVar6 & ~uVar1 | uVar2 & uVar1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

