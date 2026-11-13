extern unsigned int lbl_832642E4;
extern unsigned fn_8300F100(void);
extern void fn_8300F208(unsigned int, void *, unsigned short);
struct Msg_82FE6A90 { short unused; short kind; int x; unsigned int id; unsigned char y; unsigned char z; char pad[30]; };
void fn_82FE6A90(int a, unsigned int id, unsigned char b, unsigned char c)
{
  struct Msg_82FE6A90 m;
  m.kind = 3; m.x = a; m.id = id != 0x2ca33bdb ? id : 0; m.y = b; m.z = c;
  fn_8300F208(lbl_832642E4, &m, fn_8300F100());
}
