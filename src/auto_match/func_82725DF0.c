typedef struct Rec_82725DF0 {
  unsigned int f0;
  unsigned int f4;
  unsigned int mask;
  int key;
} Rec_82725DF0;

typedef struct Tbl_82725DF0 {
  char pad[0xc];
  Rec_82725DF0 *recs;
  unsigned int count;
} Tbl_82725DF0;

extern Rec_82725DF0 *fn_82725D88(Tbl_82725DF0 *t, int a);

Rec_82725DF0 *fn_82725DF0(Tbl_82725DF0 *t, int a, unsigned char *bits, int key)
{
  Rec_82725DF0 *r = fn_82725D88(t, a);
  int i;
  while (1) {
    if (r == 0) {
      return 0;
    }
    if (r->key == key && (*bits & r->mask) == r->mask) {
      break;
    }
    i = r - t->recs;
    if (i + 1U >= t->count || t->recs[i + 1].f4 != r->f4) {
      r = 0;
    } else {
      r = &t->recs[i + 1];
    }
  }
  return r;
}
