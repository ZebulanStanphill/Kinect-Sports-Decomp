extern void *lbl_8329F084;
extern void fn_830C0798(void *a, char *b);
extern int fn_830B62A0(char *p, char *a, char *b);
extern int fn_830BA210(char *p, char *a, char *b);
extern int fn_830B90E8(char *p, char *a, char *b);
extern void fn_830B9008(char *p, char *a);
extern void fn_830B8F48(char *p, char *a);
extern void fn_82C76868(char *p, char *a, unsigned int x, unsigned int y, unsigned int z, int w, unsigned int v);
extern void fn_830C0AE0(char *p, unsigned char *buf);

#define U32(o) (*(unsigned int *)(p + (o)))
#define I32(o) (*(int *)(p + (o)))

int fn_830B9E98(char *p)
{
  int r;
  char *a;
  char *b;
  unsigned char buf[1536];

  fn_830C0798(lbl_8329F084, p + 0x57a0);
  b = p + 0x43f0;
  a = p + 0x3e70;
  r = fn_830B62A0(p, a, b);
  if (r != 0) return r;
  r = fn_830BA210(p, a, b);
  if (r != 0) return r;
  r = fn_830B90E8(p, a, b);
  if (r != 0) return r;
  if (I32(0xf6c) != 0) {
    if (I32(0x3cb0) == 7) {
      fn_830B9008(p, a);
    } else {
      fn_830B8F48(p, a);
    }
    fn_82C76868(p, a, U32(0xec0) + U32(0xdc), U32(0xec4) + U32(0xe0),
                U32(0xec8) + U32(0xe0), 0, *(unsigned short *)(p + 0x3ea4) >> 1);
  }
  fn_830C0AE0(p + 0x57a0, buf);
  I32(0x3d08) = 1;
  I32(0x3d0c) = 0;
  I32(0x3cf0) = 1;
  I32(0x1cc) = 1;
  return 0;
}
