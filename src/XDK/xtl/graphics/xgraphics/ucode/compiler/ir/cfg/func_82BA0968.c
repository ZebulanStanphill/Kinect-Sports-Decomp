extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BBFE28();
extern int fn_82BC0088();
extern int fn_82BC7368();
extern unsigned int uStack_144;


unsigned int fn_82BA0968(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int uStack_144;
  int aiStack_140 [80];
  
  iVar5 = 0;
  if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 0x1c)) {
    puVar8 = &uStack_144;
    do {
      uVar6 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
      puVar3 = (unsigned int *)fn_82B7BD28(uVar6,0x14);
      puVar9 = puVar3 + 1;
      *puVar3 = uVar6;
      if (puVar9 == (unsigned int *)0x0) {
        puVar9 = (unsigned int *)0x0;
      }
      else {
        fn_82BA03B8(puVar9,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
      }
      iVar7 = *(int *)(param_1 + 0xc);
      iVar5 = iVar5 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = puVar9;
    } while (iVar5 <= *(int *)(*(int *)(iVar7 + 0x550) + 0x1c));
  }
  for (iVar5 = *(int *)(param_1 + 0x88); *(int *)(iVar5 + 8) != 0; iVar5 = *(int *)(iVar5 + 8)) {
    piVar4 = (int *)fn_82BC0088(aiStack_140[*(int *)(iVar5 + 0x34)],
                                      *(unsigned int *)(aiStack_140[*(int *)(iVar5 + 0x34)] + 4));
    *piVar4 = iVar5;
  }
  iVar5 = fn_82BBFE28(param_1 + 0x80);
  uVar6 = fn_82B7BD28(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5ac),iVar5 + 1U & 0x3fffffff
                           );
  iVar5 = iVar5 + -1;
  *(unsigned int *)(param_1 + 0xa0) = uVar6;
  iVar7 = 0;
  if (-1 < *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 0x1c)) {
    piVar4 = aiStack_140;
    do {
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 4) != 0) {
        iVar10 = iVar5 << 2;
        do {
          uVar6 = fn_82BC7368(iVar1);
          iVar2 = *piVar4;
          iVar5 = iVar5 + -1;
          *(unsigned int *)(iVar10 + *(int *)(param_1 + 0xa0)) = uVar6;
          iVar10 = iVar10 + -4;
        } while (*(int *)(iVar2 + 4) != 0);
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar7 <= *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x550) + 0x1c));
  }
  return *(unsigned int *)(param_1 + 0xa0);
}

