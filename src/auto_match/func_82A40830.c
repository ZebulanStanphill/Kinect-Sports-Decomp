typedef struct Node { void *data; struct Node *next; } Node;
extern void fn_82A44218(void *a, void *b);
void fn_82A40830(char *param_1, void *param_2)
{
  Node *n = *(Node **)(param_1 + 0x188);
  while (n != 0) {
    void **p = n ? &n->data : 0;
    fn_82A44218(*p, param_2);
    if (n == 0) break;
    n = n->next;
  }
}
