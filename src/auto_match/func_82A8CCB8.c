typedef struct Work_82A8CCB8 {
    int head[2];
    char a[0x34];
    char b[0x34];
} Work_82A8CCB8;

extern void *memset(void *dst, int c, unsigned int n);
extern unsigned char fn_82A8C8F0(int a, int b, Work_82A8CCB8 *s);
extern unsigned char fn_82A8C9E8(int a, int b, Work_82A8CCB8 *s, int c, int d, int e);

unsigned char fn_82A8CCB8(int a, int b, int c, int d, int e)
{
  Work_82A8CCB8 s;

  memset(s.a, 0, 0x34);
  memset(s.b, 0, 0x34);
  return fn_82A8C8F0(a, b, &s) && fn_82A8C9E8(a, b, &s, c, d, e);
}
