typedef unsigned char bool;
#define false 0
extern int fn_82AB15D0();
extern int fn_82AB6EC0();


bool fn_82B7E3A0(unsigned __int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = fn_82AB6EC0(param_1,0x31);
  iVar2 = fn_82AB6EC0(param_1,0x32);
  if ((uVar1 != 0x1f) && (uVar1 != 0x20)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dba10,0xffffffff820db938,0x180);
  }
  if ((iVar2 != 0) && (iVar2 != 0x40)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820db9b8,0xffffffff820db938,0x184);
  }
  if ((uVar1 < 0x1f) || (0x20 < uVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = iVar2 == 0x40;
  }
  return bVar3;
}

