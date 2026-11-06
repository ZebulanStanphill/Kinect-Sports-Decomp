extern int fn_82CFBE40(char *);
typedef struct { char *data; int len; } Str;
int fn_82D04570(Str *s, char *p)
{
  int n = fn_82CFBE40(p);
  int i;
  int off;
  if (n > s->len - 1) return 0;
  off = s->len - n - 1;
  i = 0;
  if (0 < n) {
    do {
      if (s->data[off + i] != p[i]) return 0;
      i++;
    } while (i < n);
  }
  return 1;
}
