typedef struct { char pad[0x4db4]; unsigned flags; } Ctx_82635FE8;
typedef struct { unsigned a; unsigned b; } Ele_82635FE8;
typedef struct {
  Ctx_82635FE8 *ctx;
  char pad[0x68];
  Ele_82635FE8 *arr;
  unsigned n;
  int pad2;
  int flag;
  char pad3[0x26d0 - 0x7c];
} Ent_82635FE8;
typedef struct { unsigned idx; int pad[3]; Ent_82635FE8 ents[1]; } Top_82635FE8;
extern void fn_82634AE0(Ent_82635FE8 *);

int fn_82635FE8(Top_82635FE8 *t)
{
  Ent_82635FE8 *e = &t->ents[t->idx];
  Ele_82635FE8 *p;
  unsigned n;
  fn_82634AE0(e);
  if ((unsigned char)(((~e->ctx->flags) >> 4) & 1) != 0 && (n = e->n) != 0) {
    p = e->arr + n - 1;
    if (p != 0 && ((1u << ((p->b >> 12) & 0xf)) & 0x607e) != 0) e->flag = 1;
  }
  return e->n;
}
