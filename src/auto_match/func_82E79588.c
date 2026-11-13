extern unsigned int *auStack_20;
extern int fn_82E78690();


unsigned __int64 fn_82E79588(int param_1)

{
  __int64 lVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int auStack_20 [2];
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1e0) != (unsigned __int64)*(unsigned short *)(param_1 + 0x146)) {
    return 1;
  }
  lVar1 = fn_82E78690(param_1 + 0x178,(unsigned __int64)*(unsigned short *)(param_1 + 0x146) - 1,auStack_20);
  uVar2 = -(unsigned int)(lVar1 != 0) & auStack_20[0];
  if (uVar2 != 0) {
    if (*(int *)(uVar2 + 300) != 0) {
      if ((int)(*(unsigned short *)(param_1 + 0x146) - 1) < (int)(unsigned int)*(unsigned char *)(uVar2 + 0x130)) {
        return 0xffffffffc00d36bb;
      }
      lVar1 = fn_82E78690(param_1 + 0x178,
                            ((unsigned __int64)*(unsigned short *)(param_1 + 0x146) -
                            (unsigned __int64)*(unsigned char *)(uVar2 + 0x130)) + -1,auStack_20);
      uVar2 = -(unsigned int)(lVar1 != 0) & auStack_20[0];
    }
    if (uVar2 != 0) {
      if (*(int *)(uVar2 + 300) == 0) {
        iVar3 = *(int *)(uVar2 + 0x17);
      }
      else {
        iVar3 = *(int *)(uVar2 + 0x134);
      }
      iVar3 = iVar3 + *(int *)(uVar2 + 0x13);
      if (*(int *)(param_1 + 0x168) + iVar3 != *(int *)(param_1 + 0x148)) {
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x148) - iVar3;
      }
      return 0;
    }
  }
  return 0xffffffffc00d36bb;
}

