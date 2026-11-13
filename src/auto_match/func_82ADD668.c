#define true 1
extern int fn_82AA66A8();
extern int fn_82ADD198();


void fn_82ADD668(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar8 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12);
  while( true ) {
    if (((unsigned __int64)(*(unsigned int *)(param_2 + 0x10) >> 0x10) & 7) +
        ((unsigned __int64)*(unsigned int *)(param_2 + 0x10) & 0xffff) <= (uVar8 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    iVar3 = fn_82ADD198(param_1,uVar8);
    iVar3 = *(int *)(iVar3 * 4 + *(int *)(param_1 + 0x2b0));
    if (iVar3 != 0) break;
    uVar8 = uVar8 + 1;
  }
  uVar8 = 0xffff;
  uVar4 = *(unsigned int *)(param_2 + 8) >> 1 & 0xf;
  do {
    if (uVar4 == 0) {
      if ((uVar8 & 0xffffffff) == 0xffff) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      return;
    }
    uVar1 = *(unsigned int *)(iVar3 + 0xc0);
    uVar5 = 0;
    if ((uVar1 & 7) != 0) {
      uVar6 = 0;
      do {
        if ((0x1fU - LZCOUNT(uVar4 & ~(uVar4 - 1)) & 0xffffffff) ==
            ((unsigned __int64)((uVar1 >> 0xe & 0xff) >> (uVar6 & 0x3f)) & 3)) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 2;
      } while (uVar5 < (uVar1 & 7));
    }
    if ((uVar1 & 7) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar1 = *(unsigned int *)(param_2 + 0x10);
    uVar2 = (unsigned __int64)uVar1 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 < ((unsigned __int64)(uVar1 >> 0x10) & 7) + ((unsigned __int64)uVar1 & 0xffff)) {
      do {
        if ((1L << (uVar7 & 0x3f) &
            *(unsigned __int64 *)(((unsigned int)uVar7 >> 3 & 0x1ffffff8) + *(int *)(uVar5 * 4 + iVar3))) != 0) {
          if ((uVar7 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            uVar8 = uVar7;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < ((unsigned __int64)(uVar1 >> 0x10) & 7) + uVar2);
    }
    if (((unsigned __int64)(*(unsigned int *)(param_2 + 0x10) >> 0x10) & 7) +
        ((unsigned __int64)*(unsigned int *)(param_2 + 0x10) & 0xffff) <= (uVar7 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    uVar4 = uVar4 - (uVar4 & ~(uVar4 - 1));
  } while( true );
}

