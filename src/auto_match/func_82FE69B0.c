extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8300F0F8();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE69B0(double param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned short uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  float fStack_38;
  unsigned int uStack_34;
  
  fStack_38 = (float)param_1;
  uStack_3e = 2;
  uStack_3c = param_2;
  uStack_34 = param_4;
  uVar1 = fn_8300F0F8();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

