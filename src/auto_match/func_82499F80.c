extern void fn_8248F8E8(void *p);
extern void fn_82491E88(void *p);
extern char lbl_821BEBB0[];
extern char lbl_821BEBB8[];

typedef struct In_82499F80 {
  void *vt;
  char pad4[0x50 - 4];
  char sub[1];
} In_82499F80;

typedef struct Node_82499F80 {
  struct Node_82499F80 *next;
  struct Node_82499F80 *prev;
  char pad8[0x20 - 8];
  In_82499F80 in;
} Node_82499F80;

typedef struct Vec_82499F80 {
  char **first;
  char **last;
  char **end;
} Vec_82499F80;

typedef struct List_82499F80 {
  int pad0;
  Node_82499F80 *head;
  int size;
  int pad0c;
  Vec_82499F80 vec;
} List_82499F80;

void fn_82499F80(List_82499F80 *self)
{
  Vec_82499F80 *v = &self->vec;
  char **it;
  Node_82499F80 *head;
  Node_82499F80 *n;
  Node_82499F80 *next;
  In_82499F80 *in;

  if (v->first != 0) {
    for (it = v->first; it != v->last; it++) {
    }
    fn_8248F8E8(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
  head = self->head;
  n = head->next;
  head->next = head;
  self->head->prev = self->head;
  self->size = 0;
  while (n != self->head) { next = n->next; in = &n->in; in->vt = lbl_821BEBB8; fn_82491E88(in->sub); in->vt = lbl_821BEBB0; fn_8248F8E8(n); n = next; }
  fn_8248F8E8(self->head);
}
