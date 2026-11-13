typedef struct Node {
  struct Node *next;
  int pad;
  int *obj;
} Node;
typedef struct Link {
  int pad;
  struct Link *next;
} Link;
typedef struct {
  int pad;
  Link *first;
  char pad2[0x28 - 8];
  Node *head;
  char pad3[0x34 - 0x2c];
  void *ctx;
  void (*f38)(void *);
  void (*f3c)(void *, int);
} M;
typedef struct {
  char pad[0x14];
  void (*cb)(void *, int);
  char pad2[0x30 - 0x18];
  void *ctx;
} G_8257CB40;
extern G_8257CB40 lbl_8327F644;

void fn_8257CB40(M *param_1, int param_2, unsigned char param_3)
{
  Link *l;
  Node *n;
  int *o;
  G_8257CB40 *g;

  if (param_1->ctx != 0 && param_1->f38 != 0) {
    param_1->f38(param_1->ctx);
  }
  if (param_1->ctx != 0 && param_1->f3c != 0) {
    param_1->f3c(param_1->ctx, param_2);
  }
  l = param_1->first;
  while (l != 0) {
    o = (int *)((char *)l - 0x38);
    l = l->next;
    (*(int (**)())(*o + 0xc))(o, param_2);
  }
  if (param_3) {
    for (n = param_1->head->next; n != param_1->head; n = n->next) {
      o = n->obj;
      if (o[2] != 0) {
        (*(int (**)())(*o + 0x1c))(o, param_2);
      }
    }
  }
  g = &lbl_8327F644;
  if (g->ctx != 0) {
    g->cb(g->ctx, param_2);
  }
}
