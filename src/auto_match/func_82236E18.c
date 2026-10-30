extern unsigned int lbl_82196C88;
extern unsigned int lbl_821AD588;
extern void *fn_8265C9E0(unsigned int n);

typedef struct Val_82236E18 {
  void *vt;
  int pad4;
  int x;
  int y;
  int x2;
  int y2;
  int x3;
  int y3;
} Val_82236E18;

typedef struct Block_82236E18 {
  void *vt;
  int uses;
  int weaks;
  Val_82236E18 val;
} Block_82236E18;

typedef struct Ptr_82236E18 {
  Val_82236E18 *ptr;
  Block_82236E18 *block;
} Ptr_82236E18;

Ptr_82236E18 *fn_82236E18(Ptr_82236E18 *out, int *px, int *py)
{
  Block_82236E18 *blk = (Block_82236E18 *)fn_8265C9E0(0x2c);
  if (blk != 0) {
    Val_82236E18 *v;
    blk->uses = 1;
    blk->vt = &lbl_821AD588;
    blk->weaks = 1;
    v = &blk->val;
    if (v != 0) {
      int y = *py;
      int x = *px;
      v->pad4 = 0;
      v->vt = &lbl_82196C88;
      v->y = y;
      v->x = x;
      v->x2 = x;
      v->y2 = y;
      v->x3 = x;
      v->y3 = y;
    }
  } else {
    blk = 0;
  }
  out->block = blk;
  out->ptr = &blk->val;
  return out;
}
