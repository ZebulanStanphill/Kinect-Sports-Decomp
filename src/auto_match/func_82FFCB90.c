#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
extern int fn_82FFBD98();
extern int fn_8300EE60();
extern int fn_8302B618();
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;


unsigned __int64
fn_82FFCB90(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack00000020;
  unsigned int uStack00000028;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  
  uStack00000030 = (unsigned int)(param_4 >> 0x20);
  uVar1 = uStack00000030;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  iVar2 = fn_8302B618(param_1 + 0x39c,uVar1);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0x4c) != 0) {
      *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + -1;
    }
    fn_82FFBD98(iVar2,0);
  }
  uVar4 = 0xffffffffffffffff;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
code_r0x82ffcc28:
      uVar4 = _uStack00000030 & 0xffffffff;
      uVar3 = uVar1;
      goto code_r0x82ffcc48;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      uVar3 = 0;
      if (uStack00000020 == 4) goto code_r0x82ffcc48;
      if (uStack00000020 != 5) {
        uVar3 = uVar1;
        if ((uStack00000020 == 6) || (uStack00000020 != 0)) goto code_r0x82ffcc48;
        goto code_r0x82ffcc28;
      }
    }
  }
  uVar3 = -(unsigned int)(uVar1 == 1) & uStack00000034;
code_r0x82ffcc48:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar3,1,uVar4,uStack00000028);
  return 1;
}

