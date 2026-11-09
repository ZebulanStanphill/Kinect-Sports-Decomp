typedef struct Src_82A8F868 {
  char pad0[0x28];
  int f28;
  int f2c;
  int f30;
  char pad34[0x24];
  int f58;
  int f5c;
  int f60;
  int f64;
} Src_82A8F868;
typedef struct Dst_82A8F868 {
  char pad0[0x2c];
  float f2c;
} Dst_82A8F868;

extern void fn_82A8DC48(void *, void *, int, int, void *);
extern void fn_82A8FDF8(void *, Src_82A8F868 *, int, int, Dst_82A8F868 *);

void fn_82A8F868(char *a, Src_82A8F868 *s, int c, int d, Dst_82A8F868 *dst)
{
  int t1 = s->f30 + s->f2c + s->f28;
  int t2 = s->f64 + s->f60 + s->f5c;
  fn_82A8FDF8(a, s, c, d, dst);
  fn_82A8DC48(a + 8, (char *)s + 0x68, c, t2 + t1 + d, (char *)dst + 0x20);
  dst->f2c = 1.0f;
}
