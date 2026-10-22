extern void fn_82699DF0(void *, int, void *);
extern void fn_82705900(void *, void *);

typedef struct Node Node;
typedef struct {
  char pad[0x20];
  void (*f20)(Node *, void *);
  char pad2[0x38 - 0x24];
  unsigned int (*f38)(Node *);
  void (*f3c)(Node *);
} NodeVT;

struct Node {
  NodeVT *vt;
  char pad[0x1c];
  Node *next;
  char pad2[0x66 - 0x24];
  unsigned char flags;
};

typedef struct Owner Owner;
typedef struct {
  char pad[0x40];
  void *(*f40)(Owner *);
} OwnerVT;

struct Owner {
  OwnerVT *vt;
  char pad[0xa0 - 4];
  char *pa0;
  int pad2;
  char sub[1];
};

typedef struct {
  char pad[0x10];
  void *p10;
} Info;

void fn_826C7308(Owner *self, int arg, Node *node, Info **info)
{
  Node *c;

  if ((*info)->p10 != 0) {
    node->vt->f20(node, info);
  }
  for (c = node->next; c != 0; c = c->next) {
    if (c->vt->f38(c)) {
      node->flags |= 1;
      node->vt->f3c(node);
      break;
    }
  }
  fn_82699DF0(self->sub, arg, node);
  if ((*info)->p10 != 0 && (node->flags & 0x80) != 0) {
    fn_82705900(self->vt->f40(self), node);
  }
  *(unsigned int *)(self->pa0 + 0xb00) |= 0x400;
}
