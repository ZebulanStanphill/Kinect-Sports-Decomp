extern unsigned fn_82A3CED8(int, int, int, int);
extern int fn_82A3CCB0(int, int);
extern void fn_82A3B5D8(int, int);
extern unsigned fn_82A3BF58(int);
extern void fn_82A3AAB8(int, int, int);
extern void fn_82A3B6A8(int);
extern void fn_82A3C188(int, int);
extern void fn_82A3BE88(int, int);
extern void fn_82A3C0B0(int, int, unsigned);
extern void fn_82A3B710(int);
extern void fn_82A3C650(int, int);

void fn_82A39BB0(int s, int a, int b)
{
  unsigned len = fn_82A3CED8(s, 0, 0, a);
  int mode = fn_82A3CCB0(s, b);
  unsigned cur;
  fn_82A3B5D8(s, 1);
  cur = fn_82A3BF58(s);
  if (cur >= len && *(unsigned *)(s + 0x980) >= *(unsigned *)(s + 0x97c))
    mode = 3;
  fn_82A3AAB8(s, 3, mode & 0xff);
  fn_82A3AAB8(s, 8, len >> 16 & 0xff);
  fn_82A3AAB8(s, 8, len >> 8 & 0xff);
  fn_82A3AAB8(s, 8, len & 0xff);
  if (mode == 1) {
    fn_82A3B6A8(s);
    fn_82A3C188(s, a);
    fn_82A3BE88(s, b);
  } else if (mode == 2) {
    fn_82A3B710(s);
    fn_82A3B6A8(s);
    fn_82A3C650(s, a);
    fn_82A3BE88(s, b);
  } else if (mode == 3) {
    fn_82A3BE88(s, b);
    fn_82A3C0B0(s, *(int *)(s + 0x980), len);
  }
  *(int *)(s + 0x980) = *(int *)(s + 0x980) + len;
}
