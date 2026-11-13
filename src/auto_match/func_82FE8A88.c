extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern int fn_82FE8948();
extern int fn_8300F0F8();
extern int fn_8300F208();
extern unsigned int iStack_4c;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_44;
extern unsigned int uStack_4e;


unsigned __int64 fn_82FE8A88(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  unsigned short uVar2;
  unsigned char auStack_50 [2];
  unsigned short uStack_4e;
  int iStack_4c;
  float fStack_48;
  unsigned int uStack_44;
  
  iStack_4c = fn_82FE8948();
  if (iStack_4c == 0) {
    uVar1 = 0xf;
  }
  else {
    fStack_48 = (float)param_1;
    uStack_4e = 2;
    uStack_44 = param_4;
    uVar2 = fn_8300F0F8();
    uVar1 = fn_8300F208(lbl_832642E4,auStack_50,uVar2);
  }
  return uVar1;
}

