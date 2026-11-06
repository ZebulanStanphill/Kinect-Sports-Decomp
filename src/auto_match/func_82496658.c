extern void fn_8248F8E8(void *p);
extern void fn_82491E88(void *p);
extern char lbl_821BEBB0[];
extern char lbl_821BEBAC[];

typedef struct In_82496658 {
  void *vt;
  char pad4[0x30 - 4];
  char sub[1];
} In_82496658;

typedef struct Node_82496658 {
  struct Node_82496658 *next;
  struct Node_82496658 *prev;
  char pad8[0x20 - 8];
  In_82496658 in;
} Node_82496658;

typedef struct Vec_82496658 {
  char **first;
  char **last;
  char **end;
} Vec_82496658;

typedef struct List_82496658 {
  int pad0;
  Node_82496658 *head;
  int size;
  int pad0c;
  Vec_82496658 vec;
} List_82496658;

void fn_82496658(List_82496658 *self)
{
  Vec_82496658 *v = &self->vec;
  char **it;
  Node_82496658 *head;
  Node_82496658 *n;
  Node_82496658 *next;
  In_82496658 *in;

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
  while (n != self->head) { next = n->next; in = &n->in; in->vt = lbl_821BEBAC; fn_82491E88(in->sub); in->vt = lbl_821BEBB0; fn_8248F8E8(n); n = next; }
  fn_8248F8E8(self->head);
}
