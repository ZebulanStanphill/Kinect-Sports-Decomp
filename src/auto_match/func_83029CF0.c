extern int fn_82F65350();


__int64 fn_83029CF0(int param_1)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned int uVar8;
  __int64 lVar9;
  
  pcVar7 = *(char **)(param_1 + 0xc);
  uVar5 = (unsigned int)*(unsigned short *)(param_1 + 0x16);
  lVar9 = 1;
  uVar8 = 0;
  pcVar6 = pcVar7;
  if (uVar5 != 0) {
    do {
      if ((lVar9 == 0) || (lVar9 = 1, *pcVar6 == '\0')) {
        lVar9 = 0;
      }
      uVar8 = uVar8 + 1;
      pcVar6 = pcVar6 + 1;
    } while (uVar8 < uVar5);
  }
  if (((lVar9 != 0) && (pcVar7 != (char *)0x0)) && (uVar8 = 0, uVar5 != 0)) {
    pcVar7 = pcVar7 + -1;
    do {
      uVar8 = uVar8 + 1;
      pcVar7 = pcVar7 + 1;
      *pcVar7 = '\0';
    } while (uVar8 < *(unsigned short *)(param_1 + 0x16));
  }
  uVar3 = fn_82F65350();
  uVar1 = *(unsigned short *)(param_1 + 0x16);
  uVar4 = uVar3 - (__int64)((int)uVar3 / (int)(unsigned int)uVar1) * (__int64)(int)(unsigned int)uVar1;
  uVar2 = uVar4 & 0xffff;
  trapWord(6,(unsigned __int64)uVar1,0);
  *(short *)(param_1 + 0x14) = (short)uVar4;
  trapWord(5,(unsigned __int64)uVar1 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  if ((*(unsigned int *)(param_1 + 0x1c) & 2) != 0) {
    *(int *)(param_1 + 0x10) = (int)(uVar2 << 4) + *(int *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(unsigned char *)((int)uVar2 + *(int *)(param_1 + 0xc)) = 1;
  }
  return lVar9;
}

