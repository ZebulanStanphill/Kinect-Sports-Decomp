typedef struct Blk_8268EF48 {
  struct Blk_8268EF48 *next;
  struct Blk_8268EF48 *prev;
  int pad[6];
  unsigned int owner;
  unsigned int units;
} Blk_8268EF48;
typedef struct Arena_8268EF48 {
  unsigned int shift;
  int pad[2];
  char list[4];
  char tbl[4];
  int count;
} Arena_8268EF48;
typedef struct Owner_8268EF48 { char pad[0x14]; unsigned int used; } Owner_8268EF48;
extern void fn_8268E320(void *, Blk_8268EF48 *);
extern void fn_8268E408(void *, Blk_8268EF48 *);
extern void fn_8268E490(void *, Blk_8268EF48 *, Blk_8268EF48 *);
extern void fn_8268E570(void *, Blk_8268EF48 *);
extern void fn_8268E5C8(void *, Blk_8268EF48 *);
extern Blk_8268EF48 *fn_8268E6F0(void *, Blk_8268EF48 *);

int fn_8268EF48(Arena_8268EF48 *a, Owner_8268EF48 *owner, Blk_8268EF48 *p)
{
  Blk_8268EF48 *blk;
  Blk_8268EF48 *nx;
  Blk_8268EF48 *pv;
  unsigned int rest;
  int n;
  unsigned int sh;

  blk = fn_8268E6F0(a->tbl, p);
  if (blk == 0 || blk->owner != (unsigned int)owner || p < blk ||
      p >= (Blk_8268EF48 *)((char *)blk + (blk->units << a->shift))) {
    return 0;
  }
  a->count = a->count - blk->units;
  nx = blk->next;
  if (nx != blk) {
    pv = blk->prev;
    pv->next = nx;
    nx->prev = pv;
    fn_8268E408(a->list, blk);
  } else {
    fn_8268E490(a->list, blk, nx);
  }
  fn_8268E5C8(a->tbl, blk);
  sh = a->shift;
  rest = ((blk->units << sh) - (unsigned int)p) + (unsigned int)blk;
  if (blk < p) {
    blk->owner = (unsigned int)owner;
    n = ((int)p - (int)blk) >> sh;
    blk->units = n;
    fn_8268E570(a->list, blk);
    fn_8268E320(a->tbl, blk);
    a->count = a->count + n;
    p->owner = (unsigned int)owner;
    p->units = rest >> a->shift;
  }
  owner->used = owner->used - rest;
  return 1;
}
