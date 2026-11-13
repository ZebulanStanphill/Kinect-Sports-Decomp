extern unsigned int *auStack_40;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern int fn_8300F170();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE6D80(double param_1,double param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned short uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  float fStack_34;
  float fStack_30;
  
  fStack_30 = (float)param_2;
  fStack_34 = (float)param_1;
  uStack_3e = 0x11;
  uStack_3c = param_3;
  uStack_38 = param_4;
  uVar1 = fn_8300F170();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

