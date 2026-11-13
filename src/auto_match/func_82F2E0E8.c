void fn_82F2E0E8(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned char *puVar10;
  unsigned int uVar11;
  __int64 lVar12;
  
  uVar3 = *(unsigned int *)(param_1 + 0x60);
  trapWord(6,(unsigned __int64)uVar3,0);
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 4);
  uVar7 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x74) + 0xe);
  uVar11 = (uVar4 - 1) * uVar3;
  iVar2 = (int)(((unsigned __int64)uVar4 & 0x1ffffff) << 7) / (int)uVar3;
  trapWord(5,(unsigned __int64)uVar3 &
             ~((((unsigned __int64)uVar4 & 0xffffff) << 8 | ((unsigned __int64)uVar4 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  iVar1 = (int)uVar11 / (int)uVar4;
  trapWord(6,(unsigned __int64)uVar4,0);
  trapWord(5,(unsigned __int64)uVar4 &
             ~((((unsigned __int64)uVar11 & 0x7fffffff) << 1 | (unsigned __int64)(uVar11 >> 0x1f)) - 1),0xffff);
  if (0 < iVar2) {
    iVar6 = (int)param_2;
    iVar8 = *(int *)(param_1 + 0x58) * iVar6 * 4 + *(int *)(param_1 + 0x78);
    puVar10 = (unsigned char *)(*(int *)(param_1 + 0x60) * iVar6 * 4 + *(int *)(param_1 + 0x84));
    if (iVar6 < (int)param_3) {
      param_3 = param_3 - param_2;
      do {
        uVar11 = 0;
        if (0 < iVar1) {
          lVar12 = (__int64)iVar1;
          do {
            uVar5 = uVar11 & 0x7f;
            iVar6 = ((int)uVar11 >> 7) * 4;
            iVar9 = 0x80 - uVar5;
            uVar11 = uVar11 + iVar2;
            *puVar10 = (char)((int)(*(unsigned char *)(iVar8 + 4 + iVar6) * uVar5 +
                                   (unsigned int)*(unsigned char *)(iVar6 + iVar8) * iVar9) >> 7);
            puVar10[1] = (char)((int)(*(unsigned char *)(iVar8 + 5 + iVar6) * uVar5 +
                                     (unsigned int)*(unsigned char *)(iVar8 + 1 + iVar6) * iVar9) >> 7);
            puVar10[2] = (char)((int)(*(unsigned char *)(iVar8 + 6 + iVar6) * uVar5 +
                                     (unsigned int)*(unsigned char *)(iVar8 + 2 + iVar6) * iVar9) >> 7);
            puVar10[3] = (char)((int)(*(unsigned char *)(iVar8 + 7 + iVar6) * uVar5 +
                                     (unsigned int)*(unsigned char *)(iVar8 + 3 + iVar6) * iVar9) >> 7);
            puVar10 = puVar10 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (iVar1 < *(int *)(param_1 + 0x60)) {
          lVar12 = (__int64)iVar1;
          do {
            lVar12 = lVar12 + 1;
            iVar6 = ((int)uVar11 >> 7) * 4;
            uVar11 = uVar11 + iVar2;
            *puVar10 = *(unsigned char *)(iVar6 + iVar8);
            puVar10[1] = *(unsigned char *)(iVar8 + 1 + iVar6);
            puVar10[2] = *(unsigned char *)(iVar8 + 2 + iVar6);
            puVar10[3] = *(unsigned char *)(iVar8 + 3 + iVar6);
            puVar10 = puVar10 + 4;
          } while ((int)lVar12 < *(int *)(param_1 + 0x60));
        }
        param_3 = param_3 + -1;
        puVar10 = puVar10 + ((int)(uVar7 * uVar3 + 0x1f & 0xffffffe0) >> 3) +
                            (uVar3 & 0x3fffffff) * -4;
        iVar8 = iVar8 + ((int)(uVar7 * uVar4 + 0x1f & 0xffffffe0) >> 3);
      } while (param_3 != 0);
    }
  }
  return;
}

