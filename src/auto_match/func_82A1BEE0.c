extern unsigned fn_82A2B798();
extern unsigned XexCheckExecutablePrivilege(int);
extern int XMsgStartIORequest(int, int, unsigned, void *, int);

typedef struct Req_82A1BEE0 { int a; int pad; unsigned __int64 z; unsigned b; int c; int d; int pad2; } Req_82A1BEE0;

unsigned fn_82A1BEE0(int param_1, unsigned param_2, int param_3, int param_4, unsigned param_5)
{
  unsigned iVar3;
  unsigned uVar1;
  unsigned lVar2;
  Req_82A1BEE0 r;

  r.z = 0;
  r.a = param_1;
  r.b = param_2;
  r.c = param_3;
  r.d = param_4;
  if (((param_2 & 0xf0000000) == 0x40000000) &&
     (iVar3 = XexCheckExecutablePrivilege(0x24), iVar3 == 0)) {
    uVar1 = 5;
  }
  else {
    if (XMsgStartIORequest(0xfb, 0xb0007, param_5, &r, 0x20) < 0) {
      uVar1 = 0x65b;
    }
    else if (param_5 == 0) {
      lVar2 = fn_82A2B798();
      uVar1 = (lVar2 != 0) ? 0x65b : 0;
    }
    else {
      uVar1 = 0x3e5;
    }
  }
  return uVar1;
}
