extern int fn_82FA5190();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_830245A0();
extern unsigned int lbl_831BC770;


void fn_83036788(unsigned int *param_1)

{
  if (param_1[1] != 0) {
    fn_830245A0(param_1[1]);
    fn_83024470(param_1[1]);
    fn_830224E8((unsigned __int64)param_1[1] + 0x80);
    fn_82FA5190(lbl_831BC770,param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    fn_830245A0(*param_1);
    fn_83024470(*param_1);
    fn_830224E8((unsigned __int64)*param_1 + 0x80);
    fn_82FA5190(lbl_831BC770,*param_1);
    *param_1 = 0;
  }
  return;
}

