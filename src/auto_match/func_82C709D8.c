extern int fn_82F64318();
extern int fn_82F691F0();
extern unsigned int lbl_82005770;
extern unsigned int lbl_82022E5C;
extern unsigned int lbl_8202303C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82C709D8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             unsigned __int64 param_8)

{
  float fVar1;
  int in_stack_00000054;
  int in_stack_0000005c;
  
  if ((((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0)))
       ) && ((param_7 != 0 && (((int)param_8 != 0 && (in_stack_00000054 != 0)))))) &&
     (in_stack_0000005c != 0)) {
    fVar1 = (float)param_1[0xd];
    if (fVar1 != lbl_8202303C) {
      if (lbl_8202303C <= fVar1) {
        param_1[0xd] = (int)(fVar1 - lbl_82022E5C);
      }
                    /* WARNING: Subroutine does not return */
      fn_82F64318((double)(float)param_1[0xd] * lbl_82005770);
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_8,0,(__int64)param_1[1] * (__int64)*param_1);
  }
  return 0xfffffffffffffffd;
}

