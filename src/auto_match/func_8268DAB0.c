typedef struct Node_8268DAB0 {
  char pad[0x14];
  struct Node_8268DAB0 *next;
} Node_8268DAB0;
typedef struct {
  Node_8268DAB0 *head;
  Node_8268DAB0 *tail;
} List_8268DAB0;
extern char lbl_831E7E80[];
extern List_8268DAB0 lbl_831E9284;
extern void fn_8268DA20(void *owner, Node_8268DAB0 *n);

void fn_8268DAB0(Node_8268DAB0 *n)
{
  fn_8268DA20(lbl_831E7E80, n);
  if (lbl_831E9284.tail != 0) {
    Node_8268DAB0 *t = lbl_831E9284.tail;
    lbl_831E9284.tail = n;
    t->next = n;
  } else {
    lbl_831E9284.tail = n;
    lbl_831E9284.head = n;
  }
}
