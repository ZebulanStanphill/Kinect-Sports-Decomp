extern int fn_82FA5060();
typedef struct Sub { int a; int b; int c; int d; int e; int f; } Sub;
typedef struct Node { struct Node *next; int key; Sub s; } Node;
typedef struct Tab { int heap; Node *bucket[0xc1]; int count; } Tab;

Sub *fn_82FFE528(Tab *param_1, int param_2, int param_3)
{
  Node *n;
  Sub *s;
  n = (Node *)fn_82FA5060(param_1->heap, 0x24);
  if (n == 0) return 0;
  n->next = param_1->bucket[param_3];
  n->key = param_2;
  s = &n->s;
  if (s != 0) {
    s->c = 0;
    s->d = 0;
    s->e = 0;
    s->f = 1;
    s->a = 0;
    s->b = 0;
  }
  param_1->bucket[param_3] = n;
  param_1->count++;
  return s;
}
