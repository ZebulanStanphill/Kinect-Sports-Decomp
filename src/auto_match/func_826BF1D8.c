extern int fn_826BE388(unsigned *, int *, unsigned);



typedef struct { unsigned *p; int h; } R;
R * fn_826BF1D8(R *r,unsigned int *a,int *b)
{
  int h = 0;
  if (*a != 0) {
    unsigned m = *(unsigned*)(*a + 4); unsigned n = *(unsigned*)(*b + 0xc); h = fn_826BE388(a, b, n & m);
    if (h >= 0) { r->p = a; r->h = h; return r; }
  }
  r->p = 0; r->h = 0;
  return r;
}
