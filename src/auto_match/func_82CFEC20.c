typedef struct Stream_82CFEC20 Stream_82CFEC20;
typedef struct {
  void *slot[4];
  int (*read)(Stream_82CFEC20 *, char *, int);
} VT_82CFEC20;
struct Stream_82CFEC20 { VT_82CFEC20 *vt; };

int fn_82CFEC20(Stream_82CFEC20 *self, int n)
{
  char buf[512];
  int rem = n;
  if (n != 0) {
    do {
      int chunk;
      int got;
      if (rem > 0x200) chunk = 0x200; else chunk = rem;
      got = self->vt->read(self, buf, chunk);
      if (got == 0) break;
      rem -= got;
    } while (rem != 0);
  }
  return n - rem;
}
