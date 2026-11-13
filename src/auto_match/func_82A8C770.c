extern float lbl_8315FABC[];
extern int fn_82A8C620();
extern unsigned int lbl_8315FAC0;
extern unsigned int lbl_8315FAC4;

void fn_82A8C770(int param_1,float *param_2,int param_3,int param_4)
{
  fn_82A8C620(param_3,param_4,0x20,param_2);
  fn_82A8C620(param_3,param_4 + 0x20,0x20,param_2 + 4);
  fn_82A8C620(param_3,param_4 + 0x40,0x20,param_2 + 5);
  fn_82A8C620(param_3,param_4 + 0x60,0x20,param_2 + 6);
  fn_82A8C620(param_3,param_4 + 0x80,6,param_2 + 10);
  fn_82A8C620(param_3,param_4 + 0x86,6,param_2 + 0xb);
  fn_82A8C620(param_3,param_4 + 0x8c,6,param_2 + 0xc);
  param_2[1] = param_2[0] * lbl_8315FABC[0]; param_2[2] = param_2[0] * lbl_8315FABC[1]; param_2[3] = param_2[0] * lbl_8315FABC[2]; }
