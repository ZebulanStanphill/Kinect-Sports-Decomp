extern unsigned int fn_8225C590(void);
extern unsigned int fn_8225DA18(unsigned int, unsigned int);
extern unsigned int fn_823AB158(unsigned int);
extern unsigned int fn_823AB478(unsigned int);
extern unsigned char fn_828EA5F8(unsigned int);
extern unsigned char fn_828EA610(unsigned int);
extern int fn_828EB5F8(unsigned int, unsigned __int64 *);
extern int fn_82A1BFB0(unsigned int, unsigned __int64 *, int, int *, int);
extern int fn_82A44628(unsigned int);

unsigned char fn_8224DD90(unsigned int param_1, unsigned __int64 *param_2)
{
  unsigned char r;
  unsigned int i;
  unsigned int p;
  int k;
  int s;
  unsigned __int64 q;

  r = 0;
  i = 0;
  do {
    p = fn_8225DA18(fn_8225C590(), i);
    if (p != 0 && p != fn_823AB158(param_1) && p != *(unsigned int *)(param_1 + 0x864) &&
        fn_828EA5F8(p) != 0 && fn_828EA610(p) == 0 && *(unsigned char *)(p + 0xd8) == 0) {
      if (r == 0) {
        if (fn_828EB5F8(fn_823AB478(p), param_2) != 2) goto set;
        r = 0;
      } else {
set:
        r = 1;
      }
      k = fn_82A44628(p);
      if (r != 0 || k == 0) r = 1; else r = 0;
      q = *param_2;
      s = 0;
      fn_82A1BFB0(fn_823AB478(p), &q, 1, &s, 0);
      r = r != 0 || (k == 1 && s == 0);
    }
    i++;
  } while (i < 8);
  return r;
}
