typedef unsigned char bool;


void fn_82F1C568(int param_1)

{
  bool bVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned short *puVar8;
  
  iVar4 = 0;
  iVar3 = 1;
  do {
    if (iVar3 < 8) {
      iVar6 = 8 - iVar3;
      puVar8 = (unsigned short *)((iVar3 + iVar4) * 2 + param_1 + -2);
      iVar5 = iVar3;
      do {
        iVar7 = iVar4 + iVar5;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 * 2;
        uVar2 = *(unsigned short *)(iVar7 + param_1);
        *(unsigned short *)(iVar7 + param_1) = puVar8[8];
        puVar8 = puVar8 + 8;
        *puVar8 = uVar2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar4 = iVar4 + 8;
    bVar1 = iVar3 < 7;
    iVar3 = iVar3 + 1;
  } while (bVar1);
  return;
}

