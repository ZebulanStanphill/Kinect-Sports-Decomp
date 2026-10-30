typedef struct Node_82F62E30 {
  struct Node_82F62E30 *next;
  void *arg;
  void (*fn)(int, void *, void *);
} Node_82F62E30;
typedef struct Owner_82F62E30 {
  char pad[0x28];
  Node_82F62E30 *a;
  Node_82F62E30 *b;
} Owner_82F62E30;
extern void fn_8265CA20(void *);

void fn_82F62E30(Owner_82F62E30 *o)
{
  Node_82F62E30 *p, *n;
  for (p = o->b; p != 0; p = p->next) {
    p->fn(0, o, p->arg);
  }
  p = o->a;
  while (p != 0) {
    n = p->next;
    fn_8265CA20(p);
    p = n;
  }
  p = o->b;
  o->a = 0;
  while (p != 0) {
    n = p->next;
    fn_8265CA20(p);
    p = n;
  }
  o->b = 0;
}
