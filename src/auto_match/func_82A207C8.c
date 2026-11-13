extern int fn_82F691F0();


unsigned short * fn_82A207C8(unsigned short *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  if (0x4f < (param_2 & 0xffffffff)) {
    if (param_4 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1,0,param_2);
    }
    if ((((*param_1 <= param_1[1]) && ((unsigned __int64)param_1[2] == (param_2 & 0xffffffff))) &&
        ((unsigned __int64)((__int64)(int)(unsigned int)param_1[3] * (__int64)(int)(unsigned int)param_1[4]) <=
         (param_2 & 0xffffffff))) &&
       (((unsigned __int64)param_1[7] < (param_2 & 0xffffffff) && (0xf < (unsigned __int64)param_1[7])))) {
      return param_1;
    }
  }
  return (unsigned short *)0x0;
}

