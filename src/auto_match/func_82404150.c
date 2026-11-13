typedef struct { char b[32]; } Str_82404150;
extern void fn_82230110(Str_82404150 *, const char *);
extern void fn_82230300(Str_82404150 *, int, int);
extern void fn_822B1BE8(void *, void *, Str_82404150 *, int);
extern void fn_8236DA90(void);
extern void fn_82897DF8(void *, void *, Str_82404150 *);
extern int fn_828EA268(int);

void fn_82404150(char *self)
{
  struct { Str_82404150 s[5]; } L;
  char *a, *b, *c, *d;
  fn_8236DA90();
  fn_82230110(&L.s[1], "Boxing State Controller");
  fn_822B1BE8(self + 0xe4, self, &L.s[1], 8);
  fn_82230300(&L.s[1], 1, 0);
  fn_82230110(&L.s[3], "Last Round Ended");
  a = self + 0x274;
  *(int *)(a + 0xc) = 0;
  *(unsigned char *)(a + 0x58) = 0;
  *(int *)(a + 0x5c) = 0;
  *(int *)(a + 0x60) = 0xf;
  *(int *)(a + 0x64) = fn_828EA268(0xf);
  fn_82897DF8(a, self, &L.s[3]);
  fn_82230300(&L.s[3], 1, 0);
  fn_82230110(&L.s[0], "Red Player Wins");
  c = self + 0x2dc;
  *(unsigned char *)(c + 0xc) = 0;
  fn_82897DF8(c, self, &L.s[0]);
  fn_82230300(&L.s[0], 1, 0);
  fn_82230110(&L.s[2], "Judges Show Winner First");
  d = self + 0x334;
  *(unsigned char *)(d + 0xc) = 0;
  fn_82897DF8(d, self, &L.s[2]);
  fn_82230300(&L.s[2], 1, 0);
  fn_82230110(&L.s[4], "Last Round Ended ACK");
  b = self + 0x20c;
  *(int *)(b + 0xc) = 0;
  *(unsigned char *)(b + 0x58) = 0;
  *(int *)(b + 0x5c) = 0;
  *(int *)(b + 0x60) = 0xf;
  *(int *)(b + 0x64) = fn_828EA268(0xf);
  fn_82897DF8(b, self, &L.s[4]);
  fn_82230300(&L.s[4], 1, 0);
}
