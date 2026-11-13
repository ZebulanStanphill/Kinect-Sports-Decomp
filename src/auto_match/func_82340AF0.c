typedef struct Elem_82340AF0 {
  int key;
  int f4, f8, fc, f10;
  int f14;
  unsigned f18;
} Elem_82340AF0;
typedef struct Tgt_82340AF0 {
  char pad[0x100];
  unsigned *table;
} Tgt_82340AF0;
typedef struct D_82340AF0 { char pad[0x40]; unsigned f40; } D_82340AF0;
typedef struct C_82340AF0 { char pad[0xa0]; D_82340AF0 *d; } C_82340AF0;
typedef struct B_82340AF0 { char pad[0xc]; C_82340AF0 *c; } B_82340AF0;
typedef struct Sub_82340AF0 {
  char pad[0x74];
  Tgt_82340AF0 *f74;
  char pad2[0x1a0 - 0x78];
  B_82340AF0 *f1a0;
} Sub_82340AF0;
typedef struct Ctx_82340AF0 {
  Elem_82340AF0 *begin;
  Elem_82340AF0 *end;
  char pad[8];
  Sub_82340AF0 *sub;
  char pad2[8];
  int f1c;
} Ctx_82340AF0;
typedef struct Self_82340AF0 { Ctx_82340AF0 *ctx; } Self_82340AF0;

extern int fn_823400C8(Elem_82340AF0 *e);
extern unsigned char fn_828EA608(Tgt_82340AF0 *t);

static Tgt_82340AF0 *check_(Tgt_82340AF0 *t)
{
  if (t != 0 && fn_828EA608(t) != 0) {
    return t;
  }
  return 0;
}

void fn_82340AF0(Self_82340AF0 *p, int key, int add)
{
  int d;
  Tgt_82340AF0 *t;
  Elem_82340AF0 *e;
  int idx;
  unsigned *tbl;
  Elem_82340AF0 *end;
  Ctx_82340AF0 *c;

  c = p->ctx;
  d = (int)c->sub->f1a0->c->d;
  if (d == 0 || ((D_82340AF0 *)d)->f40 != 1) {
    t = check_(p->ctx->sub->f74);
    if (t != 0) {
      end = p->ctx->end;
      for (e = p->ctx->begin; e != end && e->key != key; e++) {
      }
      e->f18 = e->f18 + add;
      if (p->ctx->f1c != 0) {
        idx = e->f14;
      } else {
        idx = fn_823400C8(e);
      }
      tbl = t->table;
      if (tbl[idx] != e->f18) {
        tbl[idx] = e->f18;
      }
    }
  }
}
