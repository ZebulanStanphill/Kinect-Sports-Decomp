void fn_82F2EC80(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  
  iVar5 = (int)param_2;
  uVar1 = *(unsigned int *)(param_1 + 0x60);
  uVar9 = (unsigned __int64)uVar1;
  trapWord(6,uVar9,0);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 4);
  uVar7 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x74) + 0xe);
  uVar10 = (uVar2 - 1) * uVar1;
  iVar3 = (int)(uVar7 * uVar1 + 0x1f & 0xffffffe0) >> 3;
  uVar1 = (int)(((unsigned __int64)uVar2 & 0x1ffffff) << 7) / (int)uVar1;
  iVar4 = (int)(uVar7 * uVar2 + 0x1f & 0xffffffe0) >> 3;
  trapWord(6,(unsigned __int64)uVar2,0);
  trapWord(5,uVar9 & ~((((unsigned __int64)uVar2 & 0xffffff) << 8 | ((unsigned __int64)uVar2 & 0x1ffffff) >> 0x18)
                      - 1),0xffff);
  trapWord(5,(unsigned __int64)uVar2 &
             ~((((unsigned __int64)uVar10 & 0x7fffffff) << 1 | (unsigned __int64)(uVar10 >> 0x1f)) - 1),0xffff);
  iVar6 = iVar4 * iVar5 + *(int *)(param_1 + 0x78);
  lVar8 = (__int64)iVar3 * (__int64)iVar5 + (unsigned __int64)*(unsigned int *)(param_1 + 0x84);
  if (iVar5 < (int)param_3) {
    param_3 = param_3 - param_2;
    do {
      uVar7 = 0;
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x60)) {
        do {
          if ((0x80 - (uVar7 & 0x7f) < (uVar7 & 0x7f)) && (iVar5 < (int)uVar10 / (int)uVar2)) {
            *(unsigned char *)lVar8 = *(unsigned char *)(((int)uVar7 >> 7) + iVar6 + 1);
          }
          else {
            *(unsigned char *)lVar8 = *(unsigned char *)(((int)uVar7 >> 7) + iVar6);
          }
          iVar5 = iVar5 + 1;
          lVar8 = lVar8 + 1;
          uVar7 = uVar7 + (0xffffffffU - ((int)uVar1 >> 0x1f) & uVar1);
        } while (iVar5 < *(int *)(param_1 + 0x60));
      }
      lVar8 = lVar8 + ((__int64)iVar3 - uVar9);
      iVar6 = iVar6 + iVar4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

