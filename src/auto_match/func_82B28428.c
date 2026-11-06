extern void fn_82B25248(void *a, void *b, void *c);
extern unsigned char fn_82B80F70(int slot, double *lo, double *hi);

typedef struct Dat_82B28428 {
  int kind;
  struct Dat_82B28428 *next;
} Dat_82B28428;

typedef struct Link_82B28428 {
  int pad0;
  int pad4;
  struct Link_82B28428 *next;
  int padc;
  void *target;
} Link_82B28428;

typedef struct Obj_82B28428 {
  int pad0;
  Link_82B28428 *links;
  int pad8;
  unsigned int bits;
  Dat_82B28428 *dat;
} Obj_82B28428;

static int notNull_82B28428(void *p) { if (p) return 1; return 0; }

static unsigned char setBits_82B28428(Obj_82B28428 *o, unsigned int m)
{
  if ((o->bits & m & 0xffff) == m) {
    return 0;
  }
  *(unsigned short *)((char *)o + 0xe) = (unsigned short)(o->bits | m);
  return 1;
}

void fn_82B28428(void *a, Obj_82B28428 *o, int slot, unsigned int mask, void *c)
{
  Dat_82B28428 *d;
  Link_82B28428 *l;
  double lo;
  double hi;
  double *arr;

  if (setBits_82B28428(o, mask << (slot * 4))) {
    d = o->dat;
    for (; d != 0; d = d->next) { if (d->kind == 1) break; } if (d != 0 && fn_82B80F70(slot, &lo, &hi) != 0) { arr = (double *)d; if (lo > arr[slot + 1]) arr[slot + 1] = lo; if (hi < arr[slot + 5]) arr[slot + 5] = hi; }
    for (l = o->links; notNull_82B28428(l); l = l->next) {
      if (l->target != 0) {
        fn_82B25248(a, l->target, c);
      }
    }
  }
}
