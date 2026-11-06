extern unsigned int fn_82CFEAC8(unsigned int);

typedef struct { int a, b; unsigned int crc; } Crc_82CFEB80;

int fn_82CFEB80(Crc_82CFEB80 *s, unsigned char *p, int n)
{
  unsigned int c = s->crc;
  int i;
  for (i = 0; i < n; i++) {
    c = fn_82CFEAC8((p[i] ^ c) & 0xff) ^ (c >> 8);
  }
  s->crc = c;
  return n;
}
