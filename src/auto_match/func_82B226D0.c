extern int fn_82AA66A8();
extern int fn_82B1E2A0();
extern int fn_82B1E618();


void fn_82B226D0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar1 = 0;
  if (*(unsigned int *)(param_1 + 0x218) != 0) {
    piVar2 = (int *)(param_1 + 0x160);
    do {
      if (((unsigned __int64)(unsigned int)piVar2[-1] & 0x1f) == (param_3 & 0xffffffff)) {
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        iVar3 = *piVar2;
      }
      if (((unsigned __int64)(unsigned int)piVar2[-1] & 0x1f) == (param_5 & 0xffffffff)) {
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        iVar4 = *piVar2;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (uVar1 < *(unsigned int *)(param_1 + 0x218));
    if (((iVar3 != 0) && (iVar4 != 0)) && (iVar3 != iVar4)) {
      if (((((0x8da691691448U >> (param_2 & 0x7f)) >> (param_2 & 0x7f)) >> (param_2 & 0x7f) &
            0xffffffff ^ (unsigned __int64)(*(unsigned int *)(iVar3 + 8) >> 0xe)) & 7) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
      if (((unsigned __int64)(*(unsigned int *)(iVar4 + 8) >> 0xe) & 7) !=
          (((0x8da691691448U >> (param_4 & 0x7f)) >> (param_4 & 0x7f)) >> (param_4 & 0x7f) & 7)) {
        fn_82B1E2A0(param_1,param_5,iVar4);
      }
      fn_82B1E618(param_1,param_3,iVar3,
                    (-1 - LZCOUNT((unsigned int)param_4 & ~((unsigned int)param_4 - 1))) + LZCOUNT((int)param_2),
                    param_5,iVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

