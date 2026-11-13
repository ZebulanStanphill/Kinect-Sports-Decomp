extern int fn_82A453D0();


void fn_82A47958(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned short *puVar10;
  unsigned int uVar11;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  uVar7 = fn_82A453D0(*(unsigned int *)(param_1 + 0x1d8),param_2,param_3,aiStack_30);
  if (((param_2 & 0xffffffff) == (unsigned __int64)(*(int *)(param_1 + 0x1c0) - 1)) &&
     (uVar2 = *(unsigned int *)(param_1 + 0x40), (uVar2 & 1) != 0)) {
    iVar9 = 0;
    if ((uVar7 & 0xffffffff) != 0) {
      uVar11 = *(unsigned int *)(param_1 + 0x1e4);
      iVar3 = *(int *)(param_1 + 0x1e0);
      puVar10 = (unsigned short *)(aiStack_30[0] + -2);
      do {
        uVar8 = iVar9 + param_4;
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + 1;
        trapWord(6,(unsigned __int64)uVar11,0);
        *(unsigned short *)
         ((int)((param_2 & 0xffffffff) << 2) +
         uVar2 * (uVar8 - (uVar8 / uVar11) * uVar11) * 2 + iVar3) = *puVar10;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    iVar9 = 0;
    if ((uVar7 & 0xffffffff) != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x1e4);
      iVar3 = *(int *)(param_1 + 0x40);
      puVar10 = (unsigned short *)(aiStack_30[0] + -2);
      iVar4 = *(int *)(param_1 + 0x1e0);
      do {
        uVar11 = iVar9 + param_4;
        puVar5 = puVar10 + 1;
        puVar10 = puVar10 + 2;
        uVar1 = *puVar10;
        iVar9 = iVar9 + 1;
        trapWord(6,(unsigned __int64)uVar2,0);
        puVar6 = (unsigned short *)
                 ((uVar11 - (uVar11 / uVar2) * uVar2) * iVar3 * 2 + iVar4 +
                 (int)((param_2 & 0xffffffff) << 2));
        *puVar6 = *puVar5;
        puVar6[1] = uVar1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

