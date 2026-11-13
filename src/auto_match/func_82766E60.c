#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


__int64 fn_82766E60(int param_1,unsigned short param_2)

{
  int iVar1;
  unsigned short uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int uVar6;
  
  lVar4 = 0;
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) - 1;
  if (-1 < lVar5) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
    do {
      uVar6 = (int)lVar4 + (int)lVar5;
      lVar3 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      uVar6 = (int)lVar3 * 8 + *(int *)(param_1 + 0x10);
      uVar2 = CONCAT11(*(unsigned char *)
                        (*(int *)((uVar6 + 1 >> 10 & 0x3ffffc) + iVar1) + (uVar6 + 1 & 0xfff)),
                       *(unsigned char *)(*(int *)((uVar6 >> 10 & 0x3ffffc) + iVar1) + (uVar6 & 0xfff))
                      );
      if (param_2 == uVar2) {
        return lVar3;
      }
      if (param_2 < uVar2) {
        lVar5 = lVar3 + -1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
    } while ((int)lVar4 <= (int)lVar5);
  }
  return -1;
}

