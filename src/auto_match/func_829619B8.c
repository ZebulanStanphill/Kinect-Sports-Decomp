extern int fn_82961218();


unsigned __int64 fn_829619B8(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if ((*(unsigned short *)(param_1 + 0xca) < 0x200) &&
     (puVar1 = *(unsigned int **)(param_1 + 0x104), (*puVar1 & 0xfff00000) != 0)) {
    uVar3 = 0;
    if (puVar1[1] != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(puVar1[2] + iVar4) * 4 + *(int *)(param_1 + 0x14)) + 8) != -1
           ) {
          uVar2 = fn_82961218();
          if (-1 < (int)uVar2) {
            return 0;
          }
          return uVar2;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < puVar1[1]);
    }
  }
  return 0;
}

