typedef struct Node { struct Node *next; struct Node *prev; } Node;
extern unsigned char fn_82773B90(void *, void *);
unsigned char fn_827747B0(char *self, void *a, char *b)
{
  if (fn_82773B90(a, b)) {
    Node *n = *(Node **)(b + 0xc);
    n->next->prev = n->prev;
    n->prev->next = n->next;
    n->next = *(Node **)(self + 0x740);
    n->prev = (Node *)(self + 0x740);
    (*(Node **)(self + 0x740))->prev = n;
    *(Node **)(self + 0x740) = n;
    return 1;
  }
  return 0;
}
