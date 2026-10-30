typedef struct Rd_826DF558 {
  char pad15[0x15];
  unsigned char f15;
  char pad16[0x15];
  int pos;
  int end;
  char pad34[8];
  int base;
} Rd_826DF558;
typedef struct Owner_826DF558 { char pad[0x28]; Rd_826DF558 inl; } Owner_826DF558;
extern void fn_826E7800(Rd_826DF558 *, int);

unsigned fn_826DF558(char *o)
{
  Rd_826DF558 *r;
  unsigned char *p;
  int v;
  
  r = *(Rd_826DF558 **)(o + 0x314);
  if (r == 0)
    r = (Rd_826DF558 *)(o + 0x28);
  r->f15 = 0;
  if (r->end - r->pos < 4)
    fn_826E7800(r, 4);
  p = (unsigned char *)(r->base + r->pos);
  v = p[3] << 8 | p[2];
  v = v << 8 | p[1];
  v = v << 8 | p[0];
  r->pos = r->pos + 4;
  return v;
}
