typedef struct Link_827B7F88 {
  struct Link_827B7F88 *prev;
  struct Link_827B7F88 *next;
  void *data;
} Link_827B7F88;
typedef struct Obj_827B7F88 {
  unsigned char pad[0x30];
  Link_827B7F88 list;
} Obj_827B7F88;
extern void *fn_827B5670(void *data, unsigned int key);
extern void fn_827B7AE0(Obj_827B7F88 *o, Link_827B7F88 *n);

static void Link_unlink(Link_827B7F88 *n) { n->prev->next = n->next; n->next->prev = n->prev; }
static void Link_push_front(Link_827B7F88 *h, Link_827B7F88 *n) { n->next = h->next; n->prev = h; h->next->prev = n; h->next = n; }
void fn_827B7F88(Obj_827B7F88 *o, unsigned int key)
{
  Link_827B7F88 *n = o->list.next; Link_827B7F88 *next;
  while (n != &o->list) { next = n->next; if (fn_827B5670(n->data, key) != 0) { fn_827B7AE0(o, n); Link_unlink(n); Link_push_front(&o->list, n); } n = next; }
}
