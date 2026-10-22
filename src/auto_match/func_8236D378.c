typedef unsigned int uint;
extern uint *fn_8265C9E0(int);
extern uint lbl_821AD588;
extern uint lbl_821B6840;

typedef struct { uint *ptr; uint *rep; } SP;
typedef struct { uint vt; uint uses; uint weak; } RC;
typedef struct { uint vt; uint v; uint x; } Obj;
typedef struct { RC rc; Obj obj; } Blk;

static void Obj_init(Obj *o, uint x, uint *src)
{
  uint v = *src;
  o->x = x;
  o->vt = (uint)&lbl_821B6840;
  o->v = v;
}

static Blk *Blk_init(Blk *b, uint x, uint *src)
{
  b->rc.uses = 1;
  b->rc.vt = (uint)&lbl_821AD588;
  b->rc.weak = 1;
  if (&b->obj)
    Obj_init(&b->obj, x, src);
  return b;
}

static void SP_set(SP *r, Blk *b)
{
  r->rep = (uint *)b;
  r->ptr = (uint *)&b->obj;
}

SP *fn_8236D378(SP *r, uint x, uint *src)
{
  Blk *m = (Blk *)fn_8265C9E0(0x20);
  SP_set(r, m ? Blk_init(m, x, src) : 0);
  return r;
}
