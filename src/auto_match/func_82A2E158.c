typedef struct { unsigned char b[8]; } Ent;
extern unsigned int fn_82A2BAF0(int a, int b, int c, int d, Ent **out);
extern int fn_82A2D960(int a, int b, int c, int d, int e, Ent **out);

int fn_82A2E158(int a, int b, int c, int d)
{
  Ent *e;
  int hr = 0;

  if (fn_82A2BAF0(a, b, 0, d, &e) != 0 || (hr = fn_82A2D960(a, b, 0, c, d, &e)) >= 0) {
    e->b[7] |= 0x40;
  }
  return hr;
}
