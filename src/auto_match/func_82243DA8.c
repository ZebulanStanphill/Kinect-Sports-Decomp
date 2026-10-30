extern void fn_822438B0(int, int, void *, int);
extern void fn_82243CC8(int, int, int);
extern int fn_823AA2A8(int);
extern int fn_82610EF0(int);

void fn_82243DA8(int a, char *b, int c, unsigned char flag)
{
  fn_82243CC8(a, flag != 0, 0);
  fn_822438B0(a, 1, b, 8);
  fn_822438B0(a, 2, b + 0x2c, 0x10);
  fn_822438B0(a, 3, b + 8, 0x24);
  fn_82243CC8(a, flag != 0 ? fn_823AA2A8(c) : 0, 4);
  fn_82243CC8(a, flag != 0 ? fn_82610EF0(c) : 0, 5);
}
