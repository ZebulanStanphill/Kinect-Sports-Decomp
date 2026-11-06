typedef struct { char pad[0x30]; short next; short prev; char pad2[12]; } Node_82819398;

void fn_82819398(char *base, short *head, short idx)
{
  Node_82819398 *n = (Node_82819398 *)base + idx;
  short prev = n->prev;
  short next = n->next;
  if (prev != -1) {
    ((Node_82819398 *)base)[prev].next = next;
  } else {
    *head = next;
  }
  if (next != -1) {
    ((Node_82819398 *)base)[next].prev = prev;
  }
  n->next = -1;
  n->prev = -1;
}
