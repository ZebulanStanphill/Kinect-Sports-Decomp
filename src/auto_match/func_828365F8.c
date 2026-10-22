typedef struct { char pad[0x14]; unsigned int id; } Info;
typedef struct Node { char pad[0xc]; struct Node *next; Info *info; } Node;
typedef struct { int a, b; Node *head; } Obj;

extern void fn_82835968(Obj *, int, unsigned int *);
extern void *fn_828358A8(Node *);
extern void fn_82F664B0(void *, int, void *);

void fn_828365F8(Obj *param_1, int param_2, void *param_3)
{
  Node *n;
  unsigned int id;

  fn_82835968(param_1, param_2, &id);
  for (n = param_1->head; n != 0; n = n->next) {
    if (n->info->id == id) {
      fn_82F664B0(param_3, 0x100, fn_828358A8(n));
      return;
    }
  }
}
