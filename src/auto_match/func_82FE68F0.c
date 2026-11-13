extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82F68CC0();
extern int fn_8300F148();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_1f;
extern unsigned int uStack_20;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE68F0(unsigned int param_1,unsigned char param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  unsigned char auStack_38 [24];
  unsigned char uStack_20;
  unsigned char uStack_1f;
  
  uStack_3e = 0xc;
  uStack_3c = param_1;
  uStack_20 = param_2;
  if ((param_3 & 0xffffffff) == 0) {
    uStack_1f = 0;
  }
  else {
    uStack_1f = 1;
    fn_82F68CC0(auStack_38,param_3,0x18);
  }
  uVar1 = fn_8300F148();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

