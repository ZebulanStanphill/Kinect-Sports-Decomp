extern int fn_827563E0(int, char *, unsigned, unsigned);
extern unsigned fn_827A84D0(void *);

typedef struct S_82756F70 {
  unsigned f : 1;
  unsigned pad : 31;
  unsigned len;
} S_82756F70;

int fn_82756F70(int param_1, S_82756F70 *param_2)
{
  unsigned n;
  char *s;
  unsigned f = param_2->f;
  unsigned r;
  if (f) {
    n = *((unsigned char *)param_2 + 0x1c);
  } else {
    n = param_2->len;
  }
  if (f != 0) s = (char *)param_2 + 0x1e; else s = (char *)param_2 + 0x2a;
  r = fn_827A84D0(param_2);
  fn_827563E0(param_1, s, n, r);
  return param_1;
}
