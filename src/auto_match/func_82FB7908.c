typedef struct {
  int p0, p4, p8; short pc, pe; int p10;
} Src_82FB7908;
typedef struct {
  char pad[0x10]; int p10, p14; unsigned char p18; char pad2[0x11]; short p2a;
} Dst_82FB7908;

int fn_82FB7908(Dst_82FB7908 *d, Src_82FB7908 *s)
{
  if (s != 0) {
    int v = s->p10;
    d->p10 = v;
    d->p18 = v != 0;
    d->p14 = s->p8;
    d->p2a = s->pc;
    return 1;
  }
  return 2;
}
