extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_82779958();
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8201543C;


void fn_82779A38(unsigned __int64 param_1,int *param_2,int *param_3,int *param_4)

{
  float fVar1;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [10];
  
  fn_82779958(param_1,&fStack_30,&fStack_2c,afStack_28);
  fVar1 = lbl_82005CCC;
  fStack_2c = fStack_2c * lbl_82005CCC;
  *param_2 = (int)(fStack_30 * lbl_8201543C);
  *param_3 = (int)fStack_2c;
  *param_4 = (int)(afStack_28[0] * fVar1);
  return;
}

