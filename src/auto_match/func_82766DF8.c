extern void fn_8267BE38(int h);
extern int fn_8267BED0(void *self, unsigned n, int *flags);

typedef struct Buf_82766DF8 {
  int handle;
  int used;
  unsigned cap;
} Buf_82766DF8;

void fn_82766DF8(Buf_82766DF8 *self, unsigned n, unsigned extra)
{
  unsigned total;
  int flags;
  int r;
  if (n > self->cap) {
    fn_8267BE38(self->handle);
    total = n + extra;
    self->cap = total;
    if (total != 0) {
      flags = 0x105;
      r = fn_8267BED0(self, total, &flags);
    } else {
      r = 0;
    }
    self->handle = r;
  }
  self->used = 0;
}
