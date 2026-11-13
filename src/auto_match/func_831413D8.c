typedef struct Node_831413D8 {
  int f0;
  struct Node_831413D8 *prev;
  struct Node_831413D8 *next;
} Node_831413D8;

typedef struct List_831413D8 {
  void *vt;
  Node_831413D8 head;
  int count;
} List_831413D8;

extern void fn_828CB6C8(void *a, void *b);
extern char lbl_82026780[];
extern List_831413D8 lbl_832143CC;

void fn_831413D8(void)
{
  fn_828CB6C8(&lbl_832143CC.head, &lbl_832143CC.head);
  lbl_832143CC.head.f0 = 0;
  lbl_832143CC.head.prev = &lbl_832143CC.head;
  lbl_832143CC.head.next = &lbl_832143CC.head;
  lbl_832143CC.vt = lbl_82026780;
  lbl_832143CC.count = 0;
}
