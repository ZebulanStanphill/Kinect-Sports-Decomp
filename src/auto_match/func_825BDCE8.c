typedef struct Item_825BDCE8 { int f0; int f4; int f8; int fc; int f10; int f14; int f18; } Item_825BDCE8;
typedef struct Node_825BDCE8 { struct Node_825BDCE8 *next; struct Node_825BDCE8 *prev; unsigned key; Item_825BDCE8 *val; } Node_825BDCE8;
typedef struct Bucket_825BDCE8 { Node_825BDCE8 *first; Node_825BDCE8 *last; } Bucket_825BDCE8;
typedef struct Map_825BDCE8 {
  int f0; Node_825BDCE8 *head; int f8; int fc; Bucket_825BDCE8 *buckets; int f14; int f18; int f1c;
  unsigned mask; unsigned nb; int f28; int f2c; int f30;
} Map_825BDCE8;
typedef struct Self_825BDCE8 { char pad[0x5c]; Map_825BDCE8 m; } Self_825BDCE8;
typedef struct Alloc_825BDCE8 { struct { int f0, f4, f8; void *(*alloc)(void *self, int sz, int al); } *vt; } Alloc_825BDCE8;
typedef struct Obj_825BDCE8 { void *vt; char pad[0x64]; int f68[6]; int f80; } Obj_825BDCE8;
extern unsigned fn_827D96A0(void *a);
extern unsigned fn_8256DBA0(Map_825BDCE8 *m, void *key);
extern void fn_827D9720(Item_825BDCE8 *v, unsigned n);
extern int fn_82811400(void *buf, int n);
extern void fn_8256D3A8(void *buf, const char *s);
extern void fn_8256D798(void *buf, int a, int b);
extern void fn_827D9FB0(Obj_825BDCE8 *o, void *a, int *b, int *c, int *d, Node_825BDCE8 **e, Node_825BDCE8 **f);
extern void fn_827D9630(void *d, Item_825BDCE8 *s);
extern Alloc_825BDCE8 *lbl_83156AA0;
extern char lbl_821CAC50[];
extern char lbl_82196582[];

Obj_825BDCE8 *fn_825BDCE8(Self_825BDCE8 *s, void *arg)
{
  Map_825BDCE8 *m;
  Node_825BDCE8 *first;
  unsigned key;
  unsigned mask;
  unsigned idx;
  Node_825BDCE8 *head;
  struct { Node_825BDCE8 *it; Node_825BDCE8 *it2; int a0; int a1; int a2; } L;
  Node_825BDCE8 **pp;
  Node_825BDCE8 *end;
  Bucket_825BDCE8 *b;
  Node_825BDCE8 *found;
  Obj_825BDCE8 *o;
  Item_825BDCE8 *v;
  char tmp1[32];
  char tmp2[0x30];

  key = fn_827D96A0(arg);
  m = &s->m;
  mask = m->mask;
  L.it = (Node_825BDCE8 *)key;
  idx = fn_8256DBA0(m, &L.it) & mask;
  if (m->nb <= idx) idx = idx - (mask >> 1) - 1;
  head = m->head;
  b = &m->buckets[idx];
  first = b->first;
  L.it = first;
  for (;;) {
    if (first == head) end = head; else end = b->last->next;
    if (L.it == end) break;
    if (key <= L.it->key) {
      if (key < L.it->key) { L.it2 = head; pp = &L.it2; } else pp = &L.it;
      head = *pp;
      break;
    }
    L.it = L.it->next;
  }
  if (head != s->m.head) {
    fn_827D9720(head->val, s->m.f30 + 8);
    o = (Obj_825BDCE8 *)lbl_83156AA0->vt->alloc(lbl_83156AA0, 0x88, fn_82811400(tmp1, 4));
    if (o != 0) {
      v = head->val;
      L.it2 = 0; L.it = 0;
      L.a0 = fn_827D96A0(v);
      L.a1 = 1;
      L.a2 = 0;
      fn_8256D3A8(tmp2, lbl_82196582);
      fn_827D9FB0(o, tmp2, &L.a2, &L.a1, &L.a0, &L.it, &L.it2);
      fn_8256D798(tmp2, 1, 0);
      *(char **)o = lbl_821CAC50;
      fn_827D9630(&o->f68[0], v);
      o->f80 = v->f18;
      return o;
    }
  }
  return 0;
}
