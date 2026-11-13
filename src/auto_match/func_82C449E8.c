extern int fn_82A812C8();
extern int fn_82C2B580();
extern int memset();


unsigned __int64 fn_82C449E8(double param_1,float *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  float fVar3;
  
  fVar3 = (float)param_4;
  if (((int)fVar3 < 0) || (100000 < (int)fVar3)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    fn_82A812C8();
    *param_2 = (float)param_1;
    param_2[1] = fVar3;
    uVar1 = fn_82C2B580((param_4 & 0x3fffffff) << 2);
    param_2[2] = (float)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      memset(uVar1,0,(int)param_2[1] << 2);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

