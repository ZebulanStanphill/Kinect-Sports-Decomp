typedef struct WStr_82773A88 { unsigned short *data; int len; } WStr_82773A88;

void fn_82773A88(WStr_82773A88 *s)
{
  int n;
  int i;
  unsigned short c;

  n = s->len;
  if (n > 0 && s->data[n - 1] == 0) {
    n--;
  }
  for (i = n - 1; i >= 0; i--) {
    c = s->data[i];
    if (c != 10 && c != 13) {
      break;
    }
    s->len--;
    s->data[i] = 0;
  }
}
