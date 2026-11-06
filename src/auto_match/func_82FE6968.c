extern unsigned int lbl_832642E4;
extern int fn_8300F1B8(void);
extern void fn_8300F208(unsigned int, void *, int);
struct Msg_82FE6968 { short unused; short kind; int x; unsigned char y; unsigned char z; char pad[32]; };
void fn_82FE6968(int a, unsigned char b, unsigned char c)
{
  struct Msg_82FE6968 m;
  unsigned short v;
  m.kind = 0x1a;
  m.x = a;
  m.y = b;
  m.z = c;
  v = fn_8300F1B8();
  fn_8300F208(lbl_832642E4, &m, v);
}
