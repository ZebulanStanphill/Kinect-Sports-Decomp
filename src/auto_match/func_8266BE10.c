typedef unsigned char bool;
#define false 0
extern int fn_8266BF60();
extern int fn_8266C340();
extern int fn_82F65AC0();
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


bool fn_8266BE10(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  bool bVar2;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  if (param_2 == 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x1a6,0xffffffff8200296c);
  }
  iVar1 = fn_8266BF60(uStack0000001c);
  if (iVar1 != 0) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x1a7,0xffffffff82002930);
  }
  if (uStack0000001c == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = fn_8266BF60(uStack0000001c);
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      iVar1 = fn_82F65AC0((unsigned __int64)uStack00000014 + 0xc,(unsigned __int64)uStack0000001c + 0xc);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}

