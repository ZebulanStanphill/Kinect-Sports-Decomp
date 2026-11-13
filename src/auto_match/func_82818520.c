//BODY
extern int tolower(int);

unsigned int fn_82818520(unsigned char *p)
{
  unsigned int h = 0;
  unsigned int g;
  for (;;) {
    unsigned int c = *p;
    if (*p < 0x80) {
      c = tolower((char)*p);
    } else c = (char)*p;
    p++;
    if (c == 0) break;
    h = (h << 4) + c;
    g = h & 0xf0000000;
    if (g != 0) {
      h = (g >> 24 | g) ^ h;
    }
  }
  return h;
}
