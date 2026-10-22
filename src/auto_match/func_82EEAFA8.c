typedef struct Node {
  unsigned int offset;
  unsigned char flag;
  unsigned char pad;
  unsigned short delta;
} Node;

extern void *fn_82E50BE8(int, int, int, int, int);
extern void fn_82E4FE40(void *);
extern unsigned int fn_82E58B58(int, Node *);

int fn_82EEAFA8(int param_1, unsigned __int64 offset, unsigned char flag)
{
  Node *n;
  Node *first;
  int hr;
  int i;
  unsigned __int64 diff;

  hr = 0;
  n = (Node *)fn_82E50BE8(8, 0, 0, 0, 0);
  if (n == 0) {
    hr = 0x8007000e;
  }
  else {
    for (i = 0; i < 2; i++)
      ((unsigned int *)n)[i] = 0;
    n->flag = flag;
    n->delta = 1;
    n->offset = offset;
    if (*(Node ***)(param_1 + 0xe4) != 0 && (first = **(Node ***)(param_1 + 0xe4)) != 0 &&
        n->offset >= first->offset) {
      diff = n->offset - first->offset;
      if (diff <= 0xffff)
        first->delta = (unsigned short)diff;
    }
    if (fn_82E58B58(param_1, n) == 0) {
      hr = 0x8007000e;
    }
    else {
      n = 0;
    }
    if (n != 0) {
      fn_82E4FE40(n);
    }
  }
  return hr;
}
