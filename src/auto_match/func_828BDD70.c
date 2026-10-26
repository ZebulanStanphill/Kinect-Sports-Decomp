typedef struct Node Node;
typedef struct { Node *p; } It;
extern It *fn_828BDBA0(It *ret, void *list, It where);

void fn_828BDD70(char *param_1, Node *n)
{
  It tmp;
  It w;
  w.p = n;
  fn_828BDBA0(&tmp, param_1 + 0x70, w);
}
