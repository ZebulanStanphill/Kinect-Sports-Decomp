extern int fn_82F691F0();


unsigned __int64 fn_82A6C5D8(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  if ((((param_1 != 0) && (param_2 != 0)) && ((int)param_5 != 0)) &&
     ((0 < param_3 && (param_3 <= param_4)))) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_5,0,((__int64)param_3 * (__int64)param_3 & 0x3fffffffU) << 2);
  }
  return 0xffffffff80070057;
}

