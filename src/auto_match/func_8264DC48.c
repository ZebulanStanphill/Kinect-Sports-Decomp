extern int fn_82643A48();


void fn_8264DC48(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  int iVar7;
  unsigned short *puVar8;
  __int64 lVar9;
  
  iVar4 = fn_82643A48(param_1,0x905);
  *(unsigned int *)(iVar4 + 4) = 0x11921;
  iVar7 = 0;
  puVar8 = (unsigned short *)(param_2 + -2);
  *(unsigned int *)(iVar4 + 8) = 0;
  lVar9 = 0x100;
  *(unsigned int *)(iVar4 + 0xc) = 0;
  *(unsigned int *)(iVar4 + 0x10) = 0x1927;
  piVar6 = (int *)(iVar4 + 0x14);
  *piVar6 = 7;
  do {
    uVar1 = puVar8[0x201];
    uVar2 = puVar8[0x101];
    puVar8 = puVar8 + 1;
    uVar3 = *puVar8;
    piVar6[1] = 0x1925;
    uVar5 = ((uVar3 & 0xffc0) << 10 | uVar2 & 0x3ffffc0) << 4 | (unsigned int)(uVar1 >> 6);
    piVar6[2] = uVar5;
    iVar7 = iVar7 + 1;
    piVar6[3] = -0x3ffabb00;
    piVar6[4] = 7;
    piVar6[5] = 0x1925;
    piVar6[6] = uVar5;
    piVar6[7] = -1;
    piVar6[8] = 0x1922;
    piVar6 = piVar6 + 9;
    *piVar6 = iVar7;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(int **)(param_1 + 0x30) = piVar6;
  return;
}

