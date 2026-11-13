extern int fn_82E4FE08();
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7ECB8();
extern int memset();
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


__int64 fn_82E80190(unsigned short *param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  stack_pair_40.first = 0;
  uStack_30 = 0;
  stack_pair_40.second = 0;
  uStack_28 = 0;
  if ((*param_1 & 0x1000) == 0) {
    if (*param_1 == 0) {
      lVar3 = -0x3ff2c917;
    }
    else {
      lVar3 = fn_82E7E900(&uStack_30,param_1);
      if (-1 < lVar3) {
        lVar3 = fn_82E7E7E0(param_1);
        if (-1 < lVar3) {
          param_1[4] = 0;
          param_1[5] = 1;
          *param_1 = (((unsigned __int64)(uStack_30) >> 0) & 0xFFFF) & 0xfff | 0x1000;
          lVar3 = fn_82E7ECB8(param_1,&stack_pair_40.first);
          uVar1 = stack_pair_40.first;
          if (-1 < lVar3) {
            uVar2 = fn_82E4FE08(stack_pair_40.first);
            *(int *)(param_1 + 6) = (int)uVar2;
            if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
              memset(uVar2,0,uVar1);
            }
            lVar3 = -0x7ff8fff2;
          }
        }
      }
    }
  }
  else {
    lVar3 = -0x3ff2c915;
  }
  fn_82E7E7E0(&uStack_30);
  return lVar3;
}

