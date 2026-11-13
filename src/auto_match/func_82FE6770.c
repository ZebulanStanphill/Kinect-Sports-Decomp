extern unsigned int *auStack_40;
extern unsigned int fStack_38;
extern int fn_8300F1E8();
extern int fn_8300F208();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


unsigned __int64 fn_82FE6770(double param_1,unsigned int param_2)

{
  unsigned short uVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  float fStack_38;
  
  if (param_1 <= (double)lbl_821AAD20) {
    return 0x1f;
  }
  fStack_38 = (float)param_1;
  uStack_3e = 0x20;
  uStack_3c = param_2;
  uVar2 = fn_8300F1E8();
  uVar1 = fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return uVar1;
}

