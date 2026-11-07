typedef struct Stream_82F70920 {
  char *ptr;
  int cnt;
  char *base;
  int flag;
} Stream_82F70920;

extern int fn_82F70748(int ch, Stream_82F70920 *f);

void fn_82F70920(char ch, Stream_82F70920 *f, int *count)
{
  int r;

  if ((f->flag & 0x40) && f->base == 0) {
    ++*count;
    return;
  }
  if (--f->cnt >= 0) {
    *f->ptr = ch;
    f->ptr++;
    r = (unsigned char)ch;
  } else {
    r = fn_82F70748(ch, f);
  }
  if (r == -1)
    *count = -1;
  else
    ++*count;
}
