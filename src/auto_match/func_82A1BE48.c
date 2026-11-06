extern int XMsgStartIORequest(int, int, unsigned int, void *, int);
extern int fn_82A2B798();

typedef struct { int a; int pad4; __int64 q; int c; int d; } Req_82A1BE48;

int fn_82A1BE48(int a, int c, int d, unsigned int overlapped)
{
  Req_82A1BE48 req;
  int hr;

  req.q = 0;
  req.a = a;
  req.c = c;
  req.d = d;
  hr = XMsgStartIORequest(0xfb, 0xb0006, overlapped, &req, 0x18);
  if (hr < 0) {
    return 0x65b;
  }
  if (overlapped == 0) {
    return fn_82A2B798() != 0 ? 0x65b : 0;
  }
  return 0x3e5;
}
