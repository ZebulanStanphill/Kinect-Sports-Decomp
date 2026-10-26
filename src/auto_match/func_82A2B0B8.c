typedef struct { int a, b, c; } Triple;
extern int XMsgSystemProcessCall(int, int, void *, int);
void fn_82A2B0B8(int a, int b, int c)
{
  Triple t;
  t.a = a;
  t.b = b;
  t.c = c;
  XMsgSystemProcessCall(0xfe, 0x2c005, &t, 0xc);
}
