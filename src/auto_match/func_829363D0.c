typedef struct { char pad[8]; unsigned short len; char pad2[6]; char data[0x200]; } Buf_829363D0;
extern int fn_82936358(Buf_829363D0 *);
static int nz(unsigned int n) { if (n != 0) return 1; return 0; }

void fn_829363D0(Buf_829363D0 *b, const char *s, unsigned int n)
{
  int r = 0;
  const char *p = s - 1;
  while (nz(n)) {
    p = p + 1;
    n = n - 1;
    if (*p == '\n') {
      r = fn_82936358(b);
    } else {
      b->data[b->len] = *p;
      b->len++;
      if (b->len >= 0x1ff)
        r = fn_82936358(b);
    }
    if (r < 0)
      break;
  }
}
