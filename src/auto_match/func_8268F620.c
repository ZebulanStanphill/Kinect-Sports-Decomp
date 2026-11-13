#define true 1
extern int fn_8268F518();
extern unsigned int lbl_8200E4B0;


__int64 fn_8268F620(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar2 = *(unsigned int *)(((unsigned int)((param_2 & 0xffffffff) >> 3) & 0x1ffffffc) + (int)param_1) |
          *(unsigned int *)(&lbl_8200E4B0 + ((unsigned int)((param_2 & 0xffffffff) << 2) & 0x7c));
  if (uVar2 == *(unsigned int *)(&lbl_8200E4B0 + ((unsigned int)((param_2 & 0xffffffff) << 2) & 0x7c))) {
    uVar4 = ((param_2 & 0xffffffff) >> 5) + 1;
    lVar5 = -(param_2 & 0x1f);
    lVar3 = uVar4 * 4 + param_1;
    iVar1 = *(int *)lVar3;
    while( true ) {
      lVar5 = lVar5 + 0x20;
      if (iVar1 != 0) break;
      lVar3 = lVar3 + 4;
      iVar1 = *(int *)lVar3;
      uVar4 = uVar4 + 1;
    }
    lVar3 = fn_8268F518(*(unsigned int *)((int)((uVar4 & 0xffffffff) << 2) + (int)param_1));
    lVar3 = lVar3 + lVar5;
  }
  else {
    lVar3 = fn_8268F518(uVar2 >> (int)(param_2 & 0x1f));
  }
  return lVar3;
}

