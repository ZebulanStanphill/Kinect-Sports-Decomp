#define __lwsync() __emit(0x7C2004AC)
long _InterlockedCompareExchange(long volatile *dest, long exchange, long comparand);
extern char lbl_82197CE0[];
typedef struct Node_8224BFA0 {
  struct Node_8224BFA0 *prev;
  struct Node_8224BFA0 *next;
  int owner;
} Node_8224BFA0;
typedef struct Head_8224BFA0 {
  Node_8224BFA0 *prev;
  Node_8224BFA0 *next;
} Head_8224BFA0;
typedef struct List_8224BFA0 {
  Head_8224BFA0 head;
  long lock;
} List_8224BFA0;
typedef struct Registry_8224BFA0 {
  void *vt;
  List_8224BFA0 list;
} Registry_8224BFA0;
void fn_8224BFA0(Registry_8224BFA0 *self)
{
  Node_8224BFA0 *node;
  List_8224BFA0 *list = &self->list;
  self->vt = lbl_82197CE0;
  while (_InterlockedCompareExchange(&list->lock, 1, 0) != 0) {
  }
  __lwsync();
  for (node = self->list.head.next; node != (Node_8224BFA0 *)list; node = node->next) {
    node->owner = 0;
  }
  __lwsync();
  list->lock = 0;
}
