extern unsigned int *auStack_230;
extern int fn_82CE0BF0();
extern int fn_82CE1EA8();
extern int fn_82CE1F30();
extern int fn_82CE2008();
extern unsigned int iStack_250;
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_244;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;
extern unsigned int uStack_30;


unsigned __int64
fn_82CE0C20(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  __int64 lVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  int iStack_250;
  unsigned int uStack_24c;
  unsigned int uStack_248;
  unsigned int uStack_244;
  unsigned char auStack_230 [512];
  unsigned int uStack_30;
  
  uStack_30 = 0;
  iStack_250 = 0;
  uStack_24c = 0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  lVar1 = fn_82CE1EA8(0x206,&uStack_248);
  if ((((-1 < lVar1) && (lVar1 = fn_82CE1F30(uStack_248,0,0,0,&uStack_24c,0,0), -1 < lVar1))
      && (lVar1 = XamAlloc(0,uStack_24c,&iStack_250), -1 < lVar1)) &&
     (lVar1 = fn_82CE2008(0x206,uStack_248,0,0,iStack_250,uStack_24c,0,0), -1 < lVar1)) {
    fn_82CE0BF0(auStack_230,&stack0x00000014);
    fn_82CE0BF0(auStack_230,&stack0x0000001c);
    fn_82CE0BF0(auStack_230,&stack0x00000024);
    fn_82CE0BF0(auStack_230,param_4);
    fn_82CE0BF0(auStack_230,param_5);
    lVar1 = XMsgInProcessCall(0xfc,0x58020,uStack_244,auStack_230);
    if (-1 < lVar1) {
      XamFree(iStack_250);
      return 0;
    }
  }
  if (iStack_250 != 0) {
    XamFree();
  }
  thunk_FUN_82a2b748(lVar1);
  return 0x65b;
}

