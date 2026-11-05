typedef struct {
  unsigned a, b, c;
} Msg_func_82CE0340;

extern int XMsgInProcessCall(unsigned, unsigned, void *, unsigned);

unsigned fn_82CE0340(unsigned a, unsigned b, unsigned c)
{
  Msg_func_82CE0340 m;
  int hr;
  unsigned r;
  m.a = a;
  m.b = b;
  m.c = c;
  hr = XMsgInProcessCall(0xfa, 0x7001b, &m, 0);
  if (hr >= 0) {
    r = 0;
  } else {
    r = hr & 0xffff;
    if ((hr & 0x1fff0000) != 0x70000)
      r = 0x65b;
  }
  return r;
}
