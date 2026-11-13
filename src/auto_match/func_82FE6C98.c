extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8300F158();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE6C98(double param_1,unsigned int param_2)

{
  unsigned short uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  float fStack_38;
  
  fStack_38 = (float)param_1;
  uStack_3e = 0xe;
  uStack_3c = param_2;
  uVar1 = fn_8300F158();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

