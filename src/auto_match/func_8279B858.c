extern int fn_8267BE38(unsigned *);
extern int fn_8267C498(unsigned);
extern int fn_8267C4F0(unsigned);
extern int fn_826C6368(unsigned *);

typedef struct {
  int p0;
  unsigned *rc;
  char pad8[0x14];
  unsigned f1c;
  char pad20[0x2c];
  unsigned f4c;
  char pad50[0x1c];
  unsigned f6c;
} S_8279B858;

void fn_8279B858(S_8279B858 *s)
{
  unsigned *rc;
  unsigned n;

  if (s->f6c != 0) {
    fn_8267C4F0(s->f6c);
  }
  if (s->f4c != 0) {
    fn_8267C4F0(s->f4c);
  }
  if (s->f1c != 0) {
    fn_8267C498(s->f1c);
  }
  rc = s->rc;
  if (rc != 0) {
    n = *rc - 1;
    *rc = n;
    if (n == 0) {
      fn_826C6368(rc);
      fn_8267BE38(rc);
    }
  }
}
