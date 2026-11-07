void *memset(void *, int, unsigned int);
typedef struct { unsigned int flags; unsigned int value; } Ex_82CE0298;
typedef struct { int a; int b; int c; } Req_82CE0298;

extern int XMsgStartIORequestEx(int, int, void *, void *, int, Ex_82CE0298 *);
extern int fn_82A1C098(int);

unsigned int fn_82CE0298(int a, int b, int c)
{
  Ex_82CE0298 ex;
  Ex_82CE0298 *pex;
  Req_82CE0298 req;
  int hr;

  req.a = a;
  req.b = b;
  req.c = c;
  if (a == 0) {
    memset(&ex, 0, sizeof(ex));
    ex.flags = 0x80002;
    pex = &ex;
  } else {
    pex = 0;
  }
  hr = XMsgStartIORequestEx(0xfa, 0x7001a, 0, &req, sizeof(req), pex);
  if (hr >= 0) {
    hr = fn_82A1C098(0);
    if (hr >= 0)
      return 0;
  }
  if ((hr & 0x1fff0000) == 0x70000)
    return hr & 0xffff;
  return 0x65b;
}
