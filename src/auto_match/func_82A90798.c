typedef struct Work_82A90798 {
    int head;
    char a[0x34];
    char b[0x34];
} Work_82A90798;

extern void *memset(void *dst, int c, unsigned int n);
extern unsigned char fn_82A8EBF8(int a, int b, Work_82A90798 *s);
extern unsigned char fn_82A8F5B0(int a, int b, Work_82A90798 *s, int c, int d, int e);

unsigned char fn_82A90798(int a, int b, int c, int d, int e)
{
  Work_82A90798 s;

  memset(s.a, 0, 0x34);
  memset(s.b, 0, 0x34);
  return fn_82A8EBF8(a, b, &s) && fn_82A8F5B0(a, b, &s, c, d, e);
}
