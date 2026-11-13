extern unsigned int *auStack_60;
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82E7E7E0();
extern int fn_82E7EC68();
extern int fn_82E7ECB8();
extern int fn_82F691F0();
extern unsigned int uStack_58;
extern unsigned int uStack_70;


__int64 fn_82E802B0(unsigned short *param_1,unsigned int param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned int uStack_70;
  int aiStack_6c [3];
  unsigned char auStack_60 [8];
  unsigned __int64 uStack_58;
  
  uVar3 = (unsigned __int64)*param_1;
  uStack_70 = 0;
  aiStack_6c[0] = 0;
  uStack_58 = 0;
  aiStack_6c[1] = 0;
  if (((*param_1 & 0x1000) == 0) && (uVar3 != 0)) {
    lVar5 = -0x3ff2c914;
  }
  else {
    lVar5 = fn_82E7EC68(param_1,&uStack_70);
    uVar2 = uStack_70;
    if (-1 < lVar5) {
      if ((param_3 == (unsigned short *)0x0) || (param_1 == param_3)) {
        lVar5 = -0x7fffbffd;
      }
      else {
        uVar1 = *param_3;
        if ((((unsigned __int64)uVar1 == 0) ||
            ((((uVar3 & 0xffffffff) != 0 && ((uVar3 & 0xfff) != 0xc)) &&
             (((unsigned __int64)uVar1 & 0xfff) != (uVar3 & 0xfff))))) || (uStack_70 < param_2)) {
          lVar5 = -0x7ff8ffa9;
        }
        else {
          if ((uVar3 & 0xffffffff) == 0) {
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            *param_1 = uVar1 & 0xfff | 0x1000;
          }
          lVar5 = fn_82E7ECB8(param_1,aiStack_6c);
          if (-1 < lVar5) {
            lVar4 = (__int64)(int)(uVar2 + 1) * (__int64)aiStack_6c[0];
            lVar5 = fn_82E4FE08(lVar4);
            if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(lVar5,0,lVar4);
            }
            lVar5 = -0x7ff8fff2;
          }
        }
      }
    }
  }
  fn_82E4FE40(0);
  fn_82E7E7E0(auStack_60);
  return lVar5;
}

