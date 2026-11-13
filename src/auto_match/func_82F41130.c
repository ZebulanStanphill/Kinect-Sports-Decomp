//BODY
extern int fn_82F41C68(void *, int, int, void *);
extern char lbl_820E975C[];

int fn_82F41130(int unused, unsigned int a, int *b, unsigned int c, unsigned int d, int e, void *f, int *g)
{
  int hr = 0;
  if (a == 0 || b == 0 || c == 0 || f == 0 || g == 0) {
    hr = 0x8000ffff;
  } else if (*b == 1 && d == 0) {
    hr = fn_82F41C68(lbl_820E975C, 2, e, f);
    if (hr >= 0) {
      *g = 1;
    }
  }
  return hr;
}
