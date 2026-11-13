extern int fn_82E92580();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_8215F708;


unsigned __int64
fn_82E92718(__int64 param_1,__int64 param_2,unsigned __int64 param_3,float *param_4,float *param_5)

{
  unsigned __int64 uVar1;
  double dVar2;
  
  dVar2 = (double)fn_82E92580(param_1,param_2 + 0x418,param_1 + 0x418,(param_3 & 0xffffffff) >> 2,
                                1);
  *param_4 = (float)dVar2;
  dVar2 = (double)fn_82E92580(param_1,param_2 + 0x18,param_1 + 0x18);
  *param_5 = (float)dVar2;
  if (((lbl_8215F708 < (double)*param_4) || (lbl_8215F708 < dVar2)) ||
     (((double)lbl_82002C28 < (double)*param_4 && ((double)lbl_82002C28 < dVar2)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

