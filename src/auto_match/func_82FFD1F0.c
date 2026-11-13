#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
extern int fn_82FFCF20();
extern int fn_8300EE60();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


unsigned __int64
fn_82FFD1F0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack00000020;
  unsigned int uStack00000028;
  unsigned int uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  fn_82FFCF20();
  uVar2 = 0xffffffffffffffff;
  uVar1 = 0;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
code_r0x82ffd254:
      uVar2 = _uStack00000030 & 0xffffffff;
code_r0x82ffd258:
      uVar1 = (unsigned __int64)uStack00000030;
      goto code_r0x82ffd278;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      if (uStack00000020 == 4) goto code_r0x82ffd278;
      if (uStack00000020 != 5) {
        if ((uStack00000020 != 6) && (uStack00000020 == 0)) goto code_r0x82ffd254;
        goto code_r0x82ffd258;
      }
    }
  }
  uVar1 = -(unsigned __int64)(uStack00000030 == 1) & _uStack00000030 & 0xffffffff;
code_r0x82ffd278:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar1,1,uVar2,uStack00000028);
  return 1;
}

