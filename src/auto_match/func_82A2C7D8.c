typedef struct { unsigned short len; unsigned short pad; const unsigned char *s; } Str;
extern unsigned lbl_82089384[];

int fn_82A2C7D8(Str *str)
{
  unsigned short len = str->len;
  const unsigned char *p;
  const unsigned char *end;
  unsigned c;
  if (len != 0 && len <= 0x28) {
    p = str->s;
    end = len + p;
    if (*p == 0x2e && (len == 1 || (len == 2 && p[1] == 0x2e))) {
      return 0;
    }
    if (p < end) {
      do {
        c = *p++;
        if ((1 << (c & 0x1f)) & lbl_82089384[c >> 5]) {
          return 0;
        }
      } while (p < end);
    }
    return 1;
  }
  return 0;
}
