extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82CAD2F8();


unsigned __int64 fn_82CAD600(int param_1,int *param_2,int param_3,unsigned int *param_4,unsigned char param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  param_2[1] = param_3;
  *(unsigned char *)(param_2 + 2) = param_5;
  if (*param_2 != 0) {
    fn_82C563B0(lVar3);
    *param_2 = 0;
  }
  uVar1 = fn_82C562F0(lVar3,(((unsigned __int64)(*param_4 >> 5) & 0x7fffffe) +
                                   (unsigned __int64)(unsigned int)(1 << (param_5 & 0x3f)) & 0x7fffffff) << 1,
                            0xffffffff82196582);
  *param_2 = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 5;
  }
  else {
    fn_82CAD2F8(uVar1,param_4,0,param_5);
    uVar2 = 0;
  }
  return uVar2;
}

