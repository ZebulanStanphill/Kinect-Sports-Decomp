#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
extern int fn_82FFCDE0();
extern int fn_8300EE60();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000040;


unsigned __int64
fn_82FFD318(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack00000020;
  unsigned int uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000040;
  
  uVar1 = param_4 >> 0x20;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000040 = param_6;
  uVar2 = fn_82FFCDE0(param_1);
  uVar4 = 0xffffffffffffffff;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
LAB_82ffd3ac:
      uVar3 = uVar1;
      uVar4 = param_4 & 0xffffffff;
      goto LAB_82ffd3c8;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      uVar3 = 0;
      if (uStack00000020 == 4) goto LAB_82ffd3c8;
      if (uStack00000020 != 5) {
        uVar3 = uVar1;
        if ((uStack00000020 == 6) || (uStack00000020 != 0)) goto LAB_82ffd3c8;
        goto LAB_82ffd3ac;
      }
    }
  }
  uVar3 = -(unsigned __int64)(uVar1 == 1) & param_4 & 0xffffffff;
LAB_82ffd3c8:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar3,uVar2,uVar4,uStack00000028);
  return uVar2;
}

