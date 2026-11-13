#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


unsigned __int64 fn_82767020(int param_1,unsigned short param_2)

{
  int iVar1;
  unsigned short uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int uVar6;
  
  lVar4 = 0;
  lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc) - 1;
  if (-1 < lVar5) {
    do {
      uVar6 = (int)lVar4 + (int)lVar5;
      uVar3 = (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      iVar1 = (int)((uVar3 & 0xffffffff) << 3) + *(int *)(param_1 + 0x10);
      uVar2 = CONCAT11(*(unsigned char *)(**(int **)(param_1 + 8) + iVar1 + 1),
                       *(unsigned char *)(**(int **)(param_1 + 8) + iVar1));
      if (param_2 == uVar2) {
        return uVar3;
      }
      if (param_2 < uVar2) {
        lVar5 = uVar3 - 1;
      }
      else {
        lVar4 = uVar3 + 1;
      }
    } while ((int)lVar4 <= (int)lVar5);
  }
  return 0xffffffffffffffff;
}

