extern unsigned int *fn_8265C9E0(int);
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B6840;

typedef struct { unsigned int *ptr; unsigned int *rep; } SP;
typedef struct { unsigned int vt; unsigned int uses; unsigned int weak; } RC;
typedef struct { unsigned int vt; unsigned int v; unsigned int x; } Obj;
typedef struct { RC rc; Obj obj; } Blk;

static void Obj_init(Obj *o, unsigned int x, unsigned int *src)
{
  unsigned int v = *src;
  o->x = x;
  o->vt = (unsigned int)&lbl_821B6840;
  o->v = v;
}

static Blk *Blk_init(Blk *b, unsigned int x, unsigned int *src)
{
  b->rc.uses = 1;
  b->rc.vt = (unsigned int)&lbl_821AD588;
  b->rc.weak = 1;
  if (&b->obj)
    Obj_init(&b->obj, x, src);
  return b;
}

static void SP_set(SP *r, Blk *b)
{
  r->rep = (unsigned int *)b;
  r->ptr = (unsigned int *)&b->obj;
}

SP *fn_8236D378(SP *r, unsigned int x, unsigned int *src)
{
  Blk *m = (Blk *)fn_8265C9E0(0x20);
  SP_set(r, m ? Blk_init(m, x, src) : 0);
  return r;
}
