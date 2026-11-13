extern unsigned int uStack_54;


unsigned __int64 fn_82995B88(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int *piVar9;
  unsigned int uVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uStack_54;
  int aiStack_50 [20];
  
  uVar1 = *param_2;
  uVar4 = (unsigned __int64)uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) == 0) {
LAB_82995b9c:
    uVar5 = 1;
  }
  else {
    uVar2 = param_2[1];
    uVar14 = 0;
    trapWord(6,uVar4,0);
    if ((int)(uVar2 / uVar4) != 0) {
      uVar3 = *(unsigned int *)(param_1 + 0x6c);
      lVar6 = 0;
      do {
        lVar11 = 0;
        aiStack_50[0] = -1;
        aiStack_50[1] = -1;
        aiStack_50[2] = -1;
        aiStack_50[3] = -1;
        if ((uVar1 & 0xfffff) != 0) {
          puVar12 = &uStack_54;
          uVar10 = param_2[2];
          iVar8 = *(int *)(param_1 + 0x14);
          uVar15 = uVar4;
          do {
            uVar7 = lVar6 + lVar11;
            lVar11 = lVar11 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *(unsigned int *)
                        (*(int *)(*(int *)((int)((uVar7 & 0xffffffff) << 2) + uVar10) * 4 + iVar8) +
                        0x10);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if ((int)(uVar3 << 2 | uVar3 >> 0x1e) < 0) {
          iVar8 = 0;
          uVar10 = 0;
          do {
            uVar13 = 0;
            piVar9 = aiStack_50;
            while ((*piVar9 == -1 || (*piVar9 == *(int *)((uVar10 + uVar13) * 4 + -0x7cea42d8)))) {
              uVar13 = uVar13 + 1;
              piVar9 = piVar9 + 1;
              if (3 < uVar13) goto LAB_82995c7c;
            }
            uVar10 = uVar10 + 4;
            iVar8 = iVar8 + 1;
          } while (uVar10 < 0x20);
LAB_82995c7c:
          if (iVar8 == 8) goto LAB_82995b9c;
        }
        uVar14 = uVar14 + 1;
        lVar6 = lVar6 + uVar4;
      } while ((uVar14 & 0xffffffff) < uVar2 / uVar4);
    }
    uVar5 = 0;
  }
  return uVar5;
}

