typedef struct {
  unsigned int pad0 : 7;
  unsigned int f : 2;
  unsigned int pad1 : 23;
} W;
typedef struct {
  W w;
  unsigned int b[5];
} Fetch;
typedef struct {
  char pad[0x18];
  unsigned __int64 dirty;
  char pad2[0x48c - 0x20];
  Fetch fetch[1];
} Dev;

void fn_82857EF0(Dev *d, unsigned int i, unsigned int v)
{
  W *w = &d->fetch[i].w;
  w->f = v;
  d->dirty |= 0x8000000000000000ULL >> (i + 32);
}
