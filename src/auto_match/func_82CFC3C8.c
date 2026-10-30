typedef struct { char *buf; int len; } Str_82CFC3C8;

void fn_82CFC3C8(Str_82CFC3C8 *s)
{
  int i = 0;
  if (s->len - 1 <= 0) {
    return;
  }
  do {
    unsigned char u = s->buf[i];
    char c = u;
    char r;
    if (c >= 'A' && c <= 'Z') {
      r = c + 0x20;
    } else {
      r = u;
    }
    s->buf[i] = r;
    i++;
  } while (i < s->len - 1);
}
