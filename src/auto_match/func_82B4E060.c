typedef struct Elem_82B4E060 {
  unsigned int a;
  unsigned int b;
  unsigned int count;
  unsigned int cap;
} Elem_82B4E060;

extern int fn_82AA6648(void *list, void *node, int size);

int fn_82B4E060(int param_1)
{
  unsigned int *list;
  char *e;
  char *s;
  int r;
  Elem_82B4E060 *n;
  Elem_82B4E060 *l;

  list = *(unsigned int **)(param_1 + 0x248);
  e = (list[1] & 1) ? (char *)0 : (char *)((list[0] & ~1u) - 4);
  s = e + *(int *)(e + 8) * 0x20;
  if (*(unsigned char *)s != 0) {
    *(int *)(param_1 + 0x2c) -= 2;
  }
  r = *(int *)(s - 4);
  *(int *)(param_1 + 0x20) = *(int *)(s + 4);
  n = (list[1] & 1) ? (Elem_82B4E060 *)0 : (Elem_82B4E060 *)((list[0] & ~1u) - 4);
  if (--n->count == 0) {
    l = (Elem_82B4E060 *)((unsigned int)n & ~1u);
    *(unsigned int *)(l->b & ~1u) = l->a;
    *(unsigned int *)(l->a & ~1u) = l->b;
    fn_82AA6648(list, n, n->cap * 0x20 + 0x10);
  }
  return r;
}
