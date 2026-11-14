typedef struct {
  unsigned int pad0 : 30;
  unsigned int f : 2;
} W;
typedef struct {
  unsigned int b0[2];
  W w;
  unsigned int b[3];
} Fetch;
typedef struct {
  char pad[0x18];
  unsigned __int64 dirty;
  char pad2[0x48c - 0x20];
  Fetch fetch[1];
} Dev;

void fn_82857F30(Dev *d, unsigned int i, int enable)
{
  W *w = &d->fetch[i].w;
  w->f = enable != 0;
  d->dirty |= 0x8000000000000000ULL >> (i + 32);
}
