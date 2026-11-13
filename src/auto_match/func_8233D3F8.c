extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822FB670();
extern unsigned int lbl_821AD588;


unsigned int *
fn_8233D3F8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6)

{
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [96];
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    fn_82230110(auStack_60,param_5);
    fn_82230110(auStack_80,param_2);
    fn_822FB670(param_1 + 3,auStack_80,param_3,param_4,auStack_60,*param_6);
    fn_82230300(auStack_80,1,0);
    fn_82230300(auStack_60,1,0);
  }
  return param_1;
}

