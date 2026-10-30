extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B9BC8;
extern void *fn_8265C9E0(unsigned int n);

typedef struct Val_82454C98 {
  void *vt;
  int a;
  int b;
  int c;
} Val_82454C98;

typedef struct Block_82454C98 {
  void *vt;
  int uses;
  int weaks;
  Val_82454C98 val;
} Block_82454C98;

typedef struct Ptr_82454C98 {
  Val_82454C98 *ptr;
  Block_82454C98 *block;
} Ptr_82454C98;

Ptr_82454C98 *fn_82454C98(Ptr_82454C98 *out, int unused, int value)
{
  Block_82454C98 *blk = (Block_82454C98 *)fn_8265C9E0(0x1c);
  if (blk != 0) {
    Val_82454C98 *v;
    blk->uses = 1;
    blk->vt = &lbl_821AD588;
    blk->weaks = 1;
    v = &blk->val;
    if (v != 0) {
      v->a = value;
      v->b = 4;
      v->vt = &lbl_821B9BC8;
      v->c = 0;
    }
  } else {
    blk = 0;
  }
  out->block = blk;
  out->ptr = &blk->val;
  return out;
}
