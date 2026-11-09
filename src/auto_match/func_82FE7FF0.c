extern unsigned int lbl_832642E4;
extern int fn_8300F1D0(void);
extern void fn_8300F208(unsigned int, void *, int);
struct Msg_82FE7FF0 { short unused; short kind; unsigned char a; short b; short c; int d; unsigned char e; char pad[31]; };
void fn_82FE7FF0(unsigned char a, int b, int c)
{
  struct Msg_82FE7FF0 m;
  m.kind = 0x1c;
  m.a = a;
  m.b = b;
  m.c = c;
  m.d = 0;
  m.e = 0;
  fn_8300F208(lbl_832642E4, &m, (unsigned short)fn_8300F1D0());
}
