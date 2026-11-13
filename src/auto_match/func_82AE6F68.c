void fn_82AE6F68(int param_1,unsigned int param_2,__int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar2 = (unsigned __int64)param_2;
  if (((unsigned __int64)param_2 + param_3 & 0xffffffff) <= (unsigned __int64)param_2) {
    return;
  }
  uVar3 = ((unsigned __int64)param_2 & 0x3fffffff) << 2;
  do {
    uVar4 = ((2L << (uVar3 + 3 & 0x3f)) - 1U &
             *(unsigned __int64 *)(((int)((uVar3 & 0xffffffff) >> 6) + 1) * 8 + param_1) &
            -1L << (uVar3 & 0x3f)) >> (uVar3 & 0x3f);
    if ((uVar4 & 0xffffffff) != 0) {
      iVar1 = ((int)((uVar2 & 0xfffffff) >> 4) + 1) * 8;
      *(unsigned __int64 *)(iVar1 + param_1) =
           *(__int64 *)(iVar1 + param_1) - ((uVar4 & 0xf) << ((uVar2 & 0xf) << 2));
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar3 + 4;
  } while ((uVar2 & 0xffffffff) < ((unsigned __int64)param_2 + param_3 & 0xffffffff));
  return;
}

