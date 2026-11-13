extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FBAD8();
extern unsigned int lbl_821AD588;


unsigned int *
fn_822FF3A8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,float *param_7,float *param_8)

{
  float *in_stack_00000054;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    fn_82230110(auStack_70,param_6);
    fn_82230110(auStack_90,param_2);
    fn_822FBAD8((double)*param_7,(double)*param_8,(double)*in_stack_00000054,param_1 + 3,
                  auStack_90,param_3,param_4,param_5,auStack_70);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_70,1,0);
  }
  return param_1;
}

