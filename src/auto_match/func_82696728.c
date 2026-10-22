typedef struct RC { int f0; int f4; int rc; } RC;
typedef struct Node { char pad[8]; unsigned int flags; } Node;
typedef struct Tab { int f0; int f4; RC *def; } Tab;
typedef struct Ctx { char pad[0x78]; Tab *tab; } Ctx;
typedef struct Val { char type; char pad[3]; RC *ref; } Val;
typedef struct Out { Node *node; int f4; unsigned char f8; } Out;

extern void fn_826824B0(Node *);
extern void fn_826944C8(RC *);
extern Node *fn_826B1330(Tab *, RC **);

static void Release(RC *p)
{
  if (--p->rc == 0) {
    fn_826944C8(p);
  }
}

Out *fn_82696728(Out *out, Val *v, Ctx *c)
{
  RC *ref;
  RC *q;
  Node *n;

  if (c != 0 && v->type == 11) {
    ref = c->tab->def;
    ref->rc++;
    q = v->ref;
    q->rc++;
    Release(ref);
    ref = q;
    n = fn_826B1330(c->tab, &ref);
    if (n != 0) {
      n->flags = (n->flags + 1) & 0x8fffffff;
    }
    out->node = n;
    out->f8 = 0;
    if (n != 0) {
      n->flags = (n->flags + 1) & 0x8fffffff;
    }
    out->f4 = 0;
    if (n != 0) {
      fn_826824B0(n);
    }
    Release(ref);
  }
  else {
    out->f8 = 0;
    out->node = 0;
    out->f4 = 0;
  }
  return out;
}
