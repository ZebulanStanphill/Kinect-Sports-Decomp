typedef struct { unsigned char pad[0xc]; unsigned char c; unsigned char b; unsigned char a; } R_82D699A8;
extern void fn_82DD77B0(void *, int, int);

char *fn_82D699A8(char *p, R_82D699A8 *r, int a, int b)
{
  fn_82DD77B0(&r->c, a, b);
  {
    unsigned x = r->a, y = r->b, z = r->c;
    unsigned n = (x * 4 + y + z + 2) * 2;
    p[2] = 0;
    return (char *)r + ((n + 0x1b) & ~0xfu);
  }
}
