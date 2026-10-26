extern unsigned char *fn_82CE4EC0(unsigned char *out, char *p);
extern unsigned char *fn_82CE5FE0(unsigned char *out, char *p);

unsigned char *fn_82CE65C8(unsigned char *out, char *p)
{
  unsigned char a, b;
  unsigned char r;
  if (*fn_82CE4EC0(&a, p + 0x30) && *fn_82CE5FE0(&b, p))
    r = 1;
  else
    r = 0;
  *out = r;
  return out;
}
