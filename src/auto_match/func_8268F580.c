extern int fn_8268F498();
extern unsigned int lbl_8200E3B0;


__int64 fn_8268F580(__int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  lVar2 = ((param_2 & 0xffffffff) >> 3 & 0x1ffffffc) + param_1;
  uVar4 = (param_2 & 0xffffffff) >> 5;
  uVar1 = *(unsigned int *)lVar2 & *(unsigned int *)(&lbl_8200E3B0 + ((unsigned int)((param_2 & 0xffffffff) << 2) & 0x7c));
  if (uVar1 == *(unsigned int *)(&lbl_8200E3B0 + ((unsigned int)((param_2 & 0xffffffff) << 2) & 0x7c))) {
    lVar5 = -(param_2 & 0x1f);
    uVar3 = (uVar4 + 1) * 0x20 & 0xffffffe0;
    do {
      lVar5 = lVar5 + 0x20;
      if ((unsigned __int64)param_3 <= (uVar3 & 0xffffffff)) break;
      lVar2 = lVar2 + 4;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x20;
    } while (*(int *)lVar2 == -1);
    lVar2 = fn_8268F498(*(unsigned int *)((int)((uVar4 & 0xffffffff) << 2) + (int)param_1));
    lVar2 = lVar2 + lVar5;
  }
  else {
    lVar2 = fn_8268F498(uVar1 >> (int)(param_2 & 0x1f));
  }
  return lVar2;
}

