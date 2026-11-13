extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB850();
extern unsigned int lbl_821A8D8C;


unsigned int *
fn_8233D330(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6,unsigned __int64 param_7)

{
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (unsigned int *)0x0) {
    fn_82230110(auStack_70,param_5);
    fn_82230110(auStack_90,param_2);
    fn_822FB850(param_1 + 4,auStack_90,param_3,param_4,auStack_70,*param_6,param_7);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_70,1,0);
  }
  return param_1;
}

