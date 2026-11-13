typedef struct Obj_82376A28 {
  void *vt;
  int f4;
  int f8;
  float fc;
  float f10;
  int f14, f18, f1c, f20, f24, f28, f2c, f30, f34, f38, f3c, f40, f44;
  int f48;
  int f4c;
} Obj_82376A28;
typedef struct Block_82376A28 {
  void *vt;
  int uses;
  int weaks;
  Obj_82376A28 obj;
} Block_82376A28;
typedef struct Ptr_82376A28 {
  Obj_82376A28 *p;
  Block_82376A28 *blk;
} Ptr_82376A28;
extern void *fn_8265C9E0(unsigned int);
extern char lbl_821AD588[];
extern char lbl_821B445C[];
/* The game code's 0.0f (its link-time code generation pool copy), read by name: written as the
   literal 0.0f, its load is scheduled differently and the unit reaches 97.6%. */
extern float ltcg_pool_0_0f;

Ptr_82376A28 *fn_82376A28(Ptr_82376A28 *out, int a)
{
  Block_82376A28 *blk;
  Obj_82376A28 *b;
  float g;

  blk = (Block_82376A28 *)fn_8265C9E0(0x5c);
  if (blk != 0) {
    blk->uses = 1;
    blk->vt = lbl_821AD588;
    blk->weaks = 1;
    b = &blk->obj;
    if (b != 0) {
      b->f8 = a;
      b->f14 = 0;
      g = ltcg_pool_0_0f;
      b->f4 = 0xf;
      b->fc = g;
      b->vt = lbl_821B445C;
      b->f10 = g;
      b->f18 = 0;
      b->f1c = 0;
      b->f20 = 0;
      b->f24 = 0;
      b->f28 = 0;
      b->f2c = 0;
      b->f30 = 0;
      b->f34 = 0;
      b->f38 = 0;
      b->f3c = 0;
      b->f40 = 0;
      b->f44 = 0;
      b->f4c = 0;
    }
  } else {
    blk = 0;
  }
  out->blk = blk;
  out->p = &blk->obj;
  return out;
}
