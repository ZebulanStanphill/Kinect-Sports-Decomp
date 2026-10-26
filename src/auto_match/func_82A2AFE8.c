extern int XMsgSystemProcessCall(int app, int msg, void *buf, int size);

void fn_82A2AFE8(unsigned int a, unsigned __int64 b)
{
  struct { unsigned int a; unsigned __int64 b; } m;
  m.a = a;
  m.b = b;
  XMsgSystemProcessCall(0xfe, 0x2c001, &m, 0x10);
}
