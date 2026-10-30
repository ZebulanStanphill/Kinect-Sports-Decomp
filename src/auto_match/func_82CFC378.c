typedef struct { char *buf; int len; } Str_82CFC378;

void fn_82CFC378(Str_82CFC378 *s)
{
  int i = 0;
  if (s->len - 1 <= 0) {
    return;
  }
  do {
    unsigned char u = s->buf[i];
    char c = u;
    char r;
    if (c >= 'a' && c <= 'z') {
      r = c - 0x20;
    } else {
      r = u;
    }
    s->buf[i] = r;
    i++;
  } while (i < s->len - 1);
}
