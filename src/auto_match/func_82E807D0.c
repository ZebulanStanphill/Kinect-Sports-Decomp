extern unsigned int *auStack_30;
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7F8F0();
extern unsigned int uStack_28;


__int64 fn_82E807D0(short *param_1,unsigned __int64 param_2,short *param_3)

{
  __int64 lVar1;
  unsigned char auStack_30 [8];
  unsigned __int64 uStack_28;
  
  uStack_28 = 0;
  if (*param_1 == 0) {
    lVar1 = -0x3ff2c917;
  }
  else if ((param_3 == (short *)0x0) || (param_1 == param_3)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    lVar1 = fn_82E7F8F0(param_1,param_2,auStack_30);
    if ((-1 < lVar1) && (lVar1 = fn_82E7E900(param_3,auStack_30), -1 < lVar1)) {
      uStack_28 = 0;
    }
  }
  fn_82E7E7E0(auStack_30);
  return lVar1;
}

