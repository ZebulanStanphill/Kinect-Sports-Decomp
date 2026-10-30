typedef struct Node_827F1FC8 {
  unsigned short key;
  unsigned short val;
  struct Node_827F1FC8 *prev;
  struct Node_827F1FC8 *next;
} Node_827F1FC8;

typedef struct List_827F1FC8 {
  char pad[0xd0];
  Node_827F1FC8 *first;   /* 0xd0 */
  Node_827F1FC8 *head;    /* 0xd4 */
  int size;               /* 0xd8 */
} List_827F1FC8;

extern Node_827F1FC8 *fn_827F1E58(List_827F1FC8 *l, Node_827F1FC8 *where, unsigned short *v);

Node_827F1FC8 **fn_827F1FC8(Node_827F1FC8 **out, List_827F1FC8 *l, unsigned short *v)
{
  Node_827F1FC8 *end = l->head;
  Node_827F1FC8 *where = l->first;
  if (where != end) {
    do {
      if (where->key >= *v) {
        break;
      }
      where = where->next;
    } while (where != end);
  }
  l->size = l->size + 1;
  *out = fn_827F1E58(l, where, v);
  return out;
}
