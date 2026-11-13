typedef struct Node { struct Node *left, *parent, *right; int key; char *val; } Node;
typedef struct { int alloc; Node *head; int size; } Tree;
extern void fn_82880040(void *a, void *b);
extern void fn_828EA790(Node **it);
extern void (*lbl_832129D0)(void);
extern Tree lbl_83212A00;

void fn_82880D70(void)
{
  Node *it;
  Node *end;

  end = lbl_83212A00.head;
  it = end->left;
  while (it != end) {
    if (it->val != 0) {
      fn_82880040(it->val + 0xa4, it->val + 0x98);
      end = lbl_83212A00.head;
    }
    fn_828EA790(&it);
  }
  if (lbl_832129D0 != 0) {
    (*lbl_832129D0)();
  }
}
