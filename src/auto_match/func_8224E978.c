extern void fn_82230300(void *s, int a, int b);
extern unsigned char *fn_82236140(void *x);
extern void fn_8223E0E0(void *s, int n, unsigned char c);
void *fn_8224E978(void *s, void *x)
{
  unsigned char *b;
  unsigned int i;
  fn_82230300(s, 0, 0);
  b = fn_82236140(x);
  for (i = 0; i < 16; i++) {
    if (b[i] == 0) break;
    fn_8223E0E0(s, 1, b[i]);
  }
  return s;
}
