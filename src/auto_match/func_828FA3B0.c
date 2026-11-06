extern int tolower(int);

typedef struct { int pad0; char *end; } Buf_828FA3B0;

int fn_828FA3B0(Buf_828FA3B0 *buf, char *p, int *out)
{
  int kind;
  char *q;
  int c;
  q = p;
  kind = 5;
  if (p >= buf->end) {
    return 0;
  }
  c = tolower(*p);
  switch (c) {
  case 'f': kind = 7; q = p + 1; break;
  case 'h': kind = 6; q = p + 1; break;
  }
  if (out != 0) {
    *out = kind;
  }
  return q - p;
}
