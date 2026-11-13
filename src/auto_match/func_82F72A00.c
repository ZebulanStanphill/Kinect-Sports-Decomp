extern unsigned int lbl_82169D7C;


extern char lbl_832635A0[];
typedef struct Node { void *vt; struct Node *next; unsigned data; int idx; } Node;
typedef struct List { Node *head; unsigned char state; } List;
extern Node *fn_82F72318(char *, int, int);

void fn_82F72A00(List *l, unsigned data)
{
  Node *mem;
  Node *n;

  if (data != 0) {
    mem = fn_82F72318(lbl_832635A0, 0x10, 0);
    if (mem != 0) {
      Node *old = l->head;
      mem->data = data;
      mem->idx = -1;
      mem->vt = (void *)&lbl_82169D7C;
      mem->next = old;
      n = mem;
    } else {
      n = 0;
    }
    l->head = n;
    if (n != 0) {
      return;
    }
  }
  l->state = 3;
}
