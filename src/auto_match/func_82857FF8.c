typedef struct {
  unsigned int f : 5;
  unsigned int pad1 : 27;
} W;
typedef struct {
  unsigned int a[1];
  W w;
  unsigned int b[4];
} Fetch;
typedef struct {
  char pad[0x18];
  unsigned __int64 dirty;
  char pad2[0x48c - 0x20];
  Fetch fetch[1];
} Dev;

void fn_82857FF8(Dev *d, unsigned int i, unsigned int v)
{
  W *w = &d->fetch[i].w;
  w->f = v;
  d->dirty |= 0x8000000000000000ULL >> (i + 32);
}
