typedef struct { int a; unsigned key; unsigned val; } Ent_823D29A8;
extern Ent_823D29A8 lbl_831D47C0[];
extern unsigned fn_8265BF48(int, int);

unsigned fn_823D29A8(int p)
{
  unsigned k = fn_8265BF48(p, 0);
  unsigned i;
  for (i = 0; i < 40; i++) {
    if (k == lbl_831D47C0[i].key) {
      return lbl_831D47C0[i].val;
    }
  }
  return 0;
}
