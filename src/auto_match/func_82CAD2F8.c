extern int fn_82F691F0();


void fn_82CAD2F8(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,0,
               ((unsigned __int64)(*param_2 >> 6) * 2 + (unsigned __int64)(unsigned int)(1 << (param_4 & 0x3f)) &
               0x7fffffff) << 1);
}

