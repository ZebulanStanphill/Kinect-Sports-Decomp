extern int fn_826F0278();
extern unsigned char fn_826F06A8();
extern int fn_826F0768();
extern int fn_826F1018();
typedef struct { int a; unsigned char b; int c; } Args_826F19F8;
void fn_826F19F8(char *p)
{
  Args_826F19F8 args;
  unsigned char buf[48];
  unsigned short n;
  args.c = 0;
  args.b = 1;
  args.a = 0;
  fn_826F0278(buf, p, &args);
  if (fn_826F06A8(p) != 0) {
    fn_826F0768(p, buf, 0);
  }
  n = *(short *)(p + 6) - 1;
  *(short *)(p + 6) = n;
  if (n != 0) {
    fn_826F19F8(p);
  } else {
    fn_826F1018(p);
  }
}
