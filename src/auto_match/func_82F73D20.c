extern int fn_82F72F40();
extern int fn_82F73680();
extern int fn_82F73748();
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_20;


unsigned __int64 * fn_82F73D20(unsigned __int64 *param_1)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack_20;
  
  if (*lbl_832635C0 == 'X') {
    uVar2 = 0xffffffff8202f48c;
  }
  else {
    if (*lbl_832635C0 != 'Z') {
      fn_82F73748(&uStack_20);
      if (((uStack_20 & 0xff000000) == 0) && (cVar1 = *lbl_832635C0, cVar1 != '\0')) {
        if (cVar1 == '@') {
          lbl_832635C0 = lbl_832635C0 + 1;
          *param_1 = uStack_20;
          return param_1;
        }
        if (cVar1 != 'Z') {
          *(unsigned char *)((int)param_1 + 5) = 0;
          *(unsigned char *)((int)param_1 + 4) = 2;
          *(unsigned int *)param_1 = 0;
          return param_1;
        }
        lbl_832635C0 = lbl_832635C0 + 1;
        if (((~(unsigned __int64)lbl_832635D0 & 0xffffffff) >> 0x12 & 1) == 0) {
          uVar2 = 0xffffffff82169e08;
        }
        else {
          uVar2 = 0xffffffff82169e14;
        }
        fn_82F73680(&uStack_20,uVar2);
      }
      *param_1 = uStack_20;
      return param_1;
    }
    if (((~(unsigned __int64)lbl_832635D0 & 0xffffffff) >> 0x12 & 1) == 0) {
      uVar2 = 0xffffffff82169df8;
    }
    else {
      uVar2 = 0xffffffff82169e04;
    }
  }
  lbl_832635C0 = lbl_832635C0 + 1;
  fn_82F72F40(param_1,uVar2);
  return param_1;
}

