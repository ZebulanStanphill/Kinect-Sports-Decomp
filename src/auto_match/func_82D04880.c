typedef struct { char *data; int len; } Str_82D04880;

void fn_82D04880(Str_82D04880 *s)
{
  int i;
  for (i = 0; i < s->len - 1; i++) {
    char *p = s->data + i;
    int c = *p;
    if (c >= 'a' && c <= 'z') {
      c = c - 0x20;
    }
    *p = c;
  }
}
