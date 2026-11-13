void fn_82F2CF10(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned short *puVar10;
  int iVar11;
  unsigned int uVar12;
  __int64 lVar13;
  __int64 lVar14;
  
  iVar6 = (int)param_2;
  uVar9 = *(unsigned int *)(param_1 + 0x60);
  trapWord(6,(unsigned __int64)uVar9,0);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 4);
  uVar7 = (int)(((unsigned __int64)uVar2 & 0x1ffffff) << 7) / (int)uVar9;
  uVar12 = (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1) * uVar9;
  trapWord(6,(unsigned __int64)uVar2,0);
  lVar13 = (__int64)((int)uVar9 >> 1) + (unsigned __int64)((int)uVar9 < 0 && (uVar9 & 1) != 0);
  trapWord(5,(unsigned __int64)uVar9 &
             ~((((unsigned __int64)uVar2 & 0xffffff) << 8 | ((unsigned __int64)uVar2 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  iVar1 = (int)uVar12 / (int)uVar2;
  trapWord(5,(unsigned __int64)uVar2 &
             ~((((unsigned __int64)uVar12 & 0x7fffffff) << 1 | (unsigned __int64)(uVar12 >> 0x1f)) - 1),0xffff);
  uVar7 = 0xffffffffU - ((int)uVar7 >> 0x1f) & uVar7;
  iVar11 = uVar2 * 2 * iVar6 * 2 + *(int *)(param_1 + 0x78);
  if (iVar6 < (int)param_3) {
    param_3 = param_3 - param_2;
    puVar10 = (unsigned short *)(uVar9 * 2 * iVar6 * 2 + *(int *)(param_1 + 0x84) + -4);
    do {
      uVar9 = 0;
      lVar14 = (__int64)iVar1;
      if (0 < iVar1) {
        do {
          uVar3 = (int)uVar9 >> 6 & 0xfffffffe;
          uVar8 = uVar9 + uVar7;
          uVar4 = uVar8 & 0xff;
          uVar12 = (int)uVar8 >> 6;
          puVar10[3] = (short)((int)((unsigned int)*(unsigned short *)((uVar3 + 1) * 2 + iVar11) *
                                     (0x80 - (uVar9 & 0x7f)) +
                                    (unsigned int)*(unsigned short *)((uVar3 + 3) * 2 + iVar11) * (uVar9 & 0x7f)) >>
                              7);
          uVar5 = (unsigned __int64)uVar12 & 0xfffffffc;
          uVar9 = uVar8 + uVar7;
          puVar10[5] = (short)((int)((unsigned int)*(unsigned short *)(((uVar12 & 0xfffffffe) + 1) * 2 + iVar11) *
                                     (0x80 - (uVar8 & 0x7f)) +
                                    (unsigned int)*(unsigned short *)(((uVar12 & 0xfffffffe) + 3) * 2 + iVar11) *
                                    (uVar8 & 0x7f)) >> 7);
          puVar10[2] = (short)(*(unsigned short *)((int)((uVar5 + 4 & 0xffffffff) << 1) + iVar11) * uVar4 +
                               (unsigned int)*(unsigned short *)((uVar12 & 0x7ffffffc) * 2 + iVar11) *
                               (0x100 - uVar4) >> 8);
          puVar10[4] = (short)((unsigned int)*(unsigned short *)(((int)uVar5 + 2) * 2 + iVar11) * (0x100 - uVar4) +
                               *(unsigned short *)((int)((uVar5 + 6 & 0xffffffff) << 1) + iVar11) * uVar4 >>
                              8);
          puVar10 = puVar10 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (iVar1 < (int)lVar13) {
        lVar14 = lVar13 - iVar1;
        do {
          uVar12 = (int)uVar9 >> 6;
          uVar3 = (int)(uVar9 + uVar7) >> 6;
          uVar9 = uVar9 + uVar7 + uVar7;
          puVar10[3] = *(unsigned short *)(((uVar12 & 0xfffffffe) + 1) * 2 + iVar11);
          puVar10[5] = *(unsigned short *)(((uVar3 & 0xfffffffe) + 1) * 2 + iVar11);
          puVar10[2] = *(unsigned short *)((uVar3 & 0x7ffffffc) * 2 + iVar11);
          puVar10 = puVar10 + 4;
          *puVar10 = *(unsigned short *)(((uVar3 & 0xfffffffc) + 2) * 2 + iVar11);
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      param_3 = param_3 + -1;
      iVar11 = uVar2 * 4 + iVar11;
    } while (param_3 != 0);
  }
  return;
}

