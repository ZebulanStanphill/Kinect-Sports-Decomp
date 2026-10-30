typedef struct { char pad[8]; unsigned short len; char pad2[6]; char data[0x200]; } Buf_82AA1C18;
extern int fn_82AA1BA8(Buf_82AA1C18 *);
static int nz(unsigned int n) { if (n != 0) return 1; return 0; }

void fn_82AA1C18(Buf_82AA1C18 *b, const char *s, unsigned int n)
{
  int r = 0;
  const char *p = s - 1;
  while (nz(n)) {
    p = p + 1;
    n = n - 1;
    if (*p == '\n') {
      r = fn_82AA1BA8(b);
    } else {
      b->data[b->len] = *p;
      b->len++;
      if (b->len >= 0x1ff)
        r = fn_82AA1BA8(b);
    }
    if (r < 0)
      break;
  }
}
