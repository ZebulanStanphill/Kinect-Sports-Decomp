extern unsigned int *auStack_40;
extern int fn_8300F200();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


void fn_82FE6E68(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned short uVar1;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned __int64 uStack_34;
  unsigned int uStack_2c;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uStack_2c = 0;
  uStack_3e = 0x24;
  uStack_1c = 1;
  uStack_3c = 0xffffffff;
  uStack_34 = 0;
  uStack_38 = param_3;
  uStack_24 = param_1;
  uStack_20 = param_2;
  uVar1 = fn_8300F200();
  fn_8300F208(lbl_832642E4,auStack_40,uVar1);
  return;
}

