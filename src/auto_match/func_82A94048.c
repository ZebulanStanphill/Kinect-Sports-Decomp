extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_64;
extern int fn_8263B958();
extern int memcpy();
extern unsigned int uStack_20;
extern unsigned int uStack_30;
extern unsigned int uStack_70;


unsigned int fn_82A94048(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uStack_70;
  unsigned char auStack_64 [4];
  unsigned char auStack_60 [4];
  unsigned char auStack_5c [4];
  unsigned char auStack_58 [4];
  unsigned char auStack_54 [4];
  unsigned char auStack_50 [32];
  unsigned int uStack_30;
  unsigned int uStack_20;
  
  memcpy(auStack_50,param_1,0x34);
  uStack_30 = uStack_30 & 0xfff;
  uStack_20 = uStack_20 & 0xfff;
  fn_8263B958(auStack_50,param_2,param_3,auStack_54,auStack_58,auStack_5c,auStack_60,
                    auStack_64);
  return uStack_70;
}

