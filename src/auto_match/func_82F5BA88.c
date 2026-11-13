extern int fn_8265CA60();
extern int fn_82F691F0();


void fn_82F5BA88(int *param_1,int param_2,int param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = ((__int64)param_2 * (__int64)param_3 & 0x7fffffffU) << 1;
  if (0x7fffffff < ((__int64)param_2 * (__int64)param_3 & 0xffffffffU)) {
    lVar1 = -1;
  }
  uVar2 = fn_8265CA60(lVar1);
  param_1[2] = (int)uVar2;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,((__int64)param_1[1] * (__int64)*param_1 & 0x7fffffffU) << 1);
}

