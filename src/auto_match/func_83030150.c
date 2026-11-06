extern void fn_82FB02C8(void *a, void *b);
extern void fn_8302FA48(void *a, int b, int c);

typedef struct Sub_83030150 {
  char pad0[0x18];
  unsigned int id;
  char pad1c[0x64 - 0x1c];
  int state;
} Sub_83030150;

typedef struct Node_83030150 {
  struct Node_83030150 *next;
  int pad4;
  Sub_83030150 sub;
} Node_83030150;

typedef struct Mgr_83030150 {
  char pad0[0x104];
  Node_83030150 *head;
} Mgr_83030150;

typedef struct Msg_83030150 {
  unsigned int kind;
  int pad4;
  unsigned int target;
} Msg_83030150;

void fn_83030150(Mgr_83030150 *mgr, Msg_83030150 *msg)
{
  Node_83030150 *n;
  Sub_83030150 *s;
  unsigned int target;

  switch (msg->kind) {
  case 0:
    fn_8302FA48(mgr, msg->target, 0);
    break;
  case 1:
    target = msg->target;
    for (n = mgr->head; n != 0; n = n->next) {
      s = &n->sub;
      if ((target == 0 || target == s->id) && s->state != 1) {
        s->state = 1;
      }
    }
    break;
  case 2:
    target = msg->target;
    for (n = mgr->head; n != 0; n = n->next) {
      s = &n->sub;
      if ((target == 0 || target == s->id) && s->state != 0) {
        s->state = 0;
      }
    }
    break;
  }
  fn_82FB02C8(mgr, msg);
}
