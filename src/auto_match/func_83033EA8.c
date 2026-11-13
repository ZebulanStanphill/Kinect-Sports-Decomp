typedef struct Node_83033EA8 Node_83033EA8;
struct Node_83033EA8 {
  Node_83033EA8 *next;
  int key;
  int val;
};

extern void fn_83032D88(void *);

int * fn_83033EA8(Node_83033EA8 **head, void **pkey)
{
  Node_83033EA8 *n;
  int *res;
  for (n = *head; n != 0; n = n->next) {
    if (n->key == (int)*pkey) {
      res = &n->val;
      if (*pkey != 0) {
        fn_83032D88(*pkey);
        *pkey = 0;
      }
      return res;
    }
  }
  if (*pkey != 0) {
    fn_83032D88(*pkey);
    *pkey = 0;
  }
  return 0;
}
