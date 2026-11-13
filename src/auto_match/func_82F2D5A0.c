void fn_82F2D5A0(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  unsigned int uVar12;
  __int64 lVar13;
  
  iVar5 = (int)param_2;
  uVar9 = *(unsigned int *)(param_1 + 0x60);
  trapWord(6,(unsigned __int64)uVar9,0);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 4);
  uVar6 = (int)(((unsigned __int64)uVar2 & 0x1ffffff) << 7) / (int)uVar9;
  uVar12 = (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1) * uVar9;
  iVar7 = uVar2 * 2 * iVar5 + *(int *)(param_1 + 0x78);
  trapWord(5,(unsigned __int64)uVar9 &
             ~((((unsigned __int64)uVar2 & 0xffffff) << 8 | ((unsigned __int64)uVar2 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  lVar11 = (__int64)((int)uVar9 >> 1) + (unsigned __int64)((int)uVar9 < 0 && (uVar9 & 1) != 0);
  iVar1 = (int)uVar12 / (int)uVar2;
  trapWord(6,(unsigned __int64)uVar2,0);
  trapWord(5,(unsigned __int64)uVar2 &
             ~((((unsigned __int64)uVar12 & 0x7fffffff) << 1 | (unsigned __int64)(uVar12 >> 0x1f)) - 1),0xffff);
  uVar6 = 0xffffffffU - ((int)uVar6 >> 0x1f) & uVar6;
  if (iVar5 < (int)param_3) {
    param_3 = param_3 - param_2;
    puVar10 = (unsigned char *)(uVar9 * 2 * iVar5 + *(int *)(param_1 + 0x84) + -2);
    do {
      uVar9 = 0;
      if (0 < iVar1) {
        lVar13 = (__int64)iVar1;
        do {
          uVar12 = (int)uVar9 >> 6 & 0xfffffffe;
          uVar8 = uVar9 + uVar6;
          uVar3 = uVar8 & 0xff;
          puVar10[3] = (char)((int)((unsigned int)*(unsigned char *)(iVar7 + 1 + uVar12) * (0x80 - (uVar9 & 0x7f)) +
                                   (unsigned int)*(unsigned char *)(iVar7 + 3 + uVar12) * (uVar9 & 0x7f)) >> 7);
          uVar12 = (int)uVar8 >> 6 & 0xfffffffe;
          uVar4 = (int)uVar8 >> 6 & 0xfffffffc;
          uVar9 = uVar8 + uVar6;
          puVar10[5] = (char)((int)((unsigned int)*(unsigned char *)(iVar7 + 1 + uVar12) * (0x80 - (uVar8 & 0x7f)) +
                                   (unsigned int)*(unsigned char *)(iVar7 + 3 + uVar12) * (uVar8 & 0x7f)) >> 7);
          puVar10[2] = (char)(*(unsigned char *)(iVar7 + 4 + uVar4) * uVar3 +
                              (unsigned int)*(unsigned char *)(uVar4 + iVar7) * (0x100 - uVar3) >> 8);
          puVar10[4] = (char)(*(unsigned char *)(iVar7 + 6 + uVar4) * uVar3 +
                              (unsigned int)*(unsigned char *)(iVar7 + 2 + uVar4) * (0x100 - uVar3) >> 8);
          puVar10 = puVar10 + 4;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (iVar1 < (int)lVar11) {
        lVar13 = lVar11 - iVar1;
        do {
          uVar12 = (int)uVar9 >> 6;
          uVar3 = (int)(uVar9 + uVar6) >> 6;
          uVar4 = uVar3 & 0xfffffffc;
          uVar9 = uVar9 + uVar6 + uVar6;
          puVar10[3] = *(unsigned char *)((uVar12 & 0xfffffffe) + iVar7 + 1);
          puVar10[5] = *(unsigned char *)((uVar3 & 0xfffffffe) + iVar7 + 1);
          puVar10[2] = *(unsigned char *)(uVar4 + iVar7);
          puVar10 = puVar10 + 4;
          *puVar10 = *(unsigned char *)(iVar7 + 2 + uVar4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      param_3 = param_3 + -1;
      iVar7 = iVar7 + uVar2 * 2;
    } while (param_3 != 0);
  }
  return;
}

