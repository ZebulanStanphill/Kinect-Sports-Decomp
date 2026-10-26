typedef struct Node { struct Node *left; } Node;
typedef struct { Node *node; } It;
typedef struct { int a; Node *head; } Tree;
extern void fn_82272D90(void *out, void *t, It first, It last);
extern void fn_822B4378(void *out, void *t, It first, It last);
extern void fn_8265CA20(Node *p);
static It t_begin(Tree *t) { It i; i.node = t->head->left; return i; }
static It t_end(Tree *t) { It i; i.node = t->head; return i; }

void fn_822B4040(char *param_1)
{
  char buf[16];
  Tree *t1 = (Tree *)(param_1 + 0x10);
  Tree *t2 = (Tree *)param_1;
  fn_82272D90(buf, t1, t_begin(t1), t_end(t1));
  fn_8265CA20(t1->head);
  fn_822B4378(buf, t2, t_begin(t2), t_end(t2));
  fn_8265CA20(t2->head);
}
