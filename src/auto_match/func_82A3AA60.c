typedef unsigned int uint;
extern int fn_82A3A050(uint *p, int n);
extern int fn_82A3AC90(uint *p, uint a, int n);

void fn_82A3AA60(uint *p)
{
  int n = fn_82A3AC90(p, (p[0x114] - p[0x10c8]) + *p, 0x8000);
  if (n > 0) {
    fn_82A3A050(p, n);
  }
}
