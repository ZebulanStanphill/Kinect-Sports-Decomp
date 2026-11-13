extern int fn_82E4FE08();
extern int fn_82E7ECB8();
extern int fn_82F691F0();


__int64 fn_82E7F478(unsigned short *param_1,unsigned short param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  if (*param_1 == 0) {
    *(int *)(param_1 + 4) = (int)param_3;
    *param_1 = param_2 | 0x1000;
    lVar2 = fn_82E7ECB8(param_1,aiStack_30);
    if (-1 < lVar2) {
      uVar3 = (__int64)aiStack_30[0] * (__int64)(int)param_3;
      if ((uVar3 & 0xffffffff) < (param_3 & 0xffffffff)) {
        lVar2 = -0x7fff0001;
      }
      else {
        uVar1 = fn_82E4FE08(uVar3);
        *(int *)(param_1 + 6) = (int)uVar1;
        if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(uVar1,0,uVar3);
        }
        lVar2 = -0x7ff8fff2;
      }
    }
  }
  else {
    lVar2 = -0x3ff2c916;
  }
  return lVar2;
}

