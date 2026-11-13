extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82526C70();
extern int fn_8258C000();
extern int fn_8258D950();
extern int fn_8258D9E0();
extern int fn_8266C738();
extern int fn_8266EC60();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_82671AC8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 extraout_f1;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [104];
  
  uVar1 = fn_82F6A548();
  uVar3 = extraout_f1;
  fn_8266EC60();
  iVar4 = fn_8266C738();
  if (iVar4 != 0) {
    fn_82526C70(auStack_80,0x40,0xffffffff82002cf0,param_6,uVar1);
    uVar1 = fn_82230110(auStack_a0,auStack_80);
    uVar2 = fn_8258C000();
    fn_8258D950(uVar3,param_2,uVar2,uVar1);
    uVar3 = fn_82230110(auStack_a0,auStack_80);
    uVar1 = fn_8258C000();
    fn_8258D9E0(param_3,param_4,uVar1,uVar3);
  }
  fn_82F6A594();
  return;
}

