extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82681B80();
extern int fn_82695FA0();
extern int fn_82696330();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_88;
extern unsigned int uStack_98;


__int64 fn_827418A8(__int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  char cVar1;
  unsigned char auStack_a0 [8];
  unsigned int uStack_98;
  unsigned char auStack_90 [8];
  unsigned int uStack_88;
  unsigned char auStack_80 [8];
  unsigned int uStack_78;
  unsigned char auStack_70 [8];
  unsigned int uStack_68;
  unsigned char auStack_60 [8];
  unsigned int uStack_58;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  
  param_1 = param_1 + 0x10;
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8200befc,param_3);
  if (cVar1 == '\0') {
    auStack_a0[0] = 4;
    uStack_98 = 1;
    fn_82695FA0(param_3,auStack_a0);
    fn_82696330(auStack_a0);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8200bef0,param_3 + 0x10);
  if (cVar1 == '\0') {
    auStack_90[0] = 4;
    uStack_88 = 0;
    fn_82695FA0(param_3 + 0x10,auStack_90);
    fn_82696330(auStack_90);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8201261c,param_3 + 0x20);
  if (cVar1 == '\0') {
    auStack_80[0] = 4;
    uStack_78 = 0;
    fn_82695FA0(param_3 + 0x20,auStack_80);
    fn_82696330(auStack_80);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff8200bef8,param_3 + 0x30);
  if (cVar1 == '\0') {
    auStack_70[0] = 4;
    uStack_68 = 1;
    fn_82695FA0(param_3 + 0x30,auStack_70);
    fn_82696330(auStack_70);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff82012618,param_3 + 0x40);
  if (cVar1 == '\0') {
    auStack_60[0] = 4;
    uStack_58 = 0;
    fn_82695FA0(param_3 + 0x40,auStack_60);
    fn_82696330(auStack_60);
  }
  cVar1 = fn_82681B80(param_1,param_2,0xffffffff82012614,param_3 + 0x50);
  if (cVar1 == '\0') {
    auStack_50[0] = 4;
    uStack_48 = 0;
    fn_82695FA0(param_3 + 0x50,auStack_50);
    fn_82696330(auStack_50);
  }
  return param_3;
}

