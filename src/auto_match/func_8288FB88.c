typedef struct { unsigned int key; int val; } Pair;
extern int fn_828C88C0(int, unsigned int);
extern char *fn_83062700(void *);
extern void fn_8243CE60(void *, void *, char *, int);

void fn_8288FB88(char *self)
{
  char result[8];
  unsigned int key = 0x8000;
  int val = fn_828C88C0(*(int *)(self + 0xd4), key);
  void *tree = self + 0xc0;
  char *node = fn_83062700(tree);
  Pair *p = (Pair *)(node + 0xc);
  if (p != 0) {
    p->val = val;
    p->key = key;
  }
  fn_8243CE60(result, tree, node, 0);
  self[0xd0] = 1;
}
