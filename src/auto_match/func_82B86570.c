#define true 1
extern int fn_82ABDD90();
extern int fn_82AE7308();
extern int fn_82B84C90();


unsigned int fn_82B86570(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  
  if ((param_4 & 0xff) != 0) {
    iVar3 = (int)param_2 * 0x28;
    if (*(int *)(*(int *)(param_1 + 0xc) + iVar3 + 0x1c) == 0) {
      fn_82AE7308();
    }
    param_4 = 0;
    param_3 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + iVar3 + 0x1c) + param_3 * 8) >> 4 &
              0x3fff;
  }
  uVar4 = *(unsigned int *)(param_1 + 4);
  uVar1 = *(unsigned int *)((-(unsigned int)((uVar4 & 1) == 0) & uVar4) + 0x14);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      uVar4 = fn_82B84C90(param_1,param_2,param_3,param_4,0x7c,
                            -(unsigned __int64)((uVar4 & 1) == 0) & (unsigned __int64)uVar4,
                            (-(unsigned __int64)((uVar4 & 1) == 0) & (unsigned __int64)uVar4) + 0x10 | 3);
      return uVar4;
    }
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3e00) {
      uVar2 = *(unsigned int *)(uVar1 + 8);
      iVar3 = fn_82ABDD90(param_1,uVar2 >> 7 & 0x7f,uVar2 >> 0x13 & 7,uVar2 >> 0xe & 7);
      uVar2 = *(unsigned int *)(iVar3 + (uVar1 - 8));
      if ((((unsigned __int64)uVar2 & 0x7fff) == (param_2 & 0xffffffff)) &&
         ((uVar2 >> 0xf & 0x3fff) == param_3)) {
        return uVar1;
      }
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
  } while( true );
}

