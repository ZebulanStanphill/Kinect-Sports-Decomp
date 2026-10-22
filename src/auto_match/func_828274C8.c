typedef struct Elem { struct Elem *next; int pad[4]; void *flag; } Elem;
typedef struct { int pad; Elem *head; } List;
typedef struct { char pad[0x28]; List *list; } Node;

extern void fn_82518FF0(Elem **);
extern void fn_828223C8(Node *, Node **);

static Node *next(Node *cursor)
{
  Node *out;
  fn_828223C8(cursor, &out);
  return out;
}

void fn_828274C8(char *param_1, int *param_2)
{
  Node *cur;
  int count;
  Elem *end;
  Elem *it;

  cur = (Node *)(param_1 + 0x2f4);
  count = 0;
  while ((cur = next(cur)) != 0) {
    end = cur->list->head;
    it = end->next;
    while (it != end) {
      if (it->flag != 0) {
        count++;
        break;
      }
      fn_82518FF0(&it);
    }
  }
  *param_2 = count;
}
