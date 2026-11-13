struct Lk_82A4B938;
typedef struct { char pad[8]; void (*f8)(struct Lk_82A4B938 *); char pad2[8]; void (*f14)(struct Lk_82A4B938 *); } Vt_82A4B938;
typedef struct Lk_82A4B938 { Vt_82A4B938 *vt; } Lk_82A4B938;
typedef struct Node_82A4B938 { unsigned key; struct Node_82A4B938 *next; } Node_82A4B938;
typedef struct {
  char pad0[0x54];
  Lk_82A4B938 lk;
  char pad1[0x78 - 0x58];
  char sub[0x144 - 0x78];
  Node_82A4B938 *head;
} Obj_82A4B938;
extern void fn_82A40B38(void *, Node_82A4B938 *);

static Node_82A4B938 *Find_82A4B938(Node_82A4B938 *n, unsigned key) { for (; n != 0; n = n->next) if (n->key == key) return n; return 0; }
void fn_82A4B938(Obj_82A4B938 *o, unsigned key)
{
  Lk_82A4B938 *lk = &o->lk;
  Node_82A4B938 *n;
  lk->vt->f8(lk);
  n = Find_82A4B938(o->head, key);
  fn_82A40B38(o->sub, n);
  lk->vt->f14(lk);
}
