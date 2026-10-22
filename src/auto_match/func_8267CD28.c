extern int *fn_8267B890(unsigned int a, int b, int c);
extern int fn_82A1E6A0();
extern unsigned int lbl_831E7E64;

typedef struct Node { int v; struct Node *next; int c; } Node;

Node *fn_8267CD28(char *param_1)
{
  Node *p;

  p = *(Node **)(param_1 + 0x1c);
  if (p != 0) {
    *(Node **)(param_1 + 0x1c) = p->next;
  }
  else {
    p = (Node *)fn_8267B890(lbl_831E7E64, 0xc, 0);
    p->next = 0;
    p->c = 0;
    p->v = fn_82A1E6A0(0, 1, 0, 0);
  }
  return p;
}
