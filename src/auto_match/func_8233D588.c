extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB4C0();
extern unsigned int lbl_821AD588;


unsigned int *
fn_8233D588(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    fn_82230110(auStack_70,*param_4);
    fn_82230110(auStack_90,param_2);
    fn_822FB4C0(param_1 + 3,auStack_90,param_3,auStack_70,param_5,param_6,param_7);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_70,1,0);
  }
  return param_1;
}

