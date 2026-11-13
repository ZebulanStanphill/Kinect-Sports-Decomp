extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230110();
extern int fn_82526C70();
extern int fn_8258C000();
extern int fn_8258D810();
extern int fn_8258DDE0();
extern int fn_8266C738();
extern int fn_8266EC60();
extern int fn_82671AC8();
extern int fn_82673368();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_826737C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 extraout_f1;
  unsigned __int64 uVar5;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [128];
  
  lVar1 = fn_82F6A548();
  uVar5 = extraout_f1;
  fn_8266EC60();
  iVar4 = fn_8266C738();
  if (iVar4 != 0) {
    uVar2 = fn_82230110(auStack_a0,param_6);
    uVar3 = fn_8258C000();
    iVar4 = fn_8258DDE0(uVar3,uVar2);
    if (iVar4 == 0) {
      fn_82526C70(auStack_80,0x40,0xffffffff82002cf0,param_6,lVar1);
      fn_82230110(auStack_a0,auStack_80);
      fn_8258C000();
      fn_8258D810(uVar5,param_2,param_3,param_4);
      fn_82673368(lVar1 + 0x54,auStack_80);
    }
    else {
      fn_82671AC8(uVar5,param_2,param_3,param_4,lVar1,param_6);
    }
  }
  fn_82F6A594();
  return;
}

