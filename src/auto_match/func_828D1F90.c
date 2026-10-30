extern int fn_828E9D90(void *);
extern int fn_828E9DA8(void *);
extern unsigned int fn_828E9FF8(void *, int);

void fn_828D1F90(void *r, unsigned char *out, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++) {
    unsigned int v;
    if (fn_828E9DA8(r) - fn_828E9D90(r) >= 1 && fn_828E9FF8(r, 1) != 0) {
      out[i] = 0;
    } else {
      v = fn_828E9DA8(r) - fn_828E9D90(r) >= 8 ? fn_828E9FF8(r, 8) : 0;
      out[i] = v;
    }
  }
}
