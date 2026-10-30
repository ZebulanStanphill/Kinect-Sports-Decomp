typedef struct Sub_82FFB900 { void *a; int b; int pad1[3]; unsigned int count; } Sub_82FFB900;
typedef struct Node_82FFB900 { int pad0[2]; Sub_82FFB900 s; } Node_82FFB900;
typedef struct Ent_82FFB900 { int pad[2]; Node_82FFB900 *node; } Ent_82FFB900;
typedef struct Item_82FFB900 { int key; int pad[2]; } Item_82FFB900;
typedef struct Set_82FFB900 {
  char pad0[0x20];
  unsigned int n;
  int pad1;
  Item_82FFB900 *items;
  char pad2[0x1c];
  unsigned char flags;
} Set_82FFB900;
typedef struct Ctx_82FFB900 {
  char pad0[0x50];
  int cs[0x10];
  char tbl[1];
} Ctx_82FFB900;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_82FFDF28(Ent_82FFB900 *out, void *tbl, int key);
extern void fn_82FFF348(void *out, void *tbl, Ent_82FFB900 *e);
extern void fn_82FA52E0(void *heap, void *p);
extern void *lbl_832645A4;

void fn_82FFB900(Ctx_82FFB900 *c, Set_82FFB900 *s)
{
  Ent_82FFB900 e;
  char out[16];
  unsigned int i;
  Node_82FFB900 *n;
  Sub_82FFB900 *r;

  if ((s->flags & 0x20) != 0 && s->items != 0) {
    RtlEnterCriticalSection(c->cs);
    for (i = 0; i < s->n; i++) {
      fn_82FFDF28(&e, c->tbl, s->items[i].key);
      n = e.node;
      if (n != 0) {
        r = &n->s;
        r->count = r->count - 1;
        if (r->count == 0 && r->a != 0) {
          fn_82FA52E0(lbl_832645A4, r->a);
          r->a = 0;
          r->b = 0;
        }
        if (r->count == 0) {
          fn_82FFF348(out, c->tbl, &e);
        }
      }
    }
    RtlLeaveCriticalSection(c->cs);
    s->flags = s->flags & 0xdf;
  }
}
