typedef struct { unsigned int pad : 29; unsigned int flag : 1; unsigned int rest : 2; } Flags;
typedef struct { char pad[0x4db4]; Flags f; } Dev;
typedef struct {
  Dev *dev;
  char pad[0x4c];
  char b[0xc8];
  char a[0x26d0 - 0x118];
} Elem;
typedef struct { int index; int pad[3]; Elem e[1]; } S;

extern void fn_82637238(void *a, unsigned int *v, void *b);

void fn_82635DB8(S *p, unsigned int b, unsigned int c, unsigned int d)
{
  Elem *e = &p->e[p->index];
  unsigned int v;
  if (!(unsigned char)e->dev->f.flag) {
    v = (((c & 0xf) << 1 | (b & 1)) << 8) | (d & 0xff);
    fn_82637238(e->a, &v, e->b);
  }
}
