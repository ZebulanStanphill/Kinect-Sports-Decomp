extern unsigned int *auStack_40;
extern int fn_8300F200();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int lbl_83264348;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


unsigned int fn_82FE6DE8(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned short uVar2;
  __int64 lVar1;
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
  uStack_1c = 0;
  lbl_83264348 = lbl_83264348 + 1;
  uStack_34 = 0;
  uStack_3c = param_3;
  uStack_38 = lbl_83264348;
  uStack_24 = param_1;
  uStack_20 = param_2;
  uVar2 = fn_8300F200();
  lVar1 = fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return -(unsigned int)(lVar1 == 1) & uStack_38;
}

